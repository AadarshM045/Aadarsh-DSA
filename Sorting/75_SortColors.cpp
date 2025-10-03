/*
Problem: 75. Sort Colors
Level: Medium

Approach:
- Count the number of 0s, 1s, and 2s in the array.
- Rewrite the array with that many 0s, then 1s, then 2s.
- Time Complexity: O(n)
- Space Complexity: O(1)

Alternative (Interview-favorite):
- Dutch National Flag algorithm (one-pass, in-place swap).
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red = 0, white = 0, blue = 0;

        // Count 0s, 1s, 2s
        for (auto i : nums) {
            if (i == 0) red++;
            else if (i == 1) white++;
            else blue++;
        }

        int idx = 0;

        // Fill 0s
        for (int i = 0; i < red; i++) nums[idx++] = 0;

        // Fill 1s
        for (int i = 0; i < white; i++) nums[idx++] = 1;

        // Fill 2s
        for (int i = 0; i < blue; i++) nums[idx++] = 2;
    }
};

int main() {
    vector<int> nums = {2,0,2,1,1,0};
    Solution().sortColors(nums);

    cout << "Sorted Colors: ";
    for (int n : nums) cout << n << " ";
    cout << endl;

    return 0;
}
