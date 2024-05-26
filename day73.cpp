class Solution {
  public:
    int longestSubseq(int n, vector<int> &a) {
        vector<int> dp(n + 1, 1);
        for (int i = 1; i <=n; i++) {
            for (int j = 1; j < i; j++) {
                if (abs(a[j -1] - a[i -1]) == 1) {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
        }
        
        return *max_element(dp.begin(),dp.end());
    }
};