////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for a Problem: Read N Tuples
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       22.01.2022
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// TASK DESCRIPTION
///
/// A program reads n pairs (x, y) of real numbers, and calculates the average
/// of the sum of all x^y.
/// Input:
///     first line contains an integer >= 0;
///     next n lines contain pairs (x, y) separated by spaces.
/// Output:
///     the average above, or “NaN” if n == 0.
///
////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cmath>            // HINT: library for some math functions


// HINT: use the using statement in make it shorter refererring to std::cout
// and std::cin.

using std::cin;            // now we can use cin w/o std:: prefix
using std::cout;


int main()
{
    //const unsigned int n = 42;        // we can't use const if we want to read anything
    size_t n;                   // we'll store a number of pairs here (unsigned integer)
    cin >> n;

    double sum = 0;               // we must initialize it, sinc we will add new sum components
    for (size_t i = 0; i < n; ++i)
    {
        double x, y;
        cin >> x >> y;
        sum += pow(x, y);
    }

    if (n) // n != 0
        cout << sum / n;
    else
        cout << "NaN";


    return 0;
}
