#include <iostream>
using namespace std;


// Inheritance is a simple but important concept in object oriented programming
// Whener multiple classes require the use of simple functions or parameters over and over again, 
// we simple take those functions and create a third class that can be used to implement the required classes
// below is a small example of how inheritance works, this is a smaller and simpler example and hence can be done
// even without the use of inheritance but in larger codebases with more than 10 classes, it becomes a requirement

class Animal {
    public:

    void bark() {
        cout << "The animal is barking from the Animal Class" << endl;
    }
};

class Cat : public Animal{
    public:
    void bark() {
        cout << "The cat is meowing from the Cat class" << endl;
    }
};

class Dog : public Animal{
    public:
    void bark() {
        cout << "The dog is barking from the Dog class" << endl;
    }
};



int main() {
    Animal *a;
    Cat *c;
    Dog *d;
    a->bark();
    c->bark();
    d->bark();
    return 0;
}

// Output of the above code
// The animal is barking from the Animal Class
// The cat is meowing from the Cat class
// The dog is barking from the Dog class
