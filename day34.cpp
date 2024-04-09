class Solution{
    public:
    int findSingle(int n, int arr[]){
      sort(arr,arr+n);
      for(int i=0;i<n;i+=2)
      {
          if(arr[i]!=arr[i+1])
          {
              return arr[i];
          }
      }
      return arr[n];
    }
};