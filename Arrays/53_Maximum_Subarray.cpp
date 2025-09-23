// LeetCode 53 – Maximum Subarray
// Approach: Kadane’s Algorithm
// Time: O(n) | Space: O(1)

#include <iostream>
#include <vector>
#include <climits> // for INT_MIN
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum = 0;
        int maxSum = INT_MIN;

        for (int i = 0; i < nums.size(); i++) {
            currentSum = max(nums[i], currentSum + nums[i]);
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    Solution sol;
    cout << sol.maxSubArray(nums) << endl;
    return 0;
}
