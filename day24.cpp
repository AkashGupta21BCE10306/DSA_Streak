//Minimum element in BST
#include<iostream>
using namespace std;
class Solution {
  public:
    int minValue(Node* root) {
        // Code here
          if(!root) return -1;
        if(!root->left) return root->data;
        
        return minValue(root->left);
    }
};
