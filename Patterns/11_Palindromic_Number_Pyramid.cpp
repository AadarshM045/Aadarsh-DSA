/**
 * @file 11_Palindromic_Number_Pyramid.cpp
 * @brief Prints a centered palindromic number pyramid pattern.
 * @author Aadarsh Mishra
 * 
 * Pattern Preview (for n = 4):
 *    1
 *   121
 *  12321
 * 1234321
 */

#include <iostream>

using namespace std;

int main() {
    int n = 4; // Height of the pyramid

    // Outer loop controls the rows
    for(int i = 0; i < n; i++) {
       // Inner loop prints leading spaces for centering
       for(int j = 0; j < n - i; j++) {
        cout << " ";
       }
       // Inner loop prints increasing numbers from 1 to i+1
       for(int j = 1; j <= i + 1; j++) {
        cout << j;
       }
       // Inner loop prints decreasing numbers from i down to 1
       for(int j = i; j > 0; j--) {
        cout << j;
       }
       cout << "\n"; // Move to the next line after each row
    }

    return 0;
}