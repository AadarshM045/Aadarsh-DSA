/*
Problem: 75. Sort Colors
Level: Medium

Approach (Dutch National Flag Algorithm):
- Use three pointers: low, mid, high.
- low: position for next 0
- mid: current element being checked
- high: position for next 2
- Traverse the array once, swap accordingly:
    - If nums[mid] == 0 → swap(nums[low], nums[mid]), low++, mid++
    - If nums[mid] == 1 → mid++
    - If nums[mid] == 2 → swap(nums[mid], nums[high]), high--
- Time Complexity: O(n)
- Space Complexity: O(1)

This sorts the array in one pass without counting.
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0;
        int high = nums.size() - 1;

        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            } 
            else if (nums[mid] == 1) {
                mid++;
            } 
            else { // nums[mid] == 2
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};

int main() {
    vector<int> nums = {2,0,2,1,1,0};
    Solution().sortColors(nums);

    cout << "Sorted Colors: ";
    for (int n : nums) cout << n << " ";
    cout << endl;

    return 0;
}
