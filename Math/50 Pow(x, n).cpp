// 50. Pow(x, n)
// https://leetcode.com/problems/powx-n/
// Time Complexity: O(log n)
// Space Complexity: O(1)

#include <iostream>

using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) return 1.0;
        if (x == 0.0) return 0.0;
        if (x == 1.0) return 1.0;
        if (x == -1.0) {
            return (n % 2 == 0) ? 1.0 : -1.0;
        }

        long long binform = n;
        double ans = 1.0;

        if (binform < 0) {
            x = 1 / x;
            binform = -binform;
        }

        while (binform > 0) {
            if (binform % 2 == 1) {
                ans = ans * x;
            }
            x = x * x;
            binform = binform / 2;
        }

        return ans;
    }
};

int main() {
    Solution sol;

    // Test Case 1: Positive power
    double x1 = 2.00000;
    int n1 = 10;
    cout << "Input: x = " << x1 << ", n = " << n1 << "\nOutput: " << sol.myPow(x1, n1) << endl; // Expected: 1024

    // Test Case 2: Fractional result
    double x2 = 2.10000;
    int n2 = 3;
    cout << "Input: x = " << x2 << ", n = " << n2 << "\nOutput: " << sol.myPow(x2, n2) << endl; // Expected: 9.261

    // Test Case 3: Negative power
    double x3 = 2.00000;
    int n3 = -2;
    cout << "Input: x = " << x3 << ", n = " << n3 << "\nOutput: " << sol.myPow(x3, n3) << endl; // Expected: 0.25

    return 0;
}

/*
Approach:
- Binary Exponentiation (Iterative): Uses the concept that x^n can be computed as (x^2)^(n/2) to reduce multiplications from O(n) to O(log n).
- Convert `n` to `long long` (`binform`) to handle overflow when `n = INT_MIN` (since `-INT_MIN` exceeds `INT_MAX`).
- If exponent is negative, invert the base (`x = 1/x`) and convert exponent to positive.
- Traverse bits of the binary representation of exponent: multiply `ans` by `x` whenever current bit is 1, and square `x` at each step while halving `binform`.
- Edge Cases Handled: n = 0 (returns 1.0), x = 0/1/-1, and negative powers including INT_MIN.
*/