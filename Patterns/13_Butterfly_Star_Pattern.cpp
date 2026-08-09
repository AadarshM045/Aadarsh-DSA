/**
 * @file 13_Butterfly_Star_Pattern.cpp
 * @brief Prints a symmetric butterfly star pattern using i and j loop variables.
 * @author Aadarsh Mishra
 */

#include <iostream>

using namespace std;

int main() {
    // Loop through 8 rows (1 to 8) using 'i'
    for (int i = 1; i <= 8; ++i) {
        
        // Loop through 8 columns (1 to 8) using 'j'
        for (int j = 1; j <= 8; ++j) {
            
            // Rows 4 and 5 are completely filled with stars
            if (i == 4 || i == 5) {
                cout << "*";
            }
            // Rows 1 and 8 have stars only at the first and last columns
            else if ((i == 1 || i == 8) && (j == 1 || j == 8)) {
                cout << "*";
            }
            // Rows 2 and 7 have two stars at both left and right edges
            else if ((i == 2 || i == 7) && (j <= 2 || j >= 7)) {
                cout << "*";
            }
            // Rows 3 and 6 have three stars at both left and right edges
            else if ((i == 3 || i == 6) && (j <= 3 || j >= 6)) {
                cout << "*";
            }
            // Print a space for the empty parts of the grid
            else {
                cout << " ";
            }
        }
        // Move to the next line after completing each row
        cout << endl;
    }

    return 0;
}