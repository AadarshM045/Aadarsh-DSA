// 118. Pascal's Triangle
// https://leetcode.com/problems/pascals-triangle/
// Time Complexity: O(N^2) where N is numRows
// Space Complexity: O(N^2) to store the result triangle (O(1) auxiliary space)

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> ansRow(int row)
    {
        vector<int> ansRow;
        ansRow.push_back(1);

        long long ans = 1;
        for (int col = 1; col < row; col++)
        {
            ans = ans * (row - col);
            ans = ans / col;
            ansRow.push_back(ans);
        }
        return ansRow;
    }

    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> ans;

        for (int i = 1; i <= numRows; i++)
        {
            ans.push_back(ansRow(i));
        }
        return ans;
    }
};

int main()
{
    Solution sol;

    // Driver code initializing sample test inputs
    int numRows = 5;

    // Call solution method
    vector<vector<int>> result = sol.generate(numRows);

    // Print result
    cout << "Pascal's Triangle with " << numRows << " rows:\n";
    for (const auto &row : result)
    {
        cout << "[ ";
        for (int val : row)
        {
            cout << val << " ";
        }
        cout << "]\n";
    }

    return 0;
}

/*
Approach:
- We utilize the mathematical property of Pascal's Triangle where each element in a row can be found using the combination formula (nCr).
- The `ansRow` function generates a specific row (1-indexed). It starts with the first element always being 1.
- For subsequent elements in the row, we multiply the previous term by `(row - col)` and divide by `col` to avoid computing large factorials directly.
- The `generate` function simply loops from 1 up to `numRows` and appends the completely built arrays from `ansRow` into our main 2D result vector.
- Edge case handling: If `numRows = 1`, the inner loop inside `ansRow` won't execute, and it correctly just returns `[1]`.
*/