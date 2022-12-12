#include <iostream>

using namespace std;
// Just like a constructor, there is also something called a destructor
// it is exactly as it sounds
// a constructor is used in the construction of objects while
// a destructor is used in the destruction of objects
class Human 
{
public:
    Human()
    {
        cout << "The human has been created using a constructor" << endl;
    }

    ~Human()
    {
        cout << "The human has been destroyed using a destructor" << endl;
    }
};

int main() 
{
    Human Steve;
    return 0;
}


/* Output
The human has been created using a constructor
The human has been destroyed using a destructor
*/
