void solve(Node *root, vector<vector<int>>&res,vector<int>ans){
       if(root==NULL){
          
           return;
       }
       ans.push_back(root->data);
       
         if(root->right==NULL&&root->left==NULL){
            res.push_back(ans);
       }
       
        solve(root->left,res,ans);
         solve(root->right,res,ans);
   }
    vector<vector<int>> Paths(Node* root) {
        vector<vector<int>>res;
        vector<int>ans;
      solve(root,res,ans);
      return res;
    }
