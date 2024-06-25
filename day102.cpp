class Solution {
public:
    int FindCoverage(vector<vector<int>>&matrix){
    int count = 0;
    int m = matrix.size(), n = matrix[0].size();
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            if(matrix[i][j] == 0) {
                if(j < n-1 && matrix[i][j+1] == 1) 
                    ++count;
                if(j > 0 && matrix[i][j-1] == 1) 
                    ++count;
                if(i < m-1 && matrix[i+1][j] == 1) 
                    ++count;
                if(i > 0 && matrix[i-1][j] == 1) 
                    ++count;
            }
        }
    }
    return count;
}
};