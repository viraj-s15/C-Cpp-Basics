#include <iostream>
using namespace std;

// constructors are an important part of any class, they can be used to initialise the object without
// manually assigning its data members. There are various types of constructors, we will be using them all in 
// the code below

class Car {
    string name;
    string modelName;
    int yearOfProduction;
    string color;
    int weight;

    public:

    // This is a default constructor and Cpp will automatically create it even if one does not write it 
    Car() {} 


    // This is a parameterised constructor, it is easier to initialise and assign properties to objects using this
    Car(string name, string modelName, int yearOfProduction, string color, int weight) {
        // The this keyword will be explained properly in a different file
        this->name = name;
        this->modelName = modelName;
        this->yearOfProduction = yearOfProduction;
        this->color = color;
        this->weight = weight;
    }

    // print function displays all of the properties of the car
    void display() {
        cout << "Car Name: " << this->name << endl;
        cout << "Car Model Name: " << this->modelName << endl;
        cout << "Car Year of Production: " << this->yearOfProduction << endl;
        cout << "Car Color: " << this->color << endl;
        cout << "Car Weight: " << this->weight << endl;
    }


};

int main() {
    // This is how to use the parameterised constructor and assign values using it
    Car *car1 = new Car("Honda" , "Civic" , 2012 , "Blue" , 1250);
    car1->display();
    return 0;
}

// Output
// Car Name: Honda
// Car Model Name: Civic
// Car Year of Production: 2012
// Car Color: Blue
// Car Weight: 1250
