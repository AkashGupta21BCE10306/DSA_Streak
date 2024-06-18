class Solution {
  public:
    int rectanglesInCircle(int r) 
    {
        int ans=0;
        for(int x=1,y=2*r;x<=2*r;x++)
        {
            while(x*x+y*y>4*r*r)
            {
                y--;
            }
            ans+=y;
        }
        return ans;
    }
};