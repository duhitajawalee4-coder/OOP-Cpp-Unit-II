#include <iostream>
using namespace std;

class Person
{
public:
    virtual void display()
    {
        cout << "Person display function" << endl;
    }
};

class Student : public Person
{
public:
    void display() override
    {
        cout << "Student display function" << endl;
    }
};

class Teacher : public Person
{
public:
    void display() override
    {
        cout << "Teacher display function" << endl;
    }
};

int main()
{
    Person* person;

    Student student;
    Teacher teacher;

    person = &student;
    person->display();

    person = &teacher;
    person->display();

    return 0;
}