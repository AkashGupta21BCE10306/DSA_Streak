const int MOD = 1e9 + 7;

class Solution {
public:
    // Function to compute the power of 2 modulo MOD
    long long powerOfTwo(int n) {
        long long result = 1, base = 2;
        while (n > 0) {
            if (n % 2 == 1) {
                result = (result * base) % MOD;
            }
            base = (base * base) % MOD;
            n /= 2;
        }
        return result;
    }


    int numberOfConsecutiveOnes(int n) {
        if (n < 2) return 0;

        // dp0[i] means the number of binary strings of length i ending with 0 without consecutive 1s
        // dp1[i] means the number of binary strings of length i ending with 1 without consecutive 1s
        vector<long long> dp0(n + 1), dp1(n + 1);

        dp0[1] = 1;
        dp1[1] = 1;

        for (int i = 2; i <= n; ++i) {
            dp0[i] = (dp0[i - 1] + dp1[i - 1]) % MOD;
            dp1[i] = dp0[i - 1] % MOD;
        }

        long long withoutConsecutiveOnes = (dp0[n] + dp1[n]) % MOD;
        long long totalStrings = powerOfTwo(n);

        long long result = (totalStrings - withoutConsecutiveOnes + MOD) % MOD;
        return result;
    }
};