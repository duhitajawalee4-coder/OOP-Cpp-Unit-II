#include <iostream>
using namespace std;

class Student
{
private:
    int rollNumber;

public:
    Student()
    {
        rollNumber = 24;
    }

    class Details
    {
    public:
        void display()
        {
            cout << "Nested class is inside Student class." << endl;
        }
    };

    void displayStudent()
    {
        cout << "Student Name: Duhita" << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main()
{
    Student student;

    student.displayStudent();

    Student::Details details;
    details.display();

    return 0;
}