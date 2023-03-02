#include <iostream>
using namespace std;

// A class is a user defined data type one can use it, to define anything
// in this particular code we will taking the example of a human and showing you how a class is created


class Human // This is how a class is defined in C++, "Human" is the name of the class
{

public: // ignore this it will be explained later
    string name; // This is the name of the human
    int age; // This is the age of the human
    string gender; // This is the gender of the human
    string city; // This is the city in which the human lives

// These are all the attributes we will be giving to our human
// One can give any attribute that they want to.
   
}; // Do not forget this semicolon at the end, it will throw an error



int main()
{
    // The next concept is objects, an object is an instance of the class.
    // Think of the class as a blueprint and the object as something made using that blueprint.
    // We can give use this class and create any object we want with any attributes that we want

    Human Steve;  // We created a an object called Steve using the class human

    Steve.name = "Steve";
    Steve.age = 19;
    Steve.gender = "male";
    Steve.city = "London";

    // We have now given steve a name, age , gender and city

   cout << "Hello there, my name is " << Steve.name << ", I am a " << Steve.age << " year old " << Steve.gender << " who lives in " << Steve.city << endl;

    // We just made our first custom data type and then gave it attributes using OOPS!!


}
