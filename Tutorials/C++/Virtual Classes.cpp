#include <iostream>
using namespace std;

class Base {
public:
	void display(){
		cout << "This display works";
	}
};

class Derived1 : virtual public Base {};

class Derived2 : virtual public Base {};

//  Adding the virtual keywork will not give an error since the
//  compiler doesnt identify the base class and any new class 
//  derived from the two derived classes as one class
// They are normally used to prevent confusion in complex scenarios that deal with multiple inheritance

int main()
{
    Derived1 derived;
    derived.display();
	return 0;
}