#include <iostream>
#include <algorithm>

class Solution {
public:
    // Function to match nuts and bolts
    void matchPairs(int n, char nuts[], char bolts[]) {
        // Order array as reference for sorting
        char order[] = {'!', '#', '$', '%', '&', '*', '?', '@', '^'};
        std::sort(nuts, nuts + n, [&order](char a, char b) {
            return std::find(order, order + 9, a) < std::find(order, order + 9, b);
        });
        std::sort(bolts, bolts + n, [&order](char a, char b) {
            return std::find(order, order + 9, a) < std::find(order, order + 9, b);
        });
    }
};

// Test function
int main() {
    Solution sol;
    
    int n = 5;
    char nuts[] = {'@', '%', '$', '#', '^'};
    char bolts[] = {'%', '@', '#', '$', '^'};
    
    sol.matchPairs(n, nuts, bolts);
    
    // Output the sorted nuts and bolts
    std::cout << "Nuts: ";
    for (int i = 0; i < n; ++i) {
        std::cout << nuts[i] << " ";
    }
    std::cout << std::endl;
    
    std::cout << "Bolts: ";
    for (int i = 0; i < n; ++i) {
        std::cout << bolts[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
