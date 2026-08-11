// 121. Best Time to Buy and Sell Stock
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// Time Complexity: O(N)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;
        
        int bestbuy = prices[0];      
        int profit = 0;               

        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < bestbuy) {
                bestbuy = prices[i];
            } else {
                profit = max(profit, prices[i] - bestbuy);
            }
        }
        return profit; 
    }
};

int main() {
    Solution sol;
    
    // Test Case 1
    vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    cout << "Test Case 1 Output: " << sol.maxProfit(prices1) << " (Expected: 5)" << endl;
    
    // Test Case 2
    vector<int> prices2 = {7, 6, 4, 3, 1};
    cout << "Test Case 2 Output: " << sol.maxProfit(prices2) << " (Expected: 0)" << endl;

    return 0;
}

/*
Approach:
- Maintain two variables: `bestbuy` to track the lowest stock price seen so far, and `profit` to track the maximum profit achievable.
- Iterate through the given prices array starting from the second day.
- If the current day's price is lower than `bestbuy`, update `bestbuy`.
- If the current day's price is higher, calculate the potential profit (current price - `bestbuy`) and update `profit` if this potential profit is strictly greater than the current `profit`.
- Edge cases: If the prices are continuously decreasing (e.g., `[7, 6, 4, 3, 1]`), the profit variable will never update and correctly returns `0`. Handled empty input correctly as well.
- This one-pass approach guarantees finding the max difference with the buy day strictly preceding the sell day.
*/