// Write a program that defines a function int add(int a, int b) to calculate and return
// the sum of two integers.
// ● Call this function from main() with two user-input values.
// ● Display the returned result.

#include <iostream>
using namespace std;
int add(int a, int b) {
    return a + b;
    }
    int main() {
        int num1, num2;
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        cout << "The sum of " << num1 << " and " << num2 << " is " << add(num1, num2) << endl;
        return 0;
        }
        