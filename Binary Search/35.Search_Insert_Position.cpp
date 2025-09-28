// 35. Search Insert Position
// https://leetcode.com/problems/search-insert-position/
// Time Complexity: O(log n)   (Binary Search)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int st = 0, end = nums.size() - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (nums[mid] == target) {
                return mid;                // Target found
            } 
            else if (nums[mid] > target) {
                end = mid - 1;             // Search left half
            } 
            else {
                st = mid + 1;              // Search right half
            }
        }

        // If target not found, 'st' is the correct insert position
        return st;
    }
};

// Example usage
int main() {
    Solution sol;
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;

    cout << sol.searchInsert(nums, target) << endl; // Output: 2
    return 0;
}
