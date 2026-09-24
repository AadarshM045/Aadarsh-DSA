/**
 * @file 1_Two_Sum.cpp
 * @brief Solution for LeetCode 1 - Two Sum
 * @author Aadarsh Mishra
 * 
 * ============================================================================
 * PROBLEM DESCRIPTION:
 * ============================================================================
 * Given an array of integers `nums` and an integer `target`, return indices 
 * of the two numbers such that they add up to `target`.
 * You may assume that each input would have exactly one solution, 
 * and you may not use the same element twice.
 * 
 * Problem Link: https://leetcode.com/problems/two-sum/
 * Difficulty: Easy
 * Topic: Array / Hash Table
 * 
 * ============================================================================
 * APPROACH:
 * ============================================================================
 * 1. Use a hash map (`std::map`) to store numbers and their corresponding indices.
 * 2. Traverse the array element by element. For each element `num` at index `i`:
 *    - Calculate the required complement: `req_num = target - num`.
 *    - Check if `req_num` already exists in the map using `mpp.find(req_num)`.
 *    - If found, return the pair of indices `{mpp[req_num], i}`.
 *    - If not found, insert the current number and index into the map (`mpp[nums[i]] = i`).
 * 
 * ============================================================================
 * COMPLEXITY ANALYSIS:
 * ============================================================================
 * - Time Complexity:  O(n log n)
 *   Iterating through n elements where each lookup/insertion in std::map takes O(log n).
 *   (Note: Can be optimized to O(n) average time using std::unordered_map).
 * 
 * - Space Complexity: O(n)
 *   In the worst case, storing up to n elements in the map.
 * ============================================================================
 */

#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int num = nums[i];
            int req_num = target - num;
            if (mpp.find(req_num) != mpp.end()) {
                return {mpp[req_num], i};
            }
            mpp[nums[i]] = i;
        }
        return {-1, -1};
    }
};

int main() {
    Solution sol;
    
    // Test Case
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    
    vector<int> result = sol.twoSum(nums, target);
    
    cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;
    
    return 0;
}