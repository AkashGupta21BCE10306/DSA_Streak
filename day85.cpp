class Solution {
  public:
    void zigZag(int n, vector<int> &arr) {
        // code here
          int temp;
    int temp1;
    
      for(int i=0;i<n-1; i=i+2)
      {
          if(arr[i]>arr[i+1])
          {
              temp = arr[i];
              arr[i] = arr[i+1];
              arr[i+1] =temp;
          }
          if(i+2<n && arr[i+1]<arr[i+2])
          {
              temp1 = arr[i+1];
              arr[i+1]=arr[i+2];
              arr[i+2]=temp1;
          }
      }
    
    }
};