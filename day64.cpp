class Solution {
public:
    
    int findPeakElement(vector<int>& a) 
    {
        int maxe=0;
        for(int i=0;i<a.size();i++)
        {
            maxe=max(a[i],maxe);
        }
        return maxe;
    


        // Code here.
    }
};