#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;
    char grade;

    void displayDetails()
    {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main()
{
    Student student1;

    student1.name = "Duhita";
    student1.rollNo = 24;
    student1.grade = 'A';

    student1.displayDetails();

    return 0;
}