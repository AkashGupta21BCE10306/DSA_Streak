class Solution {
      public:
      long long reversedBits(long long x) {
long long res = 0;
        for(int i = 0; i < 32; i++)
            res |= (1LL << (31-i)) * ((x >> i) & 1);
        return res;}
        };