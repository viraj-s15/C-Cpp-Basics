// The static keyword
#include <iostream>  
using namespace std;  
 class example
 {
    public:
    int a; // non-static
    static int b; // static
    example(int n1, int n2)
    {
         a=n1;
         b=n2;
    }
    
    void display()
    {
        cout<<"\n The a and b values are: "<<a<<" "<<b;
    }
     
};
int example::b;
int main ()  
{  
// non-static means that a separate copy for each individual object
// static - only a single copy is created in the memory
// and all the objects share the same copy.
// if one object modifies then affect for remaining objects too
    example e1(10,20), e2(30,40), e3(50,60);
    
    e1.display(); // 10 20  10 60
    e2.display(); // 30 40  30 60
    e3.display(); // 50 60  50 60
    
    e2.b= -20;
    e2.a= -30;

 

    e1.display(); // 10 -20
    e2.display(); // -30 -20
    e3.display(); // 50 -20
    return 0;  
}   
