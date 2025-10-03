/*
Problem: 268. Missing Number
Given an array nums containing n distinct numbers in the range [0, n], 
return the only number in the range that is missing from the array.

Constraints:
- n == nums.length
- 1 <= n <= 10^4
- 0 <= nums[i] <= n
- All the numbers of nums are unique.

Follow up: Can you implement a solution using O(1) extra space and O(n) runtime?

Approach:
1. Use the mathematical formula for sum of first n natural numbers:
   sum = n * (n + 1) / 2
2. Compute the sum of elements in the array.
3. The missing number is the difference between the expected sum and actual sum.
   This gives O(n) time complexity and O(1) extra space.
*/

#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int total = n * (n + 1) / 2; // sum of 0..n
    int sum_nums = 0;
    for(int num : nums) {
        sum_nums += num;
    }
    return total - sum_nums;
}

int main() {
    // Example test cases
    vector<int> nums1 = {3,0,1};
    vector<int> nums2 = {0,1};
    vector<int> nums3 = {9,6,4,2,3,5,7,0,1};

    cout << "Missing number in [3,0,1]: " << missingNumber(nums1) << endl;
    cout << "Missing number in [0,1]: " << missingNumber(nums2) << endl;
    cout << "Missing number in [9,6,4,2,3,5,7,0,1]: " << missingNumber(nums3) << endl;

    return 0;
}

/*
Time Complexity: O(n)  - we traverse the array once.
Space Complexity: O(1) - only variables used, no extra arrays.
*/
