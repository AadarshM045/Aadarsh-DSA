/*
Problem: 27. Remove Element
Level: Easy

Approach (Two Pointers In-Place):
- We are given an integer array nums and a value val to remove.
- Use two pointers:
    - i → next position to write a "good" value (nums[i] != val)
    - j → current position scanning the array

Algorithm:
1. Initialize i = 0, j = 0.
2. Loop while j < nums.size():
    - If nums[j] == val, skip it (just j++).
    - Else, copy nums[j] to nums[i], then increment both i and j.
3. After the loop, i holds the number of elements not equal to val.

Why this works:
- i always points to where the next valid element should go.
- Copying good values forward ensures all elements != val are at the front.
- No need to worry about elements beyond i; the problem ignores them.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;               // Next position to write a good value
        int j = 0;               // Scanning pointer
        int n = nums.size();

        while (j < n) {
            if (nums[j] == val) {
                j++;             // Skip bad value
            } else {
                nums[i] = nums[j]; // Copy good value forward
                i++;
                j++;
            }
        }

        return i; // Number of elements not equal to val
    }
};

int main() {
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;

    int k = Solution().removeElement(nums, val);

    cout << "New length: " << k << endl;
    cout << "Array after removal: ";
    for (int i = 0; i < k; i++) cout << nums[i] << " ";
    cout << endl;

    return 0;
}
