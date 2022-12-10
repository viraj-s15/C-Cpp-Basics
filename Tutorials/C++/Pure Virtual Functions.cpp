#include <iostream>
using namespace std;

class Base
// if a class constains a virtual function, it is called
// an abstract class. One CANNOT create objects for abstract classes
{
public:

   virtual void display() = 0;
   // This kind of function is called a pure virtual fucntion
   // the base class does not have any function body. However, the classes
   // that derive it must contain some code in the function

};

class Derived : public Base
{
public:
    void display()
    {
        cout << "This is the derived class" << endl;
    }
    
};

int main()
{   
    Base *ptr;
    // Base b;
    // ptr = &b;
    // b.display();
    Derived D;
    // D.display();
    ptr = &D;
    ptr->display(); 
    return 0;
}

// Output
// This is the derived class
