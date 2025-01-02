// Write a C++ program to define a class Student with the following:
// Private data members: name and age.
// A parameterized constructor to initialize the name and age.
// A copy constructor to create a copy of an existing Student object.
// A member function display() to print the details of the student.
// In the main() function, create an object of the Student class using the
// parameterized constructor and another object using the copy constructor. Display
// the details of both students.

#include <iostream>
using namespace std;
class Student {
    private:
    char name[20];
    int age;
    public:
    // Parameterized constructor
    Student(char n[], int a) {
        strcpy(name, n);
        age = a;
        }
        // Copy constructor
        Student(const Student &s) {
            strcpy(name, s.name);
            age = s.age;
            }
            // Member function to display the details of the student
            void display() {
                cout << "Name: " << name << endl;
                cout << "Age: " << age << endl;
                cout << endl;
                }
                };
                int main() {
                    Student s1("Patty", 20);
                    s1.display();
                    Student s2(s1);
                    s2.display();
                    return 0;
                    } // end of main
                    