/**
 * @file 3_Square_Incremental_Number_Pattern.cpp
 * @brief Prints an NxN grid with continuously incrementing numbers.
 * @author Aadarsh Mishra
 * 
 * Pattern Preview (for n = 3):
 * 123
 * 456
 * 789
 */

#include <iostream>

using namespace std;

int main() {
    const int n = 3; // Size of the grid (can be changed dynamically)
    int a = 1;       // Counter to keep track of continuously incrementing numbers

    // Outer loop controls the rows
    for (int i = 1; i <= n; i++) {
        // Inner loop controls the columns (printing and incrementing numbers)
        for (int j = 1; j <= n; j++) {
            cout << a << " "; 
            a++;              
        }
        cout << "\n"; 
    }

    return 0;
}