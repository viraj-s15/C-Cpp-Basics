#include <iostream>
using namespace std;

// Multiple inheritance is a feature of inheritance where one can inherit the qualities of various classes
// in one class. Below is the syntax and a small example as to how it works

class A {
    public:

    void details() {
        cout << "This is being printed from class A" << endl;
    }
};

class B {
    public:

    void details1() {
        cout << "This is being printed from class B" << endl;
    }
    
};

// C is inheriting the data of both A and B and hence will be able to use all of the functions in 
// those classes
class C: public A, public B {
    public: 

    void details2() {
        cout << "This is being printed from class C" << endl;
    }
};



int main() {
    // Driver code
    C *c;
    c->details();
    c->details1();
    c->details2();
    return 0;
}


// Output
// This is being printed from class A
// This is being printed from class B
// This is being printed from class C
