//Access modifiers

// Access modifiers are used in classes to hide certain data and to implement abstraction. 
// It is also used in inhertance. Below is a code with different access modifers and inhertance, 
// near the inherited class, there is a comment that states which access modifier does the inherited content belong to 
// int that class


#include <iostream>
using namespace std;

class A {
	int b;
public:
	int a;
protected:
	int c;
};


class B : public A{
	int q; 
public: // a and p would be a part of q
	int p;
protected: // c would be derived into the protected class along with r
	int r;
};

class C : protected A{
	int l; 
public: // no change
	int m;
protected: // a and c are derived here along with n
	int n;
};


int main()
{
    
	return 0;
}

