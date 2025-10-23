/*
Problem: 122. Best Time to Buy and Sell Stock II
Level: Medium

Description:
You are given an integer array `prices` where `prices[i]` is the price of a given stock on the i-th day.
On each day, you may decide to buy and/or sell the stock. You can hold at most one share of the stock at a time.
Return the maximum profit you can achieve.

Example:
Input:  prices = [7, 1, 5, 3, 6, 4]
Output: 7
Explanation:
- Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 4.
- Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 3.
- Total profit = 4 + 3 = 7.

Approach (Greedy):
- Whenever there’s an increase from one day to the next, take that profit.
- Sum all positive differences (prices[i] - prices[i-1]).
- This effectively captures all profitable buy-sell opportunities.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] > prices[i - 1]) {
                profit += prices[i] - prices[i - 1];
            }
        }
        return profit;
    }
};

int main() {
    // ✅ Testcase
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    Solution sol;
    int result = sol.maxProfit(prices);

    // 🧪 Test Result
    cout << "Input:  [7, 1, 5, 3, 6, 4]" << endl;
    cout << "Output: " << result << endl;

    return 0;
}
