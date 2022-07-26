#include <iostream>

using namespace std;

class Human 
{
    string name;
    int age;
    string gender;

public:

    Human(string name, int age, string gender) // we can add parameters to a constrcutor similar to any other function 
    {
        // here we are going to use the this pointer, the 'this' pointer referes to the instance level data attribute for that particular object
        // we use it to set the given value to the actual value of the data type
        this->name = name;
        this->age = age;
        this->gender = gender;
    }

    void display()
    {
        cout << "The name of the human is " << name << endl;
        cout << "The age of the human is " << age << endl;
        cout << "The gender of the human is " << gender << endl;
    }
};

int main()
{
    // here is how we initalise a parameterized contructor
    Human Steve("Steve" , 23, "Male");
    Steve.display();
    return 0;
} 

/* Output
The name of the human is Steve
The age of the human is 23
The gender of the human is Male
*/