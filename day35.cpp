class Solution{
    public:
    // function to convert a given Gray equivalent n to Binary equivalent.
    int grayToBinary(int n)
    {
        
        // Your code here
     
        int res = n;
    while (n > 0)
      {
        n=n >> 1;
        res= res^n;
      }
     return res;
    }
    };