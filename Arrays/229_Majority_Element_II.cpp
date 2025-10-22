/*
Problem: 229. Majority Element II
Level: Medium

Description:
Given an integer array nums, return all the elements that appear more than ⌊ n/3 ⌋ times.

Note:
The result should be sorted.

Example:
Input:  nums = [2, 2, 3, 1, 3, 2, 1, 1]
Output: [1, 2]

Explanation:
- Frequency of 1 = 3
- Frequency of 2 = 3
- Both are greater than floor(8 / 3) = 2

Approach (Extended Boyer–Moore Voting Algorithm):
1. There can be at most two elements that appear more than ⌊ n/3 ⌋ times.
2. Maintain two candidates (candidate1, candidate2) and their counts.
3. Iterate through the array:
   - If the current number equals a candidate → increment its count.
   - Else if one count is 0 → set new candidate.
   - Otherwise, decrement both counts.
4. Verify the actual counts in a second pass.
5. Return the candidates whose frequency > ⌊ n/3 ⌋.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        if (nums.empty()) return {};

        int count1 = 0, count2 = 0;
        int candidate1 = 0, candidate2 = 0;

        // Step 1: Find potential candidates
        for (int num : nums) {
            if (num == candidate1) {
                count1++;
            } else if (num == candidate2) {
                count2++;
            } else if (count1 == 0) {
                candidate1 = num;
                count1 = 1;
            } else if (count2 == 0) {
                candidate2 = num;
                count2 = 1;
            } else {
                count1--;
                count2--;
            }
        }

        // Step 2: Verify actual counts
        int actual_count1 = 0, actual_count2 = 0;
        for (int num : nums) {
            if (num == candidate1) actual_count1++;
            else if (num == candidate2) actual_count2++;
        }

        // Step 3: Collect results
        vector<int> result;
        int threshold = nums.size() / 3;

        if (actual_count1 > threshold) result.push_back(candidate1);
        if (candidate1 != candidate2 && actual_count2 > threshold) result.push_back(candidate2);

        sort(result.begin(), result.end());
        return result;
    }
};

int main() {
    // ✅ Testcase
    vector<int> nums = {2, 2, 3, 1, 3, 2, 1, 1};
    
    Solution sol;
    vector<int> ans = sol.majorityElement(nums);

    // 🧪 Test Result
    cout << "Input:  [2, 2, 3, 1, 3, 2, 1, 1]" << endl;
    cout << "Output: [";
    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i];
        if (i < ans.size() - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}
