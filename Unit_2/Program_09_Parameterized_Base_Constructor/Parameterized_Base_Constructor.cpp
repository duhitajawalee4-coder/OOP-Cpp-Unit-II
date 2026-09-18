#include <iostream>
#include <string>
#include <utility>
using namespace std;

class Person
{
protected:
    string name;

public:
    explicit Person(string personName)
        : name(std::move(personName))
    {
        cout << "Person constructor called." << endl;
    }

    void displayName() const
    {
        cout << "Name: " << name << endl;
    }
};

class Student : public Person
{
private:
    int rollNumber;

public:
    Student(string studentName, int roll)
        : Person(std::move(studentName)), rollNumber(roll)
    {
        cout << "Student constructor called." << endl;
    }

    void displayStudent() const
    {
        displayName();
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main()
{
    Student student("Duhita", 24);

    student.displayStudent();

    return 0;
}