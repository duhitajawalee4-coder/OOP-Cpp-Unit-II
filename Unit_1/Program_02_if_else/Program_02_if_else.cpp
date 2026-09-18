#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 40)
        cout << "Duhita has passed the examination." << endl;
    else
        cout << "Duhita has failed the examination." << endl;

    return 0;
}