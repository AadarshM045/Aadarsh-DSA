/**
 * @file 9_Floyds_Triangle.cpp
 * @brief Prints Floyd's Triangle with continuously incrementing numbers.
 * @author Aadarsh Mishra
 * 
 * Pattern Preview (for n = 4):
 * 1 
 * 2 3 
 * 4 5 6 
 * 7 8 9 10 
 */

#include <iostream>

using namespace std;

int main() {
    int n = 4;        // Height of the triangle
    int a = 1;        // Counter for continuous numbers

    // Outer loop controls the rows
    for(int i = 0; i < n; i++) {
        // Inner loop prints numbers in each row and increments them continuously
        for(int j = 0; j < i + 1; j++) {
            cout << a << " ";
            a++;
        }
        cout << "\n"; // Move to the next line after each row
    }

    return 0;
}