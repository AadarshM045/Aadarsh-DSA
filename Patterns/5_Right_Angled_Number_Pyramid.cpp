/**
 * @file 5_Right_Angled_Number_Pyramid.cpp
 * @brief Prints a right-angled number pyramid pattern.
 * @author Aadarsh Mishra
 * 
 * Pattern Preview (for n = 4):
 * 1
 * 12
 * 123
 * 1234
 */

#include <iostream>

using namespace std;

int main() {
    int n = 4; // Height of the triangle

    // Outer loop controls the rows
    for(int i = 0; i < n; i++) {
        // Inner loop prints numbers from 1 up to (i + 1) for each row
        for(int j = 1; j <= i + 1; j++) {
            cout << j;
        }
        cout << "\n"; // Move to the next line after each row
    }

    return 0;
}