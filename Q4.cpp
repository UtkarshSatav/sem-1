// Write a program to demonstrate function overloading by creating three functions
// named max:
// int max(int a, int b) to find the larger of two integers.
// double max(double a, double b) to find the larger of two double values.

#include <iostream>
using namespace std;
int max(int a, int b) {
    return (a > b) ? a : b;
    }
    double max(double a, double b) {
        return (a > b) ? a : b;
        }
        int main() {
            cout << "Larger of 10 and 20 is " << max(10,20) << endl;
            cout << "Larger of 10.5 and 20.5 is " << max (10.5, 20.5) << endl;
            return 0;
            } // end of main

            
