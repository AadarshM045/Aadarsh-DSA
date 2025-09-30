// Filename: 009-palindrome-number.cpp
// Problem: 9. Palindrome Number
// Difficulty: Easy
// Link: https://leetcode.com/problems/palindrome-number/

class Solution {
public:
    bool isPalindrome(int x) {
        // Edge case: negative numbers and numbers ending with 0 (except 0 itself)
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int revHalf = 0;
        while (x > revHalf) {
            int digit = x % 10;
            revHalf = revHalf * 10 + digit;
            x = x / 10;
        }

        // For even-length numbers: x == revHalf
        // For odd-length numbers: x == revHalf / 10
        return (x == revHalf || x == revHalf / 10);
    }
};
/*
Approach

We check whether an integer is a palindrome without converting it to a string.

Reversing the entire number may cause overflow and isn't necessary.

Instead, we reverse only half of the digits and compare with the remaining half.

If the number has an odd number of digits, we can ignore the middle digit using integer division (revHalf / 10).

For example:

x = 1221: becomes revHalf = 12, x = 12 → equal

x = 12321: becomes revHalf = 123, x = 12 → 12 == 123 / 10
  */
