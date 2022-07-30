#include <iostream>

using namespace std;

// sometimes we may need to keep account of multiple entities having the same object
// this is not a problem when there are only 2/3 entities
// it is a problem when there are around 100 entities though
// we can solve this problem by creating an array of entities instead of creating


class Human 
{
    string name;
    int age;
    string gender;

public:

    void takeInput()
    {
        cout << "Enter the name: "<< endl;
        cin >> this->name;
        cout << "Enter the age: "<< endl;
        cin >> this->age;
        cout << "Enter the Gender: "<< endl;
        cin >> this->gender;
    }

    void display()
    {
        cout << "The name is " << this->name << endl;
        cout << "The age is " << this->age << endl;
        cout << "The gender is " << this->gender << endl;
    }

};


int main() 
{
    int elements;
    cout << "How many entities would you like to create?" << endl;
    cin >> elements;
    // syntac for creating an array of objects
    Human Humans[elements];
    
    // this is one way to take input in an array of objects
    for (int i = 0; i < elements; i++)
    {
        Humans[i].takeInput();
    }

    for (int i = 0; i < elements; i++)
    {
        Humans[i].display();
    }
    
    return 0;
}

/* Input 
3
Jake 25 male
Mike 42 male
Alice 21 female

Output:
How many entities would you like to create?
Enter the name: 
Enter the age: 
Enter the Gender: 
Enter the name: 
Enter the age: 
Enter the Gender: 
Enter the name: 
Enter the age: 
Enter the Gender: 
The name is Jake
The age is 25
The gender is male
The name is Mike
The age is 42
The gender is male
The name is Alice
The age is 21
The gender is female

*/

