#include <iostream>
using namespace std;

// In this file we will see how objects are used with functions

class Human {

private: // This data is made private because the user doesn't 
// need to know how this data is being stored in order to use the application
    string name;
    int age;
    string gender;
    string city;

public: 
    // all functions inside a class must be made public
    // all functions inside a class are called member functions
    // in most applications, we will be taking input from the user 
    // that is what we will seeing in file

    void getInput() 
    // this is a member function which is responsible for getting input 
    // of the data from the user
    {
        cout << "Enter the name of the human: " << endl;
        cin >> name; // storing the name of the user
        cout << "Enter the age of the human: " << endl;
        cin >> age;
        cout << "Enter the gender of the human: " << endl;
        cin >> gender;
        cout << "Enter the city of the human: " << endl;
        cin >> city;
    }
 
     void printData() 
     // printing all of the data to make sure the application is functional
     // this is also a good practice for debugging purposes\
     // if you ever get stuck somewhere, print things inside functions to make
     // sure those functions are working correctly

    {
        cout << "The name of the human is " << name << endl;
        cout << "The age of the human is " << age << endl;
        cout << "The gender of the human is " << gender << endl;
        cout << "The city of the human is " << city << endl;
    }
    

};

int main()
{
    Human Steve; // created an object called Steve
    Steve.getInput(); // this is how one must call member functions inside classes
    Steve.printData(); // the general syntax is "objectName.functionName()"
    return 0;
}

// What we have done today is perfectly fine but it is not considered
// to be a good practice. Data which is present within the private access modifier inside
// a class is not be assigned directly. This part will be covered ahead in another 
// concept called constructors.


/* Here is the input for the above program:
Steve
21
Male
London

Here is the output of the above program:
Enter the name of the human: 
Enter the age of the human: 
Enter the gender of the human: 
Enter the city of the human: 
The name of the human is Steve
The age of the human is 21
The gender of the human is Male
The city of the human is London
*/
