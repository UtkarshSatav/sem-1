//Write a program that defines a class Rectangle with the following:
// Two private data members: length and width.
// A default constructor that initializes length and width to 1.
// A member function area() to calculate and return the area of the rectangle.
// A main() function to create an object of the Rectangle class, call the area()
// function, and print the result.

#include <iostream>
using namespace std;
class Rectangle {
    private:
    int length;
    int width;
    public:
    Rectangle() {
        length = 1;
        width = 1;
        }
        int area() {
            return length * width;
            }
            };
            int main() {
                Rectangle r;
                cout << "Area of the rectangle is " << r.area() << endl;
                return 0;
                }
    