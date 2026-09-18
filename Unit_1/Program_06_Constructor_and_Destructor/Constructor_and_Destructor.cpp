#include <iostream>
using namespace std;

class Demo
{
public:
    Demo()
    {
        cout << "Constructor called." << endl;
    }

    ~Demo()
    {
        cout << "Destructor called." << endl;
    }
};

int main()
{
    cout << "Creating object..." << endl;

    Demo obj;

    cout << "Object is active." << endl;

    return 0;
}