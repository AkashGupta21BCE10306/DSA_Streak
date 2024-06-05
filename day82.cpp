class Solution {
  public:
    long long max_sum(int a[], int n) {
        // Calculate initial sum S_0 and total sum sumA
        long long S_0 = 0, sumA = 0;
        for (int i = 0; i < n; i++) {
            S_0 += (long long)i * a[i];
            sumA += a[i];
        }
        
        // Initialize maxSum with the initial sum S_0
        long long maxSum = S_0;
        long long currentSum = S_0;
        
        // Iterate to calculate the sum for each rotation
        for (int k = 1; k < n; k++) {
            currentSum = currentSum + sumA - (long long)n * a[n - k];
            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
        }
        
        return maxSum;
    }
};
