#include <iostream>
using namespace std;


// Create A class Person and give it some attributes. Use a getter and setter function to set values for the class.
// Create a class student which is inherited from the class person. Gate is a nationwide exam. Create a class that consists
// of attributed related to the Gate exam, create a setter and getter function to set values for the class. Create
// a getHighScore function which will return the highest score of all the candidates, input format and expected
// output has been provided at the end of the file

class Person
{
protected:
    string name;
    int age;
public:

    void getPerson();
    void setPerson();
    void displayPerson();
    
};

void Person :: getPerson()
{
    cin >> name;
    cin >> age;
}

void Person :: setPerson()
{
    this->name = name;
    this->age = age;
}

void Person :: displayPerson()
{
    cout << name << std::endl;
    cout << age << std::endl;
}

class Student : public Person
{
protected:
    string regno;
    float cgpa;
public:
    void getStudent();
    void setStudent();
    void displayStudent();
};

void Student :: getStudent()
{
    cin >> name;
    cin >> age;
    cin >> regno;
    cin >> cgpa;
}

void Student :: setStudent()
{
    this->name = name;
    this->age = age;
    this->regno = regno;
    this->cgpa = cgpa;
}

void Student :: displayStudent()
{
    cout << name << std::endl;
    cout << age << std::endl;
    cout << regno << std::endl;
    cout << cgpa << std::endl;
}

class GateScore
{
protected:
    string GateRegistrationNumber;
    float score;
    int ExamCode;
public:
    void getGate();
    void setGate();
    void displayGate();

};
void GateScore :: getGate()
{

    cin >> GateRegistrationNumber;
    cin >> score;
    cin >> ExamCode;
}

void GateScore :: setGate()
{

    this->GateRegistrationNumber = GateRegistrationNumber;
    this->score = score;
    this->ExamCode = ExamCode;
}

void GateScore :: displayGate()
{

    cout << GateRegistrationNumber << std::endl;
    cout << score << std::endl;
    cout << ExamCode << std::endl;
}

class PG_Student: public Student, public GateScore
{
protected:
    string deptName;
public:
    void getPGS();
    void setPGS();
    void displayPGS();
    void getHighestScore(PG_Student *pg, int n);
};

void PG_Student :: getPGS()
{
    cin >> name;
    cin >> age;
    cin >> regno;
    cin >> GateRegistrationNumber;
    cin >> score;
    cin >> ExamCode;
}

void PG_Student :: setPGS()
{
    this->name = name;
    this->age = age;
    this->regno = regno;
    this->cgpa = cgpa;
    this->GateRegistrationNumber = GateRegistrationNumber;
    this->score = score;
    this->ExamCode = ExamCode;
}

void PG_Student :: displayPGS()
{
    cout << name << std::endl;
    cout << age << std::endl;
    cout << regno << std::endl;
    cout << GateRegistrationNumber << std::endl;
    cout << score << std::endl;
    cout << ExamCode << std::endl;
}

void PG_Student :: getHighestScore(PG_Student *pg, int n)
{
    float temp = pg[0].score;
    for (int i = 0; i < n; ++i)
    {
        if(temp < pg[i].score)
        {
            temp = pg[i].score;
        }
        
    }
    

    for (int i = 0; i < n; ++i)
    {
        if(temp == pg[i].score)
        {
        cout << "The name of the student with maximum mark is " << pg[i].name << std::endl;
        cout << "The VIT registration number is " << pg[i].regno << std::endl;
        cout << "The gate registration number is " << pg[i].GateRegistrationNumber << std::endl;
        break;
        }
    }


}


int main()
{
    int n;
    cout << "Enter the number of PG Students you want to create" << std::endl;
    cin >> n;
    PG_Student pg[n];
    PG_Student p; // creating pseudo object to help pass array of objects for other function  
    for (int i = 0; i < n; ++i)
    {
        pg[i].getPGS();
    }
    for (int i = 0; i < n; ++i)
    {
        pg[i].setPGS();
    }
    for (int i = 0; i < n; ++i)
    {
        pg[i].displayPGS();
    }

    p.getHighestScore(pg , n);
    
    return 0;
}


// Input
// 3
// Ameya
// 21
// 21sbzswb
// Sdjvn321
// 312
// 321651
// Gautam
// 24
// 21znnbrfs
// 62065AD
// 4500
// 16165
// Suteerth
// 23
// 21chquejb
// bqaegwedk
// 1000
// 95151



// Output
// Enter the number of PG Students you want to create
// Ameya
// 21
// 21sbzswb
// Sdjvn321
// 312
// 321651
// Gautam
// 24
// 21znnbrfs
// 62065AD
// 4500
// 16165
// Suteerth
// 23
// 21chutiya
// bsdk
// 1000
// 95151
// The name of the student with maximum mark is Gautam
// The VIT registration number is 21znnbrfs
// The gate registration number is 62065AD