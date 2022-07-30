#include <iostream>
using namespace std;
// A contructor is a special function used in OOPS. It is invoked whenever an object is created
// It has the same name as the class, it does not hav any return type and hence can be declared without using any type
// It is commonly used to initialise the object with a specific value

// Syntax

class Human {
   string name;
   int age;

// A contructor is always defined in the public section of a class

public:

    Human() // This is a constructor
    {
        name = "John";
        age = 25;
    }

    void getData()
    {
        cout << name << endl;
        cout << age << endl;
    }

};


int main()
{
    Human John;
    John.getData();
    return 0;
}

// This is a very vague use of a constructor and this is not how it is normally used
// however a few more concepts are required to understand the usage of constructors, which will be explained later
// This hoowever is an overview of how contructors are used to set values to objects

/* Output
John
25
*/