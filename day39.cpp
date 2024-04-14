class Solution {
  public:
    vector<int> countElements(vector<int> &a, vector<int> &b, int n, vector<int> &query,
                              int q) {
        // Your code goes here;
        sort(b.begin(),b.end());
        vector<int>v;
        for(auto i:query)
        {
            int c=lower_bound(b.begin(),b.end(),a[i]+1)-              
            b.begin();
            v.push_back(c);
        }
        return v;
    }
};