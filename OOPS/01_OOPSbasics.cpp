/*
THEORY

1. Object-Oriented Programming (OOP)
   OOP is a programming paradigm that combines data and functions into a single
   unit called a class.

2. Class
   A class is a user-defined data type that acts as a blueprint for creating
   objects.

3. Object
   An object is an instance of a class. Memory is allocated only when an object
   is created.

4. Data Members
   Data members are variables declared inside a class. They store the
   information of an object.

5. Member Functions
   Member functions are functions declared inside a class. They perform
   operations on the data members.

6. Access Specifiers
   public    - Members can be accessed from anywhere.
   private   - Members can be accessed only within the class.
   protected - Members can be accessed within the class and by derived classes.

7. Constructor
   A constructor is a special member function that is automatically called when
   an object is created. It is used to initialize data members.

   Types:
   - Default Constructor
   - Parameterized Constructor

8. Destructor
   A destructor is a special member function that is automatically called when
   an object is destroyed. It is used to release resources.

9. Dot (.) Operator
   The dot operator is used to access the data members and member functions of
   an object.
*/
#include <iostream>
using namespace std;

class Student
{
public:

    // Data Members
    string name;
    int age;

    // Default Constructor
    Student()
    {
        name = "Unknown";
        age = 0;
    }

    // Parameterized Constructor
    Student(string n, int a)
    {
        name = n;
        age = a;
    }

    // Member Function
    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "Object Destroyed" << endl;
    }
};

int main()
{
    // Creating an object using the default constructor
    Student s1;

    // Accessing data members using the dot operator
    s1.name = "Ashwin";
    s1.age = 20;

    // Calling a member function
    s1.display();

    cout << endl;

    // Creating an object using the parameterized constructor
    Student s2("Rahul", 19);

    // Calling the member function
    s2.display();

    return 0;
}