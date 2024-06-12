class Solution
{
    public:   
    int mod=1e9+7;
    int padovanSequence(int n)
    {
       //code here
       if(n<=2){
           return 1;
       }
       vector<int>p(n+1,0);
       p[0]=p[1]=p[2]=1;
       for(int i=3; i<=n;i++){
           p[i]=(p[i-2]+p[i-3])%mod;
       }
       
      return p[n];
    }
    
};