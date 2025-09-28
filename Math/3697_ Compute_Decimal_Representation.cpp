// 3697. Compute Decimal Representation
// https://leetcode.com/problems/compute-decimal-representation/
// Time Complexity: O(log10(n))   // we process each digit once
// Space Complexity: O(log10(n))  // to store the base-10 components

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> res;
        int place = 1;

        // Extract each non-zero digit and form base-10 components
        while (n > 0) {
            int digit = n % 10;
            if (digit > 0) {
                res.push_back(digit * place);
            }
            n /= 10;
            place *= 10;
        }

        // Descending order as required
        sort(res.rbegin(), res.rend());
        return res;
    }
};

// Example usage
int main() {
    Solution sol;
    int n = 50307;
    vector<int> ans = sol.decimalRepresentation(n);
    for (int x : ans) cout << x << " ";
    // Output: 50000 300 7
    return 0;
}
/*
Approach:
- Iterate through the digits of n from right to left (units place upwards).
- Keep track of the current place value (1, 10, 100, ...).
- If a digit is non-zero, calculate its component value (digit * place) and store it.
- Finally, reverse the result to have the components in descending order of place value.
*/
