#include <iostream>
using namespace std;

class Laptop {
// defining the attributed mentioned in the challenge
private:
    float screenSize;
    string CpuName;
    string GpuName;
    bool isGaming;
    bool isMacbook;
    int cost;


public:
// the input function
void getInput()
{
    cout << "Enter the screen size of the laptop(in inches)" << endl;
    cin >> screenSize;
    cout << "Enter the CPU name of the laptop(AMD or Intel)" << endl;
    cin >> CpuName;
    cout << "Enter the GPU name of the laptop(AND or NVIDIA)" << endl;
    cin >> GpuName;
    cout << "Is the laptop a gaming laptop? (write 1 for true or 0 for false here) " << endl;
    cin >> isGaming;
    cout << "Is the laptop a Macbook? (write 1 for true and 0 for false here) " << endl;
    cin >> isMacbook;
    cout << "Enter the cost of the laptop(in dollars for simplicity)" << endl;
    cin >> cost;
}

void printData() 
{
    // the member function which will print all the data
    cout << "The screen size of the laptop is: " << screenSize << endl;
    cout << "The CpuName size of the laptop is: " << CpuName << endl;
    cout << "The GpuName size of the laptop is: " << GpuName << endl;
    isGaming ? cout << "The laptop is a gaming laptop" << endl : cout << "The laptop is not a gaming laptop" << endl;
    isMacbook ? cout << "The laptop is a Macbook" << endl : cout << "The laptop is not a Macbook" << endl;
    cout << "The cost of the laptop is: " << cost << endl;
}

};

int main()
{
    Laptop Laptop1;
    Laptop1.getInput();
    Laptop1.printData();
    return 0;
}

/* The input of the above program is:
15.6
Intel
NVIDIA
1
0
750

The output of the above program is:
Enter the screen size of the laptop(in inches)
Enter the CPU name of the laptop(AMD or Intel)
Enter the GPU name of the laptop(AND or NVIDIA)
Is the laptop a gaming laptop? (write 1 for true or 0 for false here) 
Is the laptop a Macbook? (write 1 for true and 0 for false here) 
Enter the cost of the laptop(in dollars for simplicity)
The screen size of the laptop is: 15.6
The CpuName size of the laptop is: Intel
The GpuName size of the laptop is: NVIDIA
The laptop is a gaming laptop
The laptop is not a Macbook
The cost of the laptop is: 750
*/
