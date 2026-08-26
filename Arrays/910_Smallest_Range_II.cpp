/*
Leetcode: 910_Smallest_Range_II

Problem: Given an array nums and integer k, you can either add k or subtract k 
from each element. Find the smallest possible difference between the maximum 
and minimum values after modification.

Time Complexity: O(n log n) - dominated by sorting
Space Complexity: O(1) - only uses constant extra space

Key Insight: After sorting, the optimal strategy is to:
1. Increase some prefix elements by k
2. Decrease the remaining suffix elements by k
3. The split point is where we switch from increasing to decreasing
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        int n = nums.size();
        if (n <= 1) return 0;
        
        // Sort to establish order for the split strategy
        sort(nums.begin(), nums.end());
        
        // Initialize with the original range (no modifications)
        int minRange = nums[n - 1] - nums[0];
        
        // Try every possible split point
        // Elements before split: +k, elements after split: -k
        for (int split = 0; split < n - 1; ++split) {
            // After modification, the maximum will be either:
            // - The largest decreased element: nums[n-1] - k
            // - The largest increased element: nums[split] + k
            int newMax = max(nums[n - 1] - k, nums[split] + k);
            
            // After modification, the minimum will be either:
            // - The smallest increased element: nums[0] + k
            // - The smallest decreased element: nums[split + 1] - k
            int newMin = min(nums[0] + k, nums[split + 1] - k);
            
            // Update the minimum range found so far
            minRange = min(minRange, newMax - newMin);
        }
        
        return minRange;
    }
};

// Comprehensive test function
void runTest(vector<int> nums, int k, int expected) {
    Solution sol;
    int result = sol.smallestRangeII(nums, k);
    cout << "nums = [";
    for (size_t i = 0; i < nums.size(); ++i) {
        cout << nums[i];
        if (i < nums.size() - 1) cout << ", ";
    }
    cout << "], k = " << k;
    cout << " => Result: " << result;
    cout << " (Expected: " << expected << ")";
    cout << (result == expected ? " ✓" : " ✗") << endl;
}

int main() {
    // Test cases covering different scenarios
    cout << "===== Test Cases =====" << endl;
    
    // Basic test case
    runTest({1, 3, 6}, 3, 3);
    
    // Already minimal range
    runTest({1, 2, 3}, 1, 2);
    
    // Large k value
    runTest({0, 10}, 2, 6);
    
    // Single element
    runTest({5}, 10, 0);
    
    // All equal elements
    runTest({1, 1, 1}, 5, 0);
    
    // Negative numbers
    runTest({-5, -1, 3}, 2, 4);
    
    // Random case
    runTest({7, 8, 8, 5, 2}, 4, 1);
    
    // Large array
    runTest({1, 5, 8, 10, 15, 20}, 3, 9);
    
    cout << "\n===== Edge Cases =====" << endl;
    
    // k = 0 (no modification)
    runTest({1, 4, 7, 10}, 0, 9);
    
    // Two elements with exact balance
    runTest({1, 10}, 4, 1);
    
    // All elements can be made equal
    runTest({1, 3, 5, 7, 9}, 4, 4);

    return 0;
}

/*
Detailed Approach:
1. Sort the array to identify which elements should be increased vs decreased
2. The optimal solution always has a split point:
   - Left side (0...i): increased by k
   - Right side (i+1...n-1): decreased by k
   Why? Because sorting ensures all elements we increase are ≤ all elements we decrease
3. For each split point:
   - New max = max(largest decreased, largest increased)
   - New min = min(smallest increased, smallest decreased)
   - Calculate the range and track the minimum
4. Return the minimum range found

Mathematical Justification:
- If we increase a larger element and decrease a smaller element, we're widening the range
- Sorting ensures we only increase the smaller elements and decrease the larger ones
- The split point represents the boundary between these two groups
*/
