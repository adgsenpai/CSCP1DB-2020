// TutL4Q1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Ashlin Darius Govindasamy
// Student Number : 75416409

#include <iostream>
#include <stdio.h>
class Odometer
{
private:
    int kilometers;
    double fuelEfficiency;
public:
    void init();
    void Reset();
    void setFuelEfficiency(double fuelEff);
    void addKilometers(int kilo);
    double returnFuel();
    double getFuelEff();
    int getKilo();
};

void Odometer::init()
{
    kilometers = 0;
    fuelEfficiency = 0;
}

void Odometer::Reset()
{
    kilometers = 0;
}

void Odometer::setFuelEfficiency(double fuelEff)
{
    fuelEfficiency = fuelEff;
}

void Odometer::addKilometers(int kilo)
{
    kilometers = kilometers + kilo;
}

double Odometer::returnFuel()
{
    return (double)kilometers/fuelEfficiency;
}

double Odometer::getFuelEff()
{
    return fuelEfficiency;
}
int Odometer::getKilo()
{
    return kilometers;
}

int main()
{

    std::cout << "Trip 1: A vehicle with fuel efficiency of 45 kilometers per liter travelling 100 km. The same vehicle travelling a further 50 km. " << "\n" << "\n";
    Odometer obj;
    obj.init();
    obj.setFuelEfficiency(45.00);
    obj.addKilometers(100);
    std::cout.precision(2);
    std::cout << "For a car with a fuel efficiency of " << (double)obj.getFuelEff() << " km/l, the fuel consumed" << "\n" << "after " << obj.getKilo() << "km is " << (double)obj.returnFuel() << " liters" << "\n";
    std::cout << "\n";
    obj.Reset();
    obj.addKilometers(50);
    std::cout << "After another " << obj.getKilo() << " km, " << (double)obj.returnFuel() << " liter was used." << "\n \n";

    std::cout << "Trip 2: A vehicle with fuel efficiency of 13 kilometers per liter travelling 100 km. The same vehicle travelling a further 50 km. " << "\n" << "\n";
    obj.init();
    obj.setFuelEfficiency(13.00);
    obj.addKilometers(100);
    std::cout.precision(2);
    std::cout << "For a car with a fuel efficiency of " << (double)obj.getFuelEff() << " km/l, the fuel consumed" << "\n" << "after " << obj.getKilo() << "km is " << (double)obj.returnFuel() << " liters" << "\n";
    std::cout << "\n";
    obj.Reset();
    obj.addKilometers(50);
    std::cout << "After another " << obj.getKilo() << " km, " << (double)obj.returnFuel() << " liter was used." << "\n";
    system("pause");
}
