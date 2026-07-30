/*
Topic: OOPS Basics in C++

1. Class
A class is a blueprint for creating objects.

2. Object
An object is an instance of a class.

3. Data Members
Variables declared inside a class.

4. Member Functions
Functions declared inside a class.

5. Access Specifiers
public    - Accessible from anywhere.
private   - Accessible only inside the class.
protected - Accessible inside the class and derived classes.

6. Constructor
A special member function having the same name as the class.
It is called automatically when an object is created.

7. Destructor
A special member function preceded by '~'.
It is called automatically when an object is destroyed.

8. Encapsulation
Wrapping data and functions together in a class and protecting data.

9. Abstraction
Hiding implementation details and showing only essential features.

10. Inheritance
Acquiring the properties and functions of one class into another.

11. Polymorphism
One interface with many forms.
Types:
- Compile-Time Polymorphism
- Run-Time Polymorphism
*/

#include <iostream>
using namespace std;

// Base class
class Animal
{
private:
    // Private data member (Encapsulation)
    int age;

public:
    // Constructor (called automatically when object is created)
    Animal()
    {
        age = 0;
        cout << "Constructor Called" << endl;
    }

    // Destructor (called automatically when object is destroyed)
    ~Animal()
    {
        cout << "Destructor Called" << endl;
    }

    // Member function to modify private data
    void setAge(int a)
    {
        age = a;
    }

    // Member function to display data
    void display()
    {
        cout << "Age = " << age << endl;
    }
};


int main()
{
    // Creating an object of Animal class
    Animal a;

    // Calling member function to set age
    a.setAge(5);

    // Calling member function to display age
    a.display();

    return 0;
}