#include <iostream>  
using namespace std;  
// We have already learned about static data members
// these static data members can be modified and accessed only by static functions
// a small example is given below

class example
 {
     public:
     static int a; // static
     static int b; // static
     public:
     example(int n1, int n2)
     {
         a=n1;
         b=n2;
    }
    
static void display()
    {
        cout<<"\n The a and b values are: "<<a<<"\t"<<b;
    }
     
 };
int example::b;
int example::a;
int main ()  
{  

 

// some important characteristics of a static data member
// 1. It can access only other static data or other static functions
// 2. It can be invoked by class name using :: directly
// 3. all objects share the same function
    
    example e1(10,20), e2(30,40), e3(50,60);
    
    example::display();  // 50 60
    
    return 0;  
}