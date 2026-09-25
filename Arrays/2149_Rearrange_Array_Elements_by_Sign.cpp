/**
 * @file 2149_Rearrange_Array_Elements_by_Sign.cpp
 * @brief Solution for LeetCode 2149 - Rearrange Array Elements by Sign
 * @author Aadarsh Mishra
 *
 * ============================================================================
 * PROBLEM DESCRIPTION:
 * ============================================================================
 * You are given a 0-indexed integer array `nums` of even length consisting of
 * an equal number of positive and negative integers.
 *
 * Rearrange the elements of `nums` such that the modified array follows these conditions:
 * 1. Every consecutive pair of integers have opposite signs.
 * 2. For all integers with the same sign, the relative order in which they
 *    appeared in `nums` is preserved.
 * 3. The rearranged array begins with a positive integer.
 *
 * Return the modified array after rearranging the elements.
 *
 * Problem Link: https://leetcode.com/problems/rearrange-array-elements-by-sign/
 * Difficulty: Medium
 * Topic: Array / Two Pointers / Simulation
 *
 * ============================================================================
 * APPROACH:
 * ============================================================================
 * 1. Create an answer vector `ans` of size `n` initialized to 0.
 * 2. Use two pointer variables:
 *    - `pos = 0`: tracks even indices for positive numbers (0, 2, 4, ...).
 *    - `neg = 1`: tracks odd indices for negative numbers (1, 3, 5, ...).
 * 3. Iterate through `nums`:
 *    - If `nums[i]` is positive, place it at `ans[pos]` and increment `pos += 2`.
 *    - If `nums[i]` is negative, place it at `ans[neg]` and increment `neg += 2`.
 * 4. This places every element in its correct alternating position in a single pass
 *    while naturally maintaining their original relative order.
 *
 * ============================================================================
 * COMPLEXITY ANALYSIS:
 * ============================================================================
 * - Time Complexity:  O(n)
 *   Single traversal over the input array of size n.
 *
 * - Space Complexity: O(n)
 *   Requires an additional array `ans` of size n to construct the result.
 * ============================================================================
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans(n, 0);
        int pos = 0, neg = 1;

        for (int i = 0; i < n; i++)
        {
            if (nums[i] < 0)
            {
                ans[neg] = nums[i];
                neg += 2;
            }
            else
            {
                ans[pos] = nums[i];
                pos += 2;
            }
        }
        return ans;
    }
};

int main()
{
    Solution sol;

    // Test Case
    vector<int> nums = {3, 1, -2, -5, 2, -4};
    vector<int> result = sol.rearrangeArray(nums);

    cout << "Rearranged Array: [";
    for (size_t i = 0; i < result.size(); i++)
    {
        cout << result[i] << (i < result.size() - 1 ? ", " : "");
    }
    cout << "]" << endl;

    return 0;
}