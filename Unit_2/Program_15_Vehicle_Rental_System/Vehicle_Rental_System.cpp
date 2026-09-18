#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
protected:
    string vehicleNumber;
    double rentalRate;

public:
    Vehicle(string number, double rate)
        : vehicleNumber(number), rentalRate(rate) {}

    virtual void displayDetails()
    {
        cout << "Vehicle Number: " << vehicleNumber << endl;
        cout << "Rental Rate: Rs. " << rentalRate << " per day" << endl;
    }

    virtual double calculateRent(int days)
    {
        return rentalRate * days;
    }

    virtual ~Vehicle() = default;
};

class Car : public Vehicle
{
public:
    Car(string number, double rate)
        : Vehicle(number, rate) {}

    void displayDetails() override
    {
        cout << "Vehicle Type: Car" << endl;
        cout << "Vehicle Number: " << vehicleNumber << endl;
        cout << "Rental Rate: Rs. " << rentalRate << " per day" << endl;
    }
};

class Bike : public Vehicle
{
public:
    Bike(string number, double rate)
        : Vehicle(number, rate) {}

    void displayDetails() override
    {
        cout << "Vehicle Type: Bike" << endl;
        cout << "Vehicle Number: " << vehicleNumber << endl;
        cout << "Rental Rate: Rs. " << rentalRate << " per day" << endl;
    }
};

int main()
{
    Car car("MH12AB1234", 1200);
    Bike bike("MH12CD5678", 500);

    int days = 3;

    Vehicle* vehicle;

    vehicle = &car;
    vehicle->displayDetails();
    cout << "Rental for " << days << " days: Rs. "
         << vehicle->calculateRent(days) << endl;

    cout << endl;

    vehicle = &bike;
    vehicle->displayDetails();
    cout << "Rental for " << days << " days: Rs. "
         << vehicle->calculateRent(days) << endl;

    return 0;
}