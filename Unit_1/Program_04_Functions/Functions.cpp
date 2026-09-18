#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int num1 = 25;
    int num2 = 17;

    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;
    cout << "Sum: " << add(num1, num2) << endl;

    return 0;
}