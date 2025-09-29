\*/**
 * LeetCode 7. Reverse Integer
 * ----------------------------
 * Given a signed 32-bit integer x, return x with its digits reversed.
 * If reversing x causes the value to go outside the signed 32-bit
 * integer range [-2^31, 2^31 - 1], return 0.
 *
#include <iostream>
#include <climits>  // for INT_MAX and INT_MIN
using namespace std;
*/
 
class Solution {
public:
    int reverse(int x) {
        int reversed = 0;

        while (x != 0) {
            int digit = x % 10;

            // Overflow checks before updating reversed
            if (reversed > INT_MAX / 10 || (reversed == INT_MAX / 10 && digit > 7))
                return 0;
            if (reversed < INT_MIN / 10 || (reversed == INT_MIN / 10 && digit < -8))
                return 0;

            reversed = reversed * 10 + digit;
            x /= 10;
        }

        return reversed;
    }
};

// ------------------ DRIVER CODE ------------------
int main() {
    Solution sol;

    // Example test cases
    int nums[] = {123, -123, 120, 1534236469};
    for (int n : nums) {
        cout << "Input: " << n 
             << " -> Output: " << sol.reverse(n) << endl;
    }

    return 0;
}
/*
Approach:
- Extract digits one by one using modulo (%) and division (/).
- Before adding each digit, check if "reversed * 10 + digit"
  would overflow a 32-bit signed integer.
- If safe, build the reversed number step by step.
- If overflow is detected, return 0 immediately.

Time Complexity: O(log10(n)) → number of digits in n
Space Complexity: O(1) → constant extra space
*/
