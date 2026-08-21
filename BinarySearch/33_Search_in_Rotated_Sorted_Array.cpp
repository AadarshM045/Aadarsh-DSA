// 33. Search in Rotated Sorted Array
// https://leetcode.com/problems/search-in-rotated-sorted-array/
// Time Complexity: O(log N)
// Space Complexity: O(1)

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st = 0, end = (int)nums.size() - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (nums[mid] == target) return mid;

            // Check if the left half is sorted
            if (nums[st] <= nums[mid]) {
                if (nums[st] <= target && target < nums[mid])
                    end = mid - 1;
                else
                    st = mid + 1;
            } 
            // Otherwise, the right half must be sorted
            else {
                if (nums[mid] < target && target <= nums[end])
                    st = mid + 1;
                else
                    end = mid - 1;
            }
        }

        return -1;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {4, 5, 6, 7, 0, 1, 2};
    int target1 = 0;
    cout << "Target " << target1 << " found at index: " << sol.search(nums1, target1) << " (Expected: 4)" << endl;

    vector<int> nums2 = {4, 5, 6, 7, 0, 1, 2};
    int target2 = 3;
    cout << "Target " << target2 << " found at index: " << sol.search(nums2, target2) << " (Expected: -1)" << endl;

    vector<int> nums3 = {1};
    int target3 = 0;
    cout << "Target " << target3 << " found at index: " << sol.search(nums3, target3) << " (Expected: -1)" << endl;

    return 0;
}

/*
Approach:
- Binary Search intuition: At any point during binary search in a rotated sorted array, at least one half (left or right) relative to `mid` is guaranteed to be sorted.
- Step 1: Calculate `mid` and check if `nums[mid] == target`.
- Step 2: Determine which half is sorted:
  - If `nums[st] <= nums[mid]`, the left segment is sorted. Check if `target` lies within `[nums[st], nums[mid])`. If so, discard the right half (`end = mid - 1`); otherwise search the right half (`st = mid + 1`).
  - Otherwise, the right segment is sorted. Check if `target` lies within `(nums[mid], nums[end]]`. If so, search the right half (`st = mid + 1`); otherwise search the left half (`end = mid - 1`).
- Edge Cases: Single element arrays, target not present in the array, array with no rotation (standard sorted array).
*/