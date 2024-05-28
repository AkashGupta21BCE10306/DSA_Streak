class Solution {
public:
    int minimumCost(int n, int w, vector<int> &cost) {
        vector<vector<int>>dp(n+1 , vector<int>(w+1 , 1e9));
        
        for(int i = 0 ; i<= n ; i++){
            dp[i][0] = 0;
        }
        
        for(int idx = n-1 ; idx >= 0 ; idx--){
            for(int j = 1 ; j <= w ; j++){
                int notake = dp[idx + 1][j];
                int take = 1e9;
                if (cost[idx] != -1 && j >= idx + 1) {
                    take = cost[idx] + dp[idx][j-(idx + 1)];
                }
                dp[idx][j] = min(take, notake);
            }
        }
        int result = dp[0][w];
        return result >= 1e9 ? -1 : result;
    }
};

