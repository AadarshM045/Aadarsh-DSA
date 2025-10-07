// 🔹 Problem: 125. Valid Palindrome
// ✅ Time Complexity: O(n) — traverse the string once using two pointers
// ✅ Space Complexity: O(1) — only uses constant extra space

#include <iostream>
#include <cctype>  // for isalnum(), tolower()
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        int st = 0, end = n - 1;

      
        while (st < end) {

            // Skip non-alphanumeric characters from the start
            while (st < end && !isalnum(s[st]))
                st++;

            // Skip non-alphanumeric characters from the end
            while (st < end && !isalnum(s[end]))
                end--;

            // Compare characters (case-insensitive)
            if (tolower(s[st]) == tolower(s[end])) {
                st++;
                end--;
            } 
            else {
                return false;  // mismatch found
            }
        }

        return true;  // all checks passed → palindrome
    }
};

int main() {
    Solution sol;

    // 🧪 Test Cases
    string s1 = "A man, a plan, a canal: Panama";
    string s2 = "race a car";
    string s3 = " ";

    cout << boolalpha;  // prints true/false instead of 1/0
    cout << "Input: " << s1 << " -> Output: " << sol.isPalindrome(s1) << endl;
    cout << "Input: " << s2 << " -> Output: " << sol.isPalindrome(s2) << endl;
    cout << "Input: \"" << s3 << "\" -> Output: " << sol.isPalindrome(s3) << endl;

    return 0;
}
  // 🔸 Approach:
        // 1. Use two pointers: one from start (st) and one from end (end)
        // 2. Skip all non-alphanumeric characters using isalnum()
        // 3. Compare lowercase versions of characters using tolower()
        // 4. If any mismatch → return false
        // 5. If loop completes → string is a palindrome

