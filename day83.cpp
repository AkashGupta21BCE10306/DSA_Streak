#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxOccured(int n, int l[], int r[], int maxx) {
        vector<int> arr(maxx + 2, 0);

        // Step 1: Use the difference array technique
        for (int i = 0; i < n; i++) {
            arr[l[i]]++;
            if (r[i] + 1 <= maxx) {
                arr[r[i] + 1]--;
            }
        }

        // Step 2: Compute prefix sums to get actual counts
        int maxCount = arr[0];
        int maxOccurredInteger = 0;
        for (int i = 1; i <= maxx; i++) {
            arr[i] += arr[i - 1];
            if (arr[i] > maxCount) {
                maxCount = arr[i];
                maxOccurredInteger = i;
            }
        }

        return maxOccurredInteger;
    }
};

// Example usage
int main() {
    Solution sol;
    int n1 = 4;
    int l1[] = {1, 4, 3, 1};
    int r1[] = {15, 8, 5, 4};
    int maxx1 = 15;
    cout << sol.maxOccured(n1, l1, r1, maxx1) << endl; // Output: 4

    int n2 = 5;
    int l2[] = {1, 5, 9, 13, 21};
    int r2[] = {15, 8, 12, 20, 30};
    int maxx2 = 30;
    cout << sol.maxOccured(n2, l2, r2, maxx2) << endl; // Output: 5

    return 0;
}
