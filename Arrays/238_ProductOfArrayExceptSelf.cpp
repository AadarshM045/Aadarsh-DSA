// 238. Product of Array Except Self
// https://leetcode.com/problems/product-of-array-except-self/
// Time Complexity: O(n)
// Space Complexity: O(1)  // excluding output array

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 1);

        // Prefix product pass
        int prefix = 1;
        for (int i = 0; i < n; i++) {
            result[i] = prefix;
            prefix *= nums[i];
        }

        // Postfix product pass
        int postfix = 1;
        for (int i = n - 1; i >= 0; i--) {
            result[i] *= postfix;
            postfix *= nums[i];
        }

        return result;
    }
};

// Example run (optional)
int main() {
    Solution sol;
    vector<int> nums = {1,2,3,4};
    vector<int> ans = sol.productExceptSelf(nums);

    cout << "Product Except Self: ";
    for (int x : ans) cout << x << " ";
    cout << endl;
    return 0;
}
