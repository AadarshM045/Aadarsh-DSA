// 268. Missing Number
// https://leetcode.com/problems/missing-number/
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        int expectedSum = (n * (n + 1)) / 2;
        int currentSum = 0;
        for (int i = 0; i < n; i++)
        {
            currentSum += nums[i];
        }
        return (expectedSum - currentSum);
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {3, 0, 1};
    int missing = sol.missingNumber(nums);
    cout << "The missing number is: " << missing << endl;
    return 0;
}

/*
Approach:
- Calculate the expected sum of numbers from 0 to n using the formula n * (n + 1) / 2.
- Iterate through the given array and compute the actual sum of its elements.
- The difference between the expected sum and the actual sum gives the missing number.
- Edge case handling: Works for arrays with a single element and handles ranges starting from 0 efficiently.
- Core mathematical intuition: The sum of a complete sequence from 0 to n has a closed-form expression, allowing us to find the single missing element in linear time and constant extra space.
*/