
#include <vector>
#include <algorithm> // for reverse and swap
#include <iostream>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int pivot = -1;

        // Step 1: Find the pivot (first number from right that is smaller than its next)
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                pivot = i;
                break;
            }
        }

        // Step 2: If pivot exists, swap it with the smallest number larger than pivot to its right
        if (pivot != -1) {
            for (int i = n - 1; i > pivot; i--) {
                if (nums[i] > nums[pivot]) {
                    swap(nums[i], nums[pivot]);
                    break;
                }
            }
        }

        // Step 3: Reverse the subarray after pivot to get the next permutation
        reverse(nums.begin() + pivot + 1, nums.end());
    }
};

// Time Complexity: O(n) - single pass to find pivot + single pass to swap + reverse
// Space Complexity: O(1) - in-place modification
// Approach:
// 1. Scan from right to left to find the first "pivot" where nums[i] < nums[i+1].
// 2. If pivot exists, find the smallest number greater than pivot in the suffix and swap.
// 3. Reverse the suffix to get the next lexicographical permutation.
