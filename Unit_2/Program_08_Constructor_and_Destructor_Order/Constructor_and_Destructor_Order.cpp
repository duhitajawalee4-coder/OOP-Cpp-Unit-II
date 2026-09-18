#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base constructor called." << endl;
    }

    ~Base()
    {
        cout << "Base destructor called." << endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "Derived constructor called." << endl;
    }

    ~Derived()
    {
        cout << "Derived destructor called." << endl;
    }
};

int main()
{
    cout << "Creating derived object..." << endl;

    Derived obj;

    cout << "Object is active." << endl;

    return 0;
}