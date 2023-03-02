#include <iostream>
using namespace std;

// Inline functions are an import concept of C++
// whenver a program executes a function call, the CPU stores
// the memory address of the function call, it copies the argunments of
// the function and sotres them onto the stack. Once it is stored on the stack
// it transfers control to the function. Normally, this is not a problem.
// The problem arises when this action takes longer than the execution of 
// the function itself. For, functions that are long/ contain complex code,
// this is not a problem since the execution time of the function is much larger than
// the time taken by the CPU to transfer the control to the function. 
// The prblem arises for smaller functions. It is good practice to use inline
// functions when making small functions that do not contain complex code.
// This is a way of C++ to reduce the overhead time.

// How to define inline functions

inline void inlineFunc()
{
    cout << "This is being printed from an inline function" << endl;
}

int main()
{
    inlineFunc();
    return 0;
}
