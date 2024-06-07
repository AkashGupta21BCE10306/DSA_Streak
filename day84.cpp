class Solution {
  public:
    int findExtra(int n, int arr1[], int arr2[]) {
        int left = 0, right = n - 2;  // Since arr2 is of size n-1

        while (left <= right) {
            int mid = left + (right - left) / 2;

            // Compare elements at the same position
            if (arr1[mid] == arr2[mid]) {
                // If they are the same, the extra element must be on the right side
                left = mid + 1;
            } else {
                // If they are different, the extra element is at mid or to the left
                right = mid - 1;
            }
        }
        // At the end of the loop, left will be the index of the extra element
        return left;
    }
};
