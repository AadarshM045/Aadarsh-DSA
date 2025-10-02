/*
69. Sqrt(x)

Time Complexity: O(log x)  
    - Binary search halves the range each step  
Space Complexity: O(1)  
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        int st = 0, end = x;
        int ans = 0;
        long long mid, sq;

        while (st <= end) {
            mid = st + (end - st) / 2;
            sq = mid * mid;

            if (sq == x) {
                return mid;   // perfect square
            } else if (sq < x) {
                ans = mid;    // possible answer
                st = mid + 1; // move right
            } else {
                end = mid - 1; // move left
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    cout << sol.mySqrt(8) << endl;   // Expected output: 2
    cout << sol.mySqrt(16) << endl;  // Expected output: 4
    cout << sol.mySqrt(1) << endl;   // Expected output: 1
    return 0;
}

/*
Approach:
- Use binary search in range [0, x].
- Keep checking mid*mid against x.
- If mid*mid <= x, store mid as candidate and move right.
- Otherwise, move left.
*/
