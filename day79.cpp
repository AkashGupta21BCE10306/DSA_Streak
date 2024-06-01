class Solution {
  public:
    vector<int> constructList(int q, vector<vector<int>> &queries) {
        vector<int> ans;
        int xoor =0;
        
        for(int i=q-1; i>=0; i--){
            
            if(queries[i][0] == 1){
                xoor ^= queries[i][1];
            }
            else{
                int temp = queries[i][1] ^ xoor;
                ans.push_back(temp);
            }
  
        }
        ans.push_back(xoor);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

