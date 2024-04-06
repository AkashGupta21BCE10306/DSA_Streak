class Solution {
  public:
int maxDotProduct(int n, int m, int A[], int B[]) 
{ 
 // Your code goes here
 vector<vector<int>>dp(m+1,vector<int>(n+1,0));
 for(int i=1;i<=m;i++){
     for(int j=i;j<=n;j++){
         dp[i][j]=max(dp[i-1][j-1]+A[j-1]*B[i-1],dp[i][j-1]);
     }
 }
 return dp[m][n];
 
} 
};