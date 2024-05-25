class Solution {
  public:
    /*You are requried to complete this method */
    long long max_Books(int nums[], int n, int k) {
        long long sum = 0, ans = 0;
        for(int i = 0; i < n; i++) {
            if(nums[i] <= k) {
                sum += nums[i];
                ans = max(ans, sum);
            }
            if(nums[i] > k) {
                sum = 0;
            }
            
        }
        return ans;
    }
}; 

