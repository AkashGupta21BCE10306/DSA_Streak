class Solution {
  public:
    int firstElement(int n) {
        // code here
        long long int mod=1000000007;
        int arr[2][2]={{1,1},
                 {1,0}};
        if(n==1) return 1;
        for(int i=1;i<n;i++){
            int d=arr[0][1];
            arr[0][1]=arr[0][0];
            arr[1][0]=arr[0][0];
            arr[0][0]=(arr[0][0]+d)%mod;
        }
        return arr[1][0];
    }
};