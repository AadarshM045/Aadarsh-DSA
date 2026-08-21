// 852. Peak Index in a Mountain Array
// https://leetcode.com/problems/peak-index-in-a-mountain-array/
// Time Complexity: O(log N)
// Space Complexity: O(1)

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st = 1, end = arr.size() - 2;
        
        while (st <= end) {
            int mid = st + (end - st) / 2;
            
            if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
                return mid;
            }
            else if (arr[mid] < arr[mid + 1] && arr[mid] > arr[mid - 1]) {
                st = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        
        return -1;
    }
};

int main() {
    Solution sol;

    vector<int> arr1 = {0, 1, 0};
    vector<int> arr2 = {0, 2, 1, 0};
    vector<int> arr3 = {0, 10, 5, 2};

    cout << "Test Case 1 Peak Index: " << sol.peakIndexInMountainArray(arr1) << " (Expected: 1)" << endl;
    cout << "Test Case 2 Peak Index: " << sol.peakIndexInMountainArray(arr2) << " (Expected: 1)" << endl;
    cout << "Test Case 3 Peak Index: " << sol.peakIndexInMountainArray(arr3) << " (Expected: 1)" << endl;

    return 0;
}

/*
Approach:
- Binary Search on the array space excluding outer boundaries (search space: [1, arr.size() - 2]) because a mountain peak cannot be at the extreme edges.
- Calculate mid and compare it with its immediate neighbors (mid - 1 and mid + 1).
- Peak Condition: If arr[mid] > arr[mid - 1] and arr[mid] > arr[mid + 1], mid is the peak index.
- Increasing Slope: If arr[mid] < arr[mid + 1], we are on the ascending side of the mountain; search the right half (st = mid + 1).
- Decreasing Slope: Otherwise, we are on the descending side; search the left half (end = mid - 1).
*/