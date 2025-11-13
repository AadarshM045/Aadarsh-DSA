// Q2. Find the Pivot Integer
// Difficulty: Easy
// Topics: Math, Prefix Sum
// ------------------------------------------------------------
// Problem:
// Given a positive integer n, find the pivot integer x such that:
//   sum(1 → x) = sum(x → n)
// If such x exists, return it; otherwise, return -1.
//
// Example 1:
// Input:  n = 8
// Output: 6
// Explanation: 1 + 2 + 3 + 4 + 5 + 6 = 6 + 7 + 8 = 21
//
// Example 2:
// Input:  n = 1
// Output: 1
//
// Example 3:
// Input:  n = 4
// Output: -1
// ------------------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotInteger(int n) {
        // Step 1: Compute total sum of numbers from 1 to n
        long long S = (long long)n * (n + 1) / 2;

        // Step 2: Find potential pivot x = sqrt(S)
        long long t = (long long)floor(sqrt((long double)S));

        // Step 3: Adjust t to handle any rounding errors from sqrt
        while (t * t < S) ++t;
        while (t * t > S) --t;

        // Step 4: If t^2 == S, return t; else, no pivot → return -1
        return (t * t == S) ? (int)t : -1;
    }
};

// ------------------------------------------------------------
// Test Cases
// ------------------------------------------------------------
int main() {
    Solution sol;
    cout << sol.pivotInteger(8) << '\n';   // Expected: 6
    cout << sol.pivotInteger(1) << '\n';   // Expected: 1
    cout << sol.pivotInteger(4) << '\n';   // Expected: -1
    cout << sol.pivotInteger(49) << '\n';  // Expected: 35
    cout << sol.pivotInteger(100) << '\n'; // Expected: -1
    return 0;
}

// ------------------------------------------------------------
// Approach Summary:
// Total sum from 1 to n = n*(n+1)/2.
// We want sum(1 → x) = sum(x → n).
// Using the formula, this simplifies to x² = total_sum.
// Therefore, if total_sum is a perfect square, x = √total_sum.
//
// Time Complexity:  O(1)
// Space Complexity: O(1)
// ------------------------------------------------------------
