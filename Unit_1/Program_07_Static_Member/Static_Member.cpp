#include <iostream>
using namespace std;

class Student
{
private:
    static int count;

public:
    Student()
    {
        count++;
    }

    static void showCount()
    {
        cout << "Total objects created: " << count << endl;
    }
};

int Student::count = 0;

int main()
{
    Student student1;
    Student student2;
    Student student3;

    Student::showCount();

    return 0;
}