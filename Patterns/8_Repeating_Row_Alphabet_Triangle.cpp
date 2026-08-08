/**
 * @file 8_Repeating_Row_Alphabet_Triangle.cpp
 * @brief Prints a right-angled triangle where each row prints a repeating character incrementing per row.
 * @author Aadarsh Mishra
 * 
 * Pattern Preview (for n = 4):
 * A
 * BB
 * CCC
 * DDDD
 */

#include <iostream>

using namespace std;

int main() {
    int n = 4;        // Height of the triangle
    char ch = 'A';    // Starting character

    // Outer loop controls the rows
    for(int i = 0; i < n; i++) {
        // Inner loop prints the current character (i + 1) times for each row
        for(int j = 0; j < i + 1; j++) {
            cout << ch;
        }
        cout << "\n"; // Move to the next line after each row
        ch++;         // Move to the next alphabet for the next row
    }

    return 0;
}