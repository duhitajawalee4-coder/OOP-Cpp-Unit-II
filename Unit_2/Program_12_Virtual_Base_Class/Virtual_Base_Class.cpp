#include <iostream>
using namespace std;

class Person
{
protected:
    string name;

public:
    Person(string personName)
        : name(personName) {}

    void displayName()
    {
        cout << "Name: " << name << endl;
    }
};

class Student : virtual public Person
{
public:
    Student(string studentName)
        : Person(studentName) {}

    void showStudent()
    {
        cout << "Student class" << endl;
    }
};

class Employee : virtual public Person
{
public:
    Employee(string employeeName)
        : Person(employeeName) {}

    void showEmployee()
    {
        cout << "Employee class" << endl;
    }
};

class Manager : public Student, public Employee
{
public:
    Manager(string managerName)
        : Person(managerName),
          Student(managerName),
          Employee(managerName) {}

    void displayManager()
    {
        displayName();
        showStudent();
        showEmployee();
    }
};

int main()
{
    Manager manager("Duhita");

    manager.displayManager();

    return 0;
}