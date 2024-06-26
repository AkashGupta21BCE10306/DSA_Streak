class Solution {
  public:
    int findWinner(int n, int x, int y) {
        // code here
        vector<int>dp(n+1,0);
        for(int i = 1 ;i<=n;++i){
            if(i-1 >= 0 && dp[i-1] == 0)dp[i] = 1;
            if(i - x >= 0 && dp[i-x] == 0)dp[i] = 1;
            if(i -y >= 0 && dp[i-y] == 0)dp[i]=1;
        }
        return dp[n];
    }
};
