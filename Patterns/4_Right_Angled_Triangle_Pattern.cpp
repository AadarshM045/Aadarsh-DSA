/**
 * @file 4_Right_Angled_Triangle_Pattern.cpp
 * @brief Prints a right-angled triangle star pattern.
 * @author Aadarsh Mishra
 * 
 * Pattern Preview (for n = 4):
 * *
 * **
 * ***
 * ****
 */

#include <iostream>

using namespace std;

int main() {
    int n = 4; // Height of the triangle

    // Outer loop controls the rows
    for(int i = 0; i < n; i++) {
        // Inner loop prints stars based on the current row number
        for(int j = 0; j < i + 1; j++) {
            cout << "*";
        }
        cout << "\n"; // Move to the next line after each row
    }

    return 0;
}