#include <vector>
#include <algorithm>
#include <iostream>

class Solution {
public:
    void nextPermutation(std::vector<int>& nums) {
        int n = nums.size();
        
        // 1. Find the Pivot Index (i)
        // Scan backward for the first element nums[i] < nums[i+1]
        int pivot_idx = -1;
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                pivot_idx = i;
                break;
            }
        }
        
        // --- EDGE CASE: Largest Permutation ---
        // If no pivot is found (pivot_idx == -1), the array is fully descending (e.g., [3, 2, 1]).
        // We reverse the entire array to get the lowest possible order (e.g., [1, 2, 3]).
        if (pivot_idx == -1) {
            std::reverse(nums.begin(), nums.end());
            return;
        }
        
        // --- Steps 2 & 3: Next Permutation Exists ---
        
        // 2. Find the Swap Index (j)
        // Scan backward from the end to find the smallest element nums[j]
        // that is still strictly greater than the pivot nums[pivot_idx].
        for (int j = n - 1; j > pivot_idx; j--) {
            if (nums[j] > nums[pivot_idx]) {
                // Perform the swap
                std::swap(nums[pivot_idx], nums[j]);
                break; // Stop after the first swap
            }
        }
        
        // 3. Reverse the Suffix
        // Reverse the elements that are to the right of the pivot.
        // This puts them in the lowest possible (ascending) order.
        std::reverse(nums.begin() + pivot_idx + 1, nums.end());
    }
};
