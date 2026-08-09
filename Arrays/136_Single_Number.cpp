// 136. Single Number
// https://leetcode.com/problems/single-number/
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            ans ^= nums[i];
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {4, 1, 2, 1, 2};
    int result = sol.singleNumber(nums);
    
    cout << "The single number is: " << result << endl;
    return 0;
}

/*
Approach:
- Utilize the bitwise XOR operator, which has the properties: $a \oplus a = 0$ and $a \oplus 0 = a$.
- Iterate through all elements in the array, accumulating the XOR sum. 
- Elements that appear twice will cancel each other out to 0, leaving only the unique number.
- Edge Case: Handles single-element arrays and standard arrays with duplicate pairs efficiently with no extra space.
*/