// TutL4Q5.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Ashlin Darius Govindasamy
// Student Number : 75416409


#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
    Person();
    Person(string the_name);
    Person(const Person& the_object);
    string get_name() const;
    Person& operator =(const Person& rt_side);
    friend istream& operator >>(istream& in_stream, Person& person_object);
    friend ostream& operator << (ostream& out_stream, const Person& person_object);
private:
    string name;
};

class Vehicle : public Person{
private:
    string manufacturername;
    int cylinders;
public:
    void Create(string manuname,int nocylinders)
    {
        manufacturername = manuname;
        cylinders = nocylinders;
    }

    void setManufacturerName(string name)
    {
        manufacturername = name;
    }

    void setCylinders(int noofcylinders)
    {
        cylinders = noofcylinders;
    }

    string getManufacturerName()
    {
        return manufacturername;
    }
    int getCylinders()
    {
        return cylinders;
    }
};

class Truck : public Vehicle {
private:
    double loadintons;
    int towingcapacity;

public:
    void Create(double load, int towingcap)
    {
        loadintons = load;
        towingcapacity = towingcap;
    }
    void setLoadInTons(double load)
    {
        loadintons = load;
    }
    void setTowingCapacity(int towingcap)
    {
        towingcapacity = towingcap;
    }
    double getLoadInTons()
    {
        return loadintons;
    }
    int getTowingCapacity()
    {
        return towingcapacity;
    }
};

int main()
{
    
}
