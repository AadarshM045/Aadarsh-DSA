// LeetCode Problem 540: Single Element in a Sorted Array
// Author: Aadarsh Mishra
// Language: C++
// Approach: Binary Search (O(log n), O(1) space)

#include <vector>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int st = 0, end = n - 1;

        while (st < end) {
            int mid = st + (end - st) / 2;

            // Ensure mid is even for easy pair comparison
            if (mid % 2 == 1) mid--;

            if (nums[mid] == nums[mid + 1]) {
                st = mid + 2;  // unique element is in the right half
            } else {
                end = mid;     // unique element is in the left half or at mid
            }
        }

        return nums[st];  // st == end at the unique element
    }
};
