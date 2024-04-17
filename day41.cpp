class Solution {
  public:
    vector<int> twoRepeated (int arr[], int n) {
     
       map<int,int>count;
       vector<int>ans;
       for(int i=0;i<n+2;i++)
         {
             count[arr[i]]++;
             
             if(count[arr[i]]==2)
             {
                 ans.push_back(arr[i]);
              }
          }
          
        return ans;
    }
};