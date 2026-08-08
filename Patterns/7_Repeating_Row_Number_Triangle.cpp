/**
 * @file 7_Repeating_Row_Number_Triangle.cpp
 * @brief Prints a right-angled triangle where each row prints its respective row number repeatedly.
 * @author Aadarsh Mishra
 * 
 * Pattern Preview (for n = 4):
 * 1
 * 22
 * 333
 * 4444
 */

#include <iostream>

using namespace std;

int main() {
    int n = 4; // Height of the triangle

    // Outer loop controls the rows
    for(int i = 0; i < n; i++) {
        // Inner loop prints the current row number (i + 1) for (i + 1) times
        for(int j = 0; j < i + 1; j++) {
            cout << (i + 1);
        }
        cout << "\n"; // Move to the next line after each row
    }

    return 0;
}