// 238. Product of Array Except Self
// https://leetcode.com/problems/product-of-array-except-self/
// Time Complexity: O(n)
// Space Complexity: O(1) (excluding output array)

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 1);

        // Prefix pass: result[i] stores product of elements to the LEFT of i
        int prefix = 1;
        for (int i = 0; i < n; i++) {
            result[i] = prefix;
            prefix *= nums[i];
        }

        // Postfix pass: multiply with product of elements to the RIGHT of i
        int postfix = 1;
        for (int i = n - 1; i >= 0; i--) {
            result[i] *= postfix;
            postfix *= nums[i];
        }

        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4};
    vector<int> ans = sol.productExceptSelf(nums);

    cout << "Output: ";
    for (int x : ans) cout << x << " ";
    cout << endl;
    return 0;
}

/*
Approach:
- Use a two-pass approach to compute the product of array elements except self without using division.
- Prefix pass: Iterate from left to right, maintaining a running prefix product and storing it in the result array.
- Postfix pass: Iterate from right to left, maintaining a running postfix product and multiplying it with the existing values in the result array.
- Edge case handling: Handles standard arrays efficiently in linear time and constant extra space.
*/