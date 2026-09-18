#include <iostream>
using namespace std;

int main()
{
    int marks[5] = {82, 67, 91, 76, 88};

    cout << "Marks of five students:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Student " << i + 1 << ": " << marks[i] << endl;
    }

    return 0;
}