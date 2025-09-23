#include <iostream>   
#include <vector>    
#include <algorithm>  

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;  // potential majority element
        int count = 0;      // counter to track candidate strength

        for (size_t i = 0; i < nums.size(); i++) {
            if (count == 0) {
                // pick a new candidate
                candidate = nums[i];
                count = 1;
            }
            else if (nums[i] == candidate) {
                // same as candidate → strengthen vote
                count++;
            }
            else {
                // different element → weaken candidate
                count--;
            }
        }
        return candidate;   // candidate is guaranteed to be majority
    }
};

int main() {
    int n;
    cin >> n;                           // read size of array
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    Solution sol;
    cout << sol.majorityElement(nums) << endl; // print majority element
    return 0;
}
