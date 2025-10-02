/*
34. Find First and Last Position of Element in Sorted Array
Medium

Time Complexity: O(log n) 
    - Two binary searches: one for first occurrence, one for last occurrence.
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int st = 0, end = n - 1;
        int first = -1, last = -1;

        // Binary search for first occurrence
        while(st <= end){
            int mid = st + (end - st)/2;
            if(nums[mid] == target){
                first = mid;
                end = mid - 1; // move left to find earlier occurrence
            }
            else if(target < nums[mid]){
                end = mid - 1;
            }
            else{
                st = mid + 1;
            }
        }

        st = 0; end = n - 1;

        // Binary search for last occurrence
        while(st <= end){
            int mid = st + (end - st)/2;
            if(nums[mid] == target){
                last = mid;
                st = mid + 1; // move right to find later occurrence
            }
            else if(target < nums[mid]){
                end = mid - 1;
            }
            else{
                st = mid + 1;
            }
        }

        return {first, last};
    }
};

// Driver code to test
int main() {
    Solution sol;
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;

    vector<int> res = sol.searchRange(nums, target);
    cout << "First and Last Position: [" << res[0] << ", " << res[1] << "]" << endl;
    // Expected output: [3, 4]

    return 0;
}

/*
Approach:
- Perform two binary searches:
    1. Search leftmost (first occurrence) of target.
    2. Search rightmost (last occurrence) of target.
- If target not found, return [-1,-1].
- Binary search ensures O(log n) runtime and O(1) space.
*/
