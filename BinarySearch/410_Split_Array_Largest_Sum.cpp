/*
410. Split Array Largest Sum

Time Complexity: O(n * log(sum(nums)))
    - Binary search over range [max(nums), sum(nums)]
    - Each check (canSplit) runs in O(n)
Space Complexity: O(1).
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Check if we can split nums into <= k subarrays with max sum <= maxSum
    bool canSplit(vector<int>& nums, int k, int maxSum) {
        int count = 1, currentSum = 0;
        for (int a : nums) {
            if (currentSum + a > maxSum) { // need new subarray
                count++;
                currentSum = a;
                if (count > k) return false; // too many subarrays
            } else {
                currentSum += a; // keep adding
            }
        }
        return true;
    }

    int splitArray(vector<int>& nums, int k) {
        int left = *max_element(nums.begin(), nums.end());   // min possible
        int right = accumulate(nums.begin(), nums.end(), 0); // max possible
        int ans = right;

        while (left <= right) {
            int mid = left + (right - left) / 2; // candidate max sum
            if (canSplit(nums, k, mid)) {
                ans = mid;        // feasible
                right = mid - 1;  // try smaller
            } else {
                left = mid + 1;   // not feasible, need larger
            }
        }
        return ans;
    }
};

int main() {
    vector<int> nums = {7, 2, 5, 10, 8};
    int k = 2;

    Solution sol;
    cout << sol.splitArray(nums, k) << endl; // Expected output: 18
    return 0;
}

/*
Approach:
- Binary search the minimum largest subarray sum between [max element, total sum].
- Use greedy check (canSplit) to see if nums can be split into <= k subarrays with max sum = mid.
- If feasible, try smaller value; else, increase the limit.
*/
