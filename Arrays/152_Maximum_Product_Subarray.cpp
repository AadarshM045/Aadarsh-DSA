/*
Problem: 152. Maximum Product Subarray
Level: Medium

Description:
Given an integer array `nums`, find the contiguous subarray within the array that has the largest product,
and return that product.

Example:
Input:  nums = [2, 3, -2, 4]
Output: 6
Explanation:
- The subarray [2, 3] has the largest product = 6.

Approach (Prefix & Suffix Product):
- The product of a subarray can flip sign if there are negative numbers.
- A zero breaks the subarray continuity, so we restart product calculation after every zero.
- Maintain two running products:
  - prefix: product from the start
  - suffix: product from the end
- At each step, take the maximum of prefix and suffix to handle negative flips.
- Reset prefix/suffix to 1 when they become 0 (as zero breaks continuity).

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int prefix = 1, suffix = 1;
        int ans = INT_MIN;
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            if (suffix == 0) suffix = 1;
            if (prefix == 0) prefix = 1;

            suffix *= arr[i];
            prefix *= arr[n - 1 - i];

            ans = max(ans, max(suffix, prefix));
        }

        return ans;
    }
};

int main() {
    // ✅ Testcase
    vector<int> nums = {2, 3, -2, 4};

    Solution sol;
    int result = sol.maxProduct(nums);

    // 🧪 Test Result
    cout << "Input:  [2, 3, -2, 4]" << endl;
    cout << "Output: " << result << endl;

    return 0;
}
