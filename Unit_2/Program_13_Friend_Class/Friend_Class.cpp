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

    friend class Result;
};

class Result
{
public:
    void displayMarks(Student student)
    {
        cout << "Student Name: Duhita" << endl;
        cout << "Marks: " << student.marks << endl;
    }
};

int main()
{
    Student student;
    Result result;

    result.displayMarks(student);

    return 0;
}