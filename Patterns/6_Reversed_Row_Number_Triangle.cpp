/**
 * @file 6_Reversed_Row_Number_Triangle.cpp
 * @brief Prints a right-angled triangle where each row counts down to 1.
 * @author Aadarsh Mishra
 * 
 * Pattern Preview (for n = 4):
 * 1
 * 21
 * 321
 * 4321
 */

#include <iostream>

using namespace std;

int main() {
    int n = 4; // Height of the triangle

    // Outer loop controls the rows
    for(int i = 0; i < n; i++) {
        // Inner loop prints numbers in descending order from (i + 1) down to 1
        for(int j = i + 1; j > 0; j--) {
            cout << j;
        }
        cout << "\n"; // Move to the next line after each row
    }

    return 0;
}