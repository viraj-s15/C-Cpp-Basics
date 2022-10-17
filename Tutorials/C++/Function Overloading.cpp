// Polymorphism is an important concept and is one of the pillars of OOPS
// reusability of code is an extremely important quality of life change in a developers life
// imagine having to write code and then copy pasting the same code over and over again to use it
// it becomes tedious. One way of implementing polymorphism is using functions which you must already know
// now how do we implement polymorphism using classes and objects

#include <iostream>
using namespace std;

// function overriding is a kind of polymorphism 
// it basically means, using the same function name in various classes 
// by this way the developer can use the same fucntion name for different classes
// and it would perform exactly as the developer intended it to
// imagine having two classes for two different kind of vehicles and you have a function
// that prints out the horsepower of the car. It would be very convenient to use just one function name
// implementing the following below

class Car1 {
    int horsepower;
    public:

    Car1(int horsepower) {
        this->horsepower = horsepower;
    } 

    void printHp() {
        cout << "The horsepower of car1 is " << this->horsepower << endl;
    }

};
class Car2 {
    int horsepower;
    public:

    Car2(int horsepower) {
        this->horsepower = horsepower;
    } 

    void printHp() {
        cout << "The horsepower of car2 is " << this->horsepower << endl;
    }

};
class Car3 {
    int horsepower;
    public:

    Car3(int horsepower) {
        this->horsepower = horsepower;
    } 

    void printHp() {
        cout << "The horsepower of car3 is " << this->horsepower << endl;
    }

};
class Car4 {
    int horsepower;

    public:
    Car4(int horsepower) {
        this->horsepower = horsepower;
    } 

    void printHp() {
        cout << "The horsepower of car4 is " << this->horsepower << endl;
    }

};
class Car5 {
    int horsepower;

    public:
    Car5(int horsepower) {
        this->horsepower = horsepower;
    } 

    void printHp() {
        cout << "The horsepower of car5 is " << this->horsepower << endl;
    }

};

// we have defined 5 cars here that all have the same function name
// we will give each car a differet value of horsepower and see how it works


int main() {
    Car1 car1 = Car1(250);
    Car2 car2 = Car2(500);
    Car3 car3 = Car3(700);
    Car4 car4 = Car4(850);
    Car5 car5 = Car5(1050);
    car1.printHp();
    car2.printHp();
    car3.printHp();
    car4.printHp();
    car5.printHp();
}


// Output 
// The horsepower of car1 is 250
// The horsepower of car2 is 500
// The horsepower of car3 is 700
// The horsepower of car4 is 850
// The horsepower of car5 is 1050

// notice how the same function name works for all the different objects we created
// this can get very handy when the number of objects is extremely high and the developer
// may need to remember various function names already