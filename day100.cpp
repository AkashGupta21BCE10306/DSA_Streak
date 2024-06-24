class Solution {
  public:
    long long sumMatrix(long long n, long long q) {
        // code here  long long r=n+1;
           long long r=n+1;
       if(q==1 || q>2*n){
           return 0;
       }
       if(q==r){
           return n;
       }
        if(q<r){
           return q-1;
       }
       if(q>r){
           return 2*n-q+1;
       }
      
       return 0;
    
    }
};