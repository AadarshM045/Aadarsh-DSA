// 263. Ugly Number
// https://leetcode.com/problems/ugly-number/
// Time Complexity: O(log n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isUgly(int n) {
        if (n <= 0) return false; // Ugly numbers are positive
        
        // Define the only prime factors allowed
        int primeFactors[] = {2, 3, 5};
        
        // Check for divisibility by each prime factor
        for (int p : primeFactors) {
            // Repeatedly divide n by the factor
            while (n % p == 0) {
                n = n / p;
            }
        }
        
        // If n is reduced to 1, it's an ugly number
        return n == 1;
    }
};

int main() {
    Solution sol;
    int n = 6;
    cout << sol.isUgly(n) << endl;
    return 0;
}

/*
Approach:
- Handle non-positive numbers (return false)
- Repeatedly divide n by its prime factors 2, 3, and 5
- If the remaining number is 1, it is an ugly number
*/
