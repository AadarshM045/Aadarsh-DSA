#include <bits/stdc++.h>      // includes all standard C++ libraries
using namespace std;

// Problem: Best Time to Buy and Sell Stock (LeetCode 121)
// Goal: Find the maximum profit from buying and selling once.

class Solution {
public:
    // Function that returns the maximum profit
    int maxProfit(vector<int>& prices) {
        int bestbuy = prices[0];      // minimum price seen so far (best day to buy)
        int profit = 0;               // maximum profit found so far

        // Start from day 1 because we already used day 0
        for (int i = 1; i < (int)prices.size(); i++) {
            if (prices[i] < bestbuy) {
                // Found a cheaper price → update best buy price
                bestbuy = prices[i];
            } else {
                // Sell today and update profit if it is better
                profit = max(profit, prices[i] - bestbuy);
            }
        }
        return profit;  // maximum profit after checking all days
    }
};

int main() {
    int n;                              // number of price entries (days)
    cin >> n;                            // read how many prices we have

    vector<int> prices(n);               // create a vector of size n
    for (int i = 0; i < n; i++) {
        cin >> prices[i];                // read each price
    }

    Solution sol;                        // create an object of the Solution class
    int answer = sol.maxProfit(prices);  // call the function to compute profit
    cout << answer << endl;              // print the maximum profit

    return 0;                            // program finished successfully
}
