#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
    string name;
    int employeeId;

public:
    Employee(string employeeName, int id)
        : name(employeeName), employeeId(id) {}

    virtual double calculateSalary() = 0;

    virtual void displayDetails() = 0;

    virtual ~Employee() = default;
};

class FullTimeEmployee : public Employee
{
private:
    double basicSalary;
    double allowance;

public:
    FullTimeEmployee(string employeeName, int id,
                     double salary, double extra)
        : Employee(employeeName, id),
          basicSalary(salary),
          allowance(extra) {}

    double calculateSalary() override
    {
        return basicSalary + allowance;
    }

    void displayDetails() override
    {
        cout << "Employee Type: Full-Time" << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeId << endl;
        cout << "Salary: Rs. " << calculateSalary() << endl;
    }
};

class PartTimeEmployee : public Employee
{
private:
    double hourlyRate;
    int hoursWorked;

public:
    PartTimeEmployee(string employeeName, int id,
                     double rate, int hours)
        : Employee(employeeName, id),
          hourlyRate(rate),
          hoursWorked(hours) {}

    double calculateSalary() override
    {
        return hourlyRate * hoursWorked;
    }

    void displayDetails() override
    {
        cout << "Employee Type: Part-Time" << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeId << endl;
        cout << "Salary: Rs. " << calculateSalary() << endl;
    }
};

int main()
{
    FullTimeEmployee fullTime("Duhita", 24, 30000, 5000);
    PartTimeEmployee partTime("Rahul", 25, 300, 40);

    Employee* employee;

    employee = &fullTime;
    employee->displayDetails();

    cout << endl;

    employee = &partTime;
    employee->displayDetails();

    return 0;
}