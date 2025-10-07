// 🔹 Problem: Remove All Occurrences of a Substring
// ✅ Time Complexity: O(n * m) in worst case, where n = length of s, m = length of part
// ✅ Space Complexity: O(1) — in-place modification of string

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {
    
        while (s.length() > 0 && s.find(part) < s.length()) {
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};

int main() {
    Solution sol;

    string s1 = "daabcbaabcbc";
    string part1 = "abc";

    string s2 = "axxxxyyyyb";
    string part2 = "xy";

    cout << "Test Case 1:" << endl;
    cout << "Original: " << s1 << endl;
    cout << "After removal: " << sol.removeOccurrences(s1, part1) << endl;
    cout << endl;

    cout << "Test Case 2:" << endl;
    cout << "Original: " << s2 << endl;
    cout << "After removal: " << sol.removeOccurrences(s2, part2) << endl;

    return 0;
}
    // 🔹 Approach:
        // 1. While 'part' exists in 's', find its position.
        // 2. Erase the substring from the main string.
        // 3. Repeat until no more occurrences remain.
