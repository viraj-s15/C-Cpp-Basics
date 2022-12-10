#include <iostream>  
using namespace std;  


// You may have seen thius pointer being used in constrcutors and that is a very common practice in OOP
// It is mainly used to assign the value of the object to the value of the class 
// A small example of it's implementation is given below
class Example
 {
     int a;
     public:
     Example(int a)
     {
         this->a=a; // this pointer variable - LHS a refers to current object data member a
    }
    void display()
    {
        cout<<"\n The a value is: "<<a;
    }
     
 };
int main ()  
{  
    // this pointer - pointer variable which refers current object
    Example e1(12); // int a;
    e1.display();
    return 0;  
}   