//Kth common ancestor in BST
#include<iostream>
using namespace std;
class Solution
{
    public:
    vector<int> anc;
    void helper(Node* root,int x,int y){
        if(root==NULL) return;
        int data=root->data;
        anc.push_back(data);
        if(data<x&&data<y){
            root=root->right;
        }
        else if(data>x&&data>y){
            root=root->left;
        }
        else return;
        helper(root,x,y);
    }
    int kthCommonAncestor(Node *root, int k,int x, int y)
    {
        anc.clear();
        helper(root,x,y);
        if(anc.size()<k) return -1;
        return anc[anc.size()-k];
    }
};

