/**
 * @file 10_Inverted_Repeating_Number_Triangle.cpp
 * @brief Prints an inverted triangle with leading spaces and repeating row numbers.
 * @author Aadarsh Mishra
 *
 * Pattern Preview (for n = 4):
 * 1111
 *  222
 *   33
 *    4
 */

#include <iostream>

using namespace std;

int main()
{
    int n = 4; // Height of the triangle

    // Outer loop controls the rows
    for (int i = 0; i < n; i++)
    {
        // Inner loop prints leading spaces for indentation
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // Inner loop prints the repeating row number
        for (int k = 0; k < n - i; k++)
        {
            cout << (i + 1);
        }
        cout << "\n"; // Move to the next line after each row
    }

    return 0;
}