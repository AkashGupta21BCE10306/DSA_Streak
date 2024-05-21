class Solution {
  public:
    vector<int> printKClosest(vector<int> a, int n, int k, int x) {
        // code here
        map<int,vector<int>> u;
        sort(a.rbegin(),a.rend());
        for(int i=0;i<n;i++){
            if(x!=a[i]) u[abs(x-a[i])].push_back(a[i]);
        }
        vector<int> p;
        for(auto e:u){
            for(auto f:e.second){
                p.push_back(f);
                k--;
                if(k==0) return p; 
            }
        }
        return p;
    }
};

