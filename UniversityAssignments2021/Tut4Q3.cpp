// Tut4Q3.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Ashlin Darius Govindasamy
// Student Number : 75416409
#include <iostream>
class OperatorDemo
{
private:
    int numvalue;

public:
    void Create(int num)
    {
        numvalue = num;
    }
    int getAns(void)
    {
        return numvalue;
    }
    OperatorDemo operator+(const OperatorDemo& od) {
        OperatorDemo operatordemo;
        operatordemo.numvalue = this->numvalue + od.numvalue;
        return operatordemo;
    }
    OperatorDemo operator-(const OperatorDemo& od) {
        OperatorDemo operatordemo;
        operatordemo.numvalue = this->numvalue - od.numvalue;
        return operatordemo;
    }
    OperatorDemo operator*(const OperatorDemo& od) {
        OperatorDemo operatordemo;
        operatordemo.numvalue = this->numvalue * od.numvalue;
        return operatordemo;
    }
};

int main()
{
    std::cout << "Operator Demo" << std::endl;
    std::cout << "\n";
    OperatorDemo num1;
    OperatorDemo num2;
    OperatorDemo result;
    std::cout << "enter number 1" << std::endl;
    int no1, no2;
    std::cin >> no1;
    std::cout << std::endl;
    std::cout << "enter number 2" << std::endl;
    std::cin >> no2;
    std::cout << std::endl;
    num1.Create(no1); 
    num2.Create(no2);
    result = num1 + num2;
    std::cout << no1 << " + " << no2 << " =" << "\n";
    std::cout << result.getAns() << "\n \n";
    result = num1 - num2;
    std::cout << no1 << " - " << no2 << " =" << "\n";
    std::cout << result.getAns() << "\n \n";
    result = num1 * num2;
    std::cout << no1 << " * " << no2 << " =" << "\n";
    std::cout << result.getAns() << "\n \n";
    system("pause");
}
