// Write a recursive function int factorial(int n) that calculates the factorial of a given
// number n.
// In the main() function, prompt the user to enter a positive integer and call the
// factorial function to compute and display the result.
// Example: For input 5, the output should be 120.

#include <iostream>
using namespace std;
int factorial(int n) {
    if (n == 0) {
        return 1;
        } else {
            return n * factorial(n - 1);
            }
}
int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (n < 0) {
        cout << "Error: Input should be a positive integer.";
        return 1;
        }
    else {
        cout << "Factorial of " << n << " is " << factorial(n);
        return 0;
        }
}
    int factorial(int n) {
        if (n == 0) {
            return 1;
            } 
        else {
            return n * factorial(n - 1);
            }
}
