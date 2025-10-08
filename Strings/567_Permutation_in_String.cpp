// 🔹 Problem: 567. Permutation in String
// ✅ Time Complexity: O(N * 26) ~ O(N), where N = length of s2
// ✅ Space Complexity: O(26) = O(1) — fixed size arrays for letters

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Helper: compare two frequency arrays
    bool same(int a[], int b[]) {
        for (int i = 0; i < 26; i++) {
            if (a[i] != b[i])
                return false;
        }
        return true;
    }

    // Main function
    bool checkInclusion(string s1, string s2) {
        int m = s1.size(), n = s2.size();
        if (m > n) return false; // edge case

        int freqS1[26] = {0}; // frequency array for s1
        int freqW[26] = {0};  // frequency array for sliding window in s2

        // 1️⃣ Fill frequency array for s1
        for (char c : s1)
            freqS1[c - 'a']++;

        // 2️⃣ Fill frequency array for the first window of s2
        for (int i = 0; i < m; i++)
            freqW[s2[i] - 'a']++;

        // 3️⃣ Check first window
        if (same(freqS1, freqW))
            return true;

        // 4️⃣ Slide window across s2
        for (int i = m; i < n; i++) {
            freqW[s2[i - m] - 'a']--; // remove leftmost char
            freqW[s2[i] - 'a']++;     // add rightmost char

            if (same(freqS1, freqW))
                return true;
        }

        return false; // no permutation found
    }
};

int main() {
    Solution sol;

    string s1 = "ab";
    string s2 = "eidbaooo";

    string s3 = "ab";
    string s4 = "eidboaoo";

    cout << "Test Case 1:" << endl;
    cout << "s1 = " << s1 << ", s2 = " << s2 << endl;
    cout << "Contains permutation? " << boolalpha << sol.checkInclusion(s1, s2) << endl;
    cout << endl;

    cout << "Test Case 2:" << endl;
    cout << "s1 = " << s3 << ", s2 = " << s4 << endl;
    cout << "Contains permutation? " << boolalpha << sol.checkInclusion(s3, s4) << endl;

    return 0;
}

/*
🔹 Approach:
1. Use two frequency arrays: one for s1, one for a sliding window in s2.
2. Count letters in s1, and first window of s2.
3. Compare arrays. If equal, permutation exists.
4. Slide window one character at a time:
   - Remove count of leftmost char
   - Add count of new rightmost char
   - Compare arrays again
5. Repeat until the end of s2.
*/
