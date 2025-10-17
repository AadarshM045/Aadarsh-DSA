/*
Problem: 283. Move Zeroes
Level: Easy

Approach (In-place Two-Pointer Technique):
- Use two pointers: 
    - `count`: tracks the position to place the next non-zero element
    - `i`: iterates through the array
- Traverse the array once:
    - If nums[i] != 0 → swap(nums[i], nums[count]), increment count
- This moves all non-zero elements to the front, keeping their relative order,
  and pushes all zeros to the end.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0; // index for next non-zero
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[count]);
                count++;
            }
        }
    }
};

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};
    
    cout << "Original array: ";
    for (int n : nums) cout << n << " ";
    cout << endl;

    Solution().moveZeroes(nums);

    cout << "After moving zeroes: ";
    for (int n : nums) cout << n << " ";
    cout << endl;

    return 0;
}
