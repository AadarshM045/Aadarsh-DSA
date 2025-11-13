// Q2. Find the Pivot Integer
// Difficulty: Easy
// Topics: Math, Prefix Sum
// ------------------------------------------------------------
// Problem:
// Given a positive integer n, find the pivot integer x such that
// the sum of all numbers from 1 to x equals the sum from x to n.
// Return x if it exists, otherwise return -1.
// ------------------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotInteger(int n) {
        // Step 1: Calculate total sum of numbers from 1 to n
        long long S = (long long)n * (n + 1) / 2;

        // Step 2: Find possible pivot (square root of total sum)
        long long t = (long long)floor(sqrt((long double)S));

        // Step 3: Adjust for floating-point rounding issues
        while (t * t < S) ++t;
        while (t * t > S) --t;

        // Step 4: If perfect square, return pivot integer, else -1
        return (t * t == S) ? (int)t : -1;
    }
};

// ------------------------------------------------------------
// Test Cases
// ------------------------------------------------------------
int main() {
    Solution sol;
    cout << boolalpha;

    cout << "n = 8  → " << sol.pivotInteger(8)  << " (Expected: 6)"  << endl;
    cout << "n = 1  → " << sol.pivotInteger(1)  << " (Expected: 1)"  << endl;
    cout << "n = 4  → " << sol.pivotInteger(4)  << " (Expected: -1)" << endl;
    cout << "n = 49 → " << sol.pivotInteger(49) << " (Expected: 35)" << endl;
    cout << "n = 100 → " << sol.pivotInteger(100) << " (Expected: -1)" << endl;

    return 0;
}

// ------------------------------------------------------------
// Approach:
// 1. Total sum from 1 to n = n*(n+1)/2.
// 2. For pivot x: (1 + 2 + ... + x) = (x + ... + n)
//    ⇒ x^2 = total_sum ⇒ x = sqrt(total_sum)
// 3. If total_sum is a perfect square, return sqrt(total_sum).
//    Otherwise, return -1.
//
// Time Complexity:  O(1)
// Space Complexity: O(1)
// ------------------------------------------------------------
