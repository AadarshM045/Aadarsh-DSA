/*
Problem: 88. Merge Sorted Array
Level: Easy

Approach (Two Pointer from the End):
- We are given two sorted arrays nums1 and nums2.
- nums1 has extra space at the end to hold all elements (size = m + n).
- Use three pointers:
    - i = m - 1 → last valid element in nums1
    - j = n - 1 → last element in nums2
    - k = m + n - 1 → last index of nums1 (position to fill)

Algorithm:
1. Compare nums1[i] and nums2[j] from the end.
2. Place the larger element at nums1[k].
3. Move the corresponding pointer (i or j) backward, and decrement k.
4. If elements remain in nums2 after nums1 is exhausted, copy them over.

Why from the end?
- Because we have free space at the end of nums1.
- Merging backward avoids overwriting nums1 elements that haven’t been checked yet.

Time Complexity: O(m + n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;          // Pointer for nums1
        int j = n - 1;          // Pointer for nums2
        int k = m + n - 1;      // Fill position in nums1

        // Merge from the end
        while (i >= 0 && j >= 0) {
            if (nums1[i] < nums2[j]) {
                nums1[k] = nums2[j];
                j--;
            } else {
                nums1[k] = nums1[i];
                i--;
            }
            k--;
        }

        // Copy remaining elements of nums2 (if any)
        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};

int main() {
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    int m = 3, n = 3;

    Solution().merge(nums1, m, nums2, n);

    cout << "Merged Array: ";
    for (int num : nums1) cout << num << " ";
    cout << endl;

    return 0;
}
