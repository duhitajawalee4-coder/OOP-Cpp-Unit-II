#include <iostream>
using namespace std;

class Academic
{
protected:
    int academicMarks;

public:
    explicit Academic(int marks)
        : academicMarks(marks) {}

    void showAcademic() const
    {
        cout << "Academic Marks: " << academicMarks << endl;
    }
};

class Sports
{
protected:
    int sportsMarks;

public:
    explicit Sports(int marks)
        : sportsMarks(marks) {}

    void showSports() const
    {
        cout << "Sports Marks: " << sportsMarks << endl;
    }
};

class Student : public Academic, public Sports
{
public:
    Student(int academic, int sports)
        : Academic(academic), Sports(sports) {}

    void showTotal() const
    {
        cout << "Total Marks: "
             << academicMarks + sportsMarks << endl;
    }
};

int main()
{
    Student student(85, 15);

    student.showAcademic();
    student.showSports();
    student.showTotal();

    return 0;
}