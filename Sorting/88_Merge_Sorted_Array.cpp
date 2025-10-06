/*
Leetcode:- 88_Merge_Sorted_Array.cpp
    Time Complexity: O(m + n) 
    - Each element from A and B is processed exactly once.

    Space Complexity: O(1)
    - In-place merging, no extra array used.
    */
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    
    void merge(vector<int>& A, int m, vector<int>& B, int n) {
        int idx = m + n - 1; // Index for placing elements from the end
        int i = m - 1;       // Last valid element in A
        int j = n - 1;       // Last element in B

        // Compare elements from the end and place the larger one at idx
        while (i >= 0 && j >= 0) {
            if (A[i] >= B[j]) {
                A[idx--] = A[i--];
            } else {
                A[idx--] = B[j--];
            }
        }

        // Copy any remaining elements from B to A
        while (j >= 0) {
            A[idx--] = B[j--];
        }
    }
};

// Test the merge function
int main() {
    Solution sol;

    vector<int> A = {1, 3, 5, 0, 0, 0};
    vector<int> B = {2, 4, 6};

    sol.merge(A, 3, B, 3);

    cout << "Merged array: ";
    for (int num : A) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
/*
    Approach:
    1. Start from the end of both arrays A and B.
    2. Compare the current elements of A and B.
    3. Place the larger element at the end of A.
    4. Move the pointers accordingly.
    5. If any elements remain in B, copy them to A.
    This avoids extra space by filling A from the back.
*/
