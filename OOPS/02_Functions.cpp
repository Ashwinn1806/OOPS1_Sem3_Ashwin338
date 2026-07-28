/*
Topic: Functions in OOP

1. Member Function

Definition:
A member function is a function declared inside a class that defines
the behavior or operations of an object.

Syntax:
return_type function_name(parameters)
{
    // Function body
}


2. Inline Function

Definition:
An inline function is a function for which the compiler may replace
the function call with the actual function code, reducing function
call overhead.

Syntax:
inline return_type function_name(parameters)
{
    // Function body
}


3. Function Overloading

Definition:
Function overloading is the feature of defining multiple functions
with the same name but different parameter lists.

Rules:
- Functions must differ in the number, type, or order of parameters.
- Overloading cannot be done by changing only the return type.
*/

#include <iostream>
using namespace std;

class Calculator
{
public:

    // Member Function
    void display()
    {
        cout << "Welcome to OOP" << endl;
    }

    // Inline Function
    inline int square(int n)
    {
        return n * n;
    }

    // Function Overloading
    int add(int a, int b)
    {
        return a + b;
    }

    int add(int a, int b, int c)
    {
        return a + b + c;
    }
};

int main()
{
    Calculator c;

    // Calling Member Function
    c.display();

    // Calling Inline Function
    cout << "Square = " << c.square(5) << endl;
    /*
    Instead of generating a normal function call, the compiler may treat: cout << c.square(5); 
    as if you had written: cout << 5 * 5;
    */

    // Calling Overloaded Functions
    cout << "Sum of 2 Numbers = " << c.add(10, 20) << endl;
    cout << "Sum of 3 Numbers = " << c.add(10, 20, 30) << endl;

    return 0;
}