class Solution{
  public:
        map<int,vector<int>> mp;
        void inorder(Node* root, int ut){
            if(root == NULL) 
                return;
            if(root->left)
                inorder(root->left, ut - 1);
        if(root->right)
            inorder(root->right, ut + 1);
            
        mp[ut].push_back(root->data);
        }
  
    vector <int> verticalSum(Node *root) {
        // add code here.
        inorder(root,0);
        vector<int> ans;
        vector<int> tt;
        for(auto& it:mp){
            tt.push_back(it.first);
        }
        sort(tt.begin(),tt.end());
        for(int i = 0; i < tt.size(); i++){
            vector<int> yt = mp[tt[i]];
            int sum = 0;
            for(int j = 0; j < yt.size(); j++){
                sum += yt[j];
            }
            ans.push_back(sum);
        }
        return ans;
    }
};