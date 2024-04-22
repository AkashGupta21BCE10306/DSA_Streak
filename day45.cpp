class Solution {
  public:
    int minRow(int n, int m, vector<vector<int>> a) {
        // code here
        int ans = INT_MAX;
        int r=n;
        for(int i=n-1; i>=0; i--){
            int currRow = 0;
            for(int j=0; j<m; j++){
                if(a[i][j] == 1){
                    currRow++;
                }
            }
            if(ans >= currRow){
                ans = currRow;
                r=i;
            }
        }
        return r+1;

    }
};