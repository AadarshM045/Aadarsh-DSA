#include <iostream>

using namespace std;

int main() {
    const int n = 3;
    int a=1; // Size of the grid (can be changed dynamically)

    // Outer loop controls the rows
    for (int i = 1; i <= n; i++) {
        // Inner loop controls the columns (printing numbers from 1 to n)
        for (int j = 1; j <= n; j++) {
            cout << a;
            a++;
        }
        cout << "\n"; // Move to the next line after each row
    }

    return 0;
}