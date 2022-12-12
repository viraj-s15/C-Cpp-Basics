#include<iostream>
using namespace std;

// As friend functions can access the private data members of the class, friend classes can access the 
// private data members of the class as well. Note : The entire class can use and manipulate the private
// data of the other class, which is to be used carefully. Below is the syntax

class A
{
    int a;
    public:
    A()
    {
        a=12;
    }
    // B can access the private data members of the class A
    friend class B;
    
};
class B
{
    public:
    void display(A e)
    {
        cout<<"The class A data member a value is: "<<e.a;
    }
};

 

int main()
{
    A aobj;
    
    B bobj;
    bobj.display(aobj);
    
    
    return 0;
}