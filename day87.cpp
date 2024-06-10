#include <vector>
#include <algorithm>
#include <cmath>

class Solution {
public:
    long long maxTip(int n, int x, int y, std::vector<int> &arr, std::vector<int> &brr) {
        // Create a vector of tuples to store (tip difference, tip for A, tip for B)
        std::vector<std::tuple<int, int, int>> diffs;
        
        for (int i = 0; i < n; ++i) {
            diffs.push_back(std::make_tuple(std::abs(arr[i] - brr[i]), arr[i], brr[i]));
        }
        
        // Sort the differences in descending order
        std::sort(diffs.rbegin(), diffs.rend());
        
        long long totalTip = 0;
        int aCount = 0, bCount = 0;
        
        for (int i = 0; i < n; ++i) {
            int diff = std::get<0>(diffs[i]);
            int tipA = std::get<1>(diffs[i]);
            int tipB = std::get<2>(diffs[i]);
            
            // Assign order to maximize tips
            if ((tipA >= tipB && aCount < x) || bCount >= y) {
                totalTip += tipA;
                aCount++;
            } else {
                totalTip += tipB;
                bCount++;
            }
        }
        
        return totalTip;
    }
};
