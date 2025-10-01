/*
LeetCode 66. Plus One
https://leetcode.com/problems/plus-one/

--------------------------------
🕒 Complexity:
Time  : O(n)  // traverse digits once from right to left
Space : O(1)  // in-place modification (ignoring result vector)
--------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        // Traverse from the last digit towards the first
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;   // increment and return early
                return digits;
            }
            digits[i] = 0; // carry over to the next digit
        }

        // If all digits were 9 → e.g. [9,9,9] → [1,0,0,0]
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main() {
    Solution sol;

    // Test cases
    vector<vector<int>> tests = {
        {1,2,3},    // expected [1,2,4]
        {4,3,2,1},  // expected [4,3,2,2]
        {9},        // expected [1,0]
        {9,9,9}     // expected [1,0,0,0]
    };

    for (auto digits : tests) {
        vector<int> result = sol.plusOne(digits);

        cout << "Input: [";
        for (int i = 0; i < digits.size(); i++) {
            cout << digits[i] << (i < digits.size()-1 ? "," : "");
        }
        cout << "] -> Output: [";
        for (int i = 0; i < result.size(); i++) {
            cout << result[i] << (i < result.size()-1 ? "," : "");
        }
        cout << "]" << endl;
    }

    return 0;
}

/*
--------------------------------
💡 Approach:
1. Start from the least significant digit (last element of array).
2. If digit < 9 → just increment and return (done).
3. If digit == 9 → set it to 0 and carry over to next digit.
4. Repeat until all digits are processed.
5. If all were 9 → insert 1 at the beginning → e.g. [9,9,9] → [1,0,0,0].
--------------------------------
*/
