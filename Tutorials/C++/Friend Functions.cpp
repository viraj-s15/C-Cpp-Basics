#include<iostream>
using namespace std;

// After learning about access modifiers, one of the more important concepts is that  of friend functions
// Say one has a private method which must be used by another class, this may be so due to code design or
// simple older codebases, one must use friend functions to efficiently deal with such issues, However, friend 
// functions can access all of the private data members of the class, they are not always the answer
// Below is the syntax and semantics to be used

class example
{
    int a;
    public:
    example()
    {
        a=10;
    }    
    
    friend void display(example e);
};
void display(example e)
{
    cout<<"The a value is:"<<e.a;
}

 

int main()
{
    // Friend functions give provision to access private or protected data
    // 3 access modifiers/controls/specifiers -> public, private, protected
    // Inheritance by default is private
    
    example e;
    
    display(e);
    
    return 0;
}




