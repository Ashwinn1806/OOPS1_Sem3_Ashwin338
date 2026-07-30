/*Arguments are the actual values that are passed to a function when it is called. They provide the input on which the function operates.

Default arguments are predefined values assigned to function parameters. If the user does not provide an argument during the function call, the d\efault value is automatically used.

Parameters are the variables declared in the function definition.
*/

#include <iostream>
using namespace std;

void add(int a, int b) //Parameters
{
    cout << "Sum = " << a + b;
}

int sub(int a, int b = 10)//Default Arguements
{
    return a - b;
}


int main()
{
    add(10, 20); //Arguements
    cout << "add(5) = " << sub(5) << endl;
    cout << "add(5, 20) = " << sub(5, 20);

    return 0;
}
