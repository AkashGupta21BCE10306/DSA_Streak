class Solution
{
    public:
    // function should print the nodes at k distance from root
    void solve(Node* root,int& k,int h,vector<int>&ans){
        if(!root){
            return;
        }
        if(h==k){
            ans.push_back(root->data);
        }
        solve(root->left,k,h+1,ans);
        solve(root->right,k,h+1,ans);
        return;
    }
    vector<int> Kdistance(struct Node *root, int k)
    {
      // Your code here
      vector<int>ans;
      solve(root,k,0,ans);
      return ans;
    }
};