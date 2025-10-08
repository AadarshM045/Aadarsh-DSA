// 🔹 Problem: 151. Reverse Words in a String
// ✅ Time Complexity: O(N), where N = length of the string
// ✅ Space Complexity: O(N) — for storing the result string

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int n = s.size(), i;
        string word = "", ans = "";

        // 1️⃣ Reverse the entire string
        reverse(s.begin(), s.end());

        // 2️⃣ Traverse and reverse each individual word
        for (i = 0; i < n; i++) {
            while (i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }
            reverse(word.begin(), word.end());
            if (!word.empty()) {
                ans += " " + word;
                word.clear();  // clear word after appending
            }
        }

        // 3️⃣ Remove leading space
        return ans.substr(1);
    }
};

int main() {
    Solution sol;

    string s1 = "  the sky is blue  ";
    string s2 = "hello world";
    string s3 = "a good   example";

    cout << "Test Case 1:\nInput: \"" << s1 << "\"\nOutput: \"" << sol.reverseWords(s1) << "\"\n\n";
    cout << "Test Case 2:\nInput: \"" << s2 << "\"\nOutput: \"" << sol.reverseWords(s2) << "\"\n\n";
    cout << "Test Case 3:\nInput: \"" << s3 << "\"\nOutput: \"" << sol.reverseWords(s3) << "\"\n";

    return 0;
}

/*
🔹 Approach:
1. Reverse the entire string → brings words in reverse order.
2. Traverse the string:
   - Collect each word until a space.
   - Reverse that word back to its original orientation.
   - Append to the result with a single space.
3. Skip extra spaces and remove leading space in the end.
4. Return the final cleaned, reversed-word string.

📘 Example:
Input:  "  the sky is blue  "
Step 1: "  eulb si yks eht  "
Step 2: "blue is sky the"
Output: "blue is sky the"
*/
