// 33. Search in Rotated Sorted Array
// Difficulty: Medium
/*
🧠 Approach: Search in Rotated Sorted Array

The array is sorted but rotated at an unknown pivot.

We must find the target using binary search in O(log n) time.

Key idea: At least one half (left or right) of the array is always sorted.

Use this property to decide which half to continue searching in.
    */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st = 0, end = nums.size() - 1;
        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (nums[mid] == target) return mid;

            if (nums[st] <= nums[mid]) {       // Left half sorted
                if (nums[st] <= target && target < nums[mid]) {
                    end = mid - 1;
                } else {
                    st = mid + 1;
                }
            } else {                          // Right half sorted
                if (nums[mid] < target && target <= nums[end]) {
                    st = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};
