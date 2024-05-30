class Solution {
  public:
    int swapNibbles(int N) {
        // code here
           return (N>>4)|((N&15)<<4);
    }
};