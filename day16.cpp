//Diagonal sum in binary tree
#include<iostream>
using namespace std;
class Solution
{
    public:
    void traverse(Node* node, map<int,int> & mp, int x, int y){
        if(node == NULL) return;
        mp[y-x] += node->data;
        if(node->left) traverse(node->left, mp, x-1, y+1);
        if(node->right) traverse(node->right, mp, x+1, y+1);
        return;
    }
    vector <int> diagonalSum(Node* root) {
        // Add your code here
        map<int,int> mp;
        traverse(root, mp,0,0);
        vector<int> v;
        for(auto &it : mp){
            v.push_back(it.second);
        }
        return v;
    }
};

