/**
 * @file Rectangular_Alphabet_Pattern.cpp
 * @brief Prints a 4x4 rectangular pattern of consecutive uppercase alphabets.
 * @author Aadarsh Mishra
 * 
 * Pattern Preview:
 * ABCD
 * ABCD
 * ABCD
 * ABCD
 */

#include <iostream>

using namespace std;

int main() {
    const int n = 4; // Size of the grid

    // Outer loop controls the rows
    for (int i = 0; i < n; i++) {
        char ch = 'A'; // Reset character to 'A' at the start of each row
        
        // Inner loop controls the columns (printing consecutive characters)
        for (int j = 0; j < n; j++) {
            cout << ch;
            ch += 1; // Move to the next character in the alphabet
        }
        cout << "\n"; // Move to the next line after completing a row
    }

    return 0;
}