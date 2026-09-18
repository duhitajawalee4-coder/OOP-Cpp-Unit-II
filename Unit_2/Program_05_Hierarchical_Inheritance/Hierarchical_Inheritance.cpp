#include <iostream>
#include <string>
#include <utility>
using namespace std;

class Vehicle
{
protected:
    string registrationNumber;

public:
    explicit Vehicle(string registration)
        : registrationNumber(std::move(registration)) {}

    void start() const
    {
        cout << "Vehicle " << registrationNumber << " started" << endl;
    }
};

class Car : public Vehicle
{
public:
    explicit Car(string registration)
        : Vehicle(std::move(registration)) {}

    void openBoot() const
    {
        cout << "Car boot opened" << endl;
    }
};

class Bike : public Vehicle
{
public:
    explicit Bike(string registration)
        : Vehicle(std::move(registration)) {}

    void helmetReminder() const
    {
        cout << "Please wear a helmet" << endl;
    }
};

int main()
{
    Car car("MH12DUHITA");
    Bike bike("MH12BIKE24");

    car.start();
    car.openBoot();

    bike.start();
    bike.helmetReminder();

    return 0;
}