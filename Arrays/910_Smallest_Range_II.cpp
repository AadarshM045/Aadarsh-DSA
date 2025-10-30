/*
Leetcode:- 910_Smallest_Range_II.cpp

    Time Complexity: O(n log n)
    - Sorting the array dominates the runtime.

    Space Complexity: O(1)
    - Uses only a few extra variables, no additional data structures.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 1) return 0;

        // Step 1: Sort the array to make comparison easier
        sort(nums.begin(), nums.end());

        // Step 2: Initialize result as the unmodified range
        int diff = nums[n - 1] - nums[0];

        // Step 3: Iterate through possible split points
        for (int i = 0; i < n - 1; i++) {
            int high = max(nums[n - 1] - k, nums[i] + k);
            int low  = min(nums[0] + k, nums[i + 1] - k);
            diff = min(diff, high - low);
        }

        return diff;
    }
};

// Test the function
int main() {
    Solution sol;

    vector<int> nums = {1, 3, 6};
    int k = 3;

    int result = sol.smallestRangeII(nums, k);
    cout << "Smallest possible range: " << result << endl;

    return 0;
}

/*
    Approach:
    1. Sort the array.
    2. Consider each split point i where:
       - Elements [0...i] are increased by k.
       - Elements [i+1...n-1] are decreased by k.
    3. For each split, compute:
       - high = max(nums[n-1] - k, nums[i] + k)
       - low  = min(nums[0] + k, nums[i+1] - k)
    4. Keep track of the minimum (high - low).
    5. Return the smallest possible range after all adjustments.
*/
