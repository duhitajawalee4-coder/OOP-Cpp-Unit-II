#include <iostream>
using namespace std;

class Student
{
private:
    int marks;

public:
    Student()
    {
        marks = 85;
    }

    inline int getMarks()
    {
        return marks;
    }

    friend void displayMarks(Student s);
};

void displayMarks(Student s)
{
    cout << "Student Name: Duhita" << endl;
    cout << "Marks: " << s.marks << endl;
}

int main()
{
    Student student1;

    cout << "Marks using inline function: "
         << student1.getMarks() << endl;

    displayMarks(student1);

    return 0;
}