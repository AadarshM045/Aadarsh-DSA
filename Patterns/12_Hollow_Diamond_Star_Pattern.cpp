/**
 * @file 12_Hollow_Diamond_Star_Pattern.cpp
 * @brief Prints a hollow diamond star pattern.
 * @author Aadarsh Mishra
 * 
 * Pattern Preview (for n = 4):
 *    *
 *   * *
 *  *   *
 * *     *
 *  *   *
 *   * *
 *    *
 */

#include <iostream>

using namespace std;

int main() {
    int n = 4; // Number of rows for the upper half (including the center row)

    // Upper half of the diamond
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print first asterisk
        cout << "*";
        // Print inner spaces
        for (int j = 1; j < 2 * (i - 1); j++) {
            cout << " ";
        }
        // Print second asterisk (except for the first row)
        if (i > 1) {
            cout << "*";
        }
        cout << "\n";
    }

    // Lower half of the diamond
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print first asterisk
        cout << "*";
        // Print inner spaces
        for (int j = 1; j < 2 * (i - 1); j++) {
            cout << " ";
        }
        // Print second asterisk (except for the last row)
        if (i > 1) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}