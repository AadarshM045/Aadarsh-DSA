// 42. Maximize A + B - C (Hypothetical Problem)
// https://leetcode.com/problems/maximize-a-plus-b-minus-c/ (Hypothetical Link)
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        int max1 = INT_MIN; // Largest element
        int max2 = INT_MIN; // Second largest
        int mini = INT_MAX; // Smallest element

        for (int x : nums) { // Iterate through array
            if (x > max1) { // Current element is the new max1
                max2 = max1; // Old max1 becomes new max2
                max1 = x;
            }
            else if (x > max2) { // Current element is new max2
                max2 = x;
            }
            mini = min(mini, x); // Update minimum
        }
        
        // Expression is maximized by 
        // two largest elements minus the smallest
        return max1 + max2 - mini;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {10, 5, 20, 1, 15};
    int ans = sol.maximizeExpressionOfThree(nums);
    cout << ans << endl;
    return 0;
}

/*
Approach:
- Maximize A+B and minimize C
- Find the two largest elements (max1, max2)
- Find the smallest element (mini)
- Result is max1 + max2 - mini
*/
