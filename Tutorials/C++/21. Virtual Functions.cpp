#include <iostream>
using namespace std;

// Virtual functions are an important concept that must be used 
// when implementing runtime polymorphism. If one is creating a base class and the entire function of the base
// class is to be inherited by multiple different classes, it is a much better practice than creating a reglar class 
class Base
{
public:
    // it is to be created in this way in the base class
   virtual void display()
    {
        cout << "This is the base class" << endl;
    }
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
    // driver code
    Base *ptr;
    Base b;
    ptr = &b;
    ptr->display();
    Derived D;
    ptr = &D;
    ptr->display(); 
    return 0;
}


// Output 
// This is the base class
// This is the derived class
