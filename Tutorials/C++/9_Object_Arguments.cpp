#include <iostream>
using namespace std;

// Passing an object as an argument in the function of another object
// this may be useful in certain cases, we will discuss these cases in the future


class example {
public:
    int a;

    example () 
    {
        a = 10;
    }

    // the object of this class is an argument to the function
    static void display(example e1)
    {
        e1.a++;
        cout << e1.a << endl;
    }

};
int main()
{
    // passing object as argument in a function is similar
    // to passing primitive data types which means it will pass by 
    // value by default

    example e1;
    example::display(e1);
    cout << e1.a;

    return 0;
}