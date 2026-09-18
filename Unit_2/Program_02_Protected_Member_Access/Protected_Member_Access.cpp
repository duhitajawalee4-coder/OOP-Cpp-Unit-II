#include <iostream>
#include <string>
#include <utility>
using namespace std;

class Employee
{
protected:
    string name;

public:
    explicit Employee(string employeeName)
        : name(std::move(employeeName)) {}
};

class Developer : public Employee
{
private:
    string language;

public:
    Developer(string employeeName, string programmingLanguage)
        : Employee(std::move(employeeName)),
          language(std::move(programmingLanguage)) {}

    void display() const
    {
        cout << "Developer: " << name << endl;
        cout << "Language: " << language << endl;
    }
};

int main()
{
    Developer developer("Duhita", "C++");

    developer.display();

    return 0;
}