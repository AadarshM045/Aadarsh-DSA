// 26. Remove Duplicates from Sorted Array
// https://leetcode.com/problems/remove-duplicates-from-sorted-array/
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Handle empty array case
        if (nums.empty()) return 0;
        
        int i = 0; // Pointer for the next unique element position
        // j iterates through all elements
        for (int j = 1; j < nums.size(); ++j) {
            // Check for a new unique element
            if (nums[i] != nums[j]) {
                i++; // Move unique pointer forward
                nums[i] = nums[j]; // Overwrite the duplicate/next element
            }
            // If nums[i] == nums[j], j moves on, i stays
        }
        
        // The length of the unique array is i + 1
        return i + 1;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int k = sol.removeDuplicates(nums);
    cout << k << endl;
    return 0;
}

/*
Approach:
- Use a two-pointer approach (i and j).
- i tracks the last position of a unique element.
- j iterates through the array. If nums[j] is unique, swap it to nums[i+1] and increment i.
- The result is i + 1.
*/
