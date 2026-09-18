#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;
};

class Rectangle : public Shape
{
private:
    int length;
    int width;

public:
    Rectangle(int l, int w)
        : length(l), width(w) {}

    void area() override
    {
        cout << "Area of Rectangle: "
             << length * width << endl;
    }
};

int main()
{
    Rectangle rectangle(10, 5);

    rectangle.area();

    return 0;
}