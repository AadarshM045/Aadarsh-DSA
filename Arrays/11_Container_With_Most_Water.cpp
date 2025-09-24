// 11. Container With Most Water
// https://leetcode.com/problems/container-with-most-water/
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size() - 1;
        int maxWater = 0;

        while (i < j) {
            int width = j - i;
            int currentWater = width * min(height[i], height[j]);
            maxWater = max(maxWater, currentWater);

            // Move the pointer pointing to the shorter line
            if (height[i] < height[j]) i++;
            else j--;
        }

        return maxWater;
    }
};

// Example run (optional)
int main() {
    Solution sol;
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << "Maximum water: " << sol.maxArea(height) << endl;
    return 0;
}
