// CSCP1DB-2020.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Memo by Ashlin Darius Govindasamy

#include <iostream>
#include <vector>

using namespace std;

//QUESTION 2.1
void silly(int x)
{
    int y = x;
    x *= 2;
    cout << x << " , " << y << endl;
}

void question2_1()
{
    int x, y;
    x = 8;
    y = 5;
    silly(x);
    cout << x << " , " << y << endl;
    silly(y);
    cout << x << " , " << y << endl;
}
//QUESTION 2.2
void silly2(int& x)
{
    int y = x;
    x*= 2;
    cout << x << " , " << y << endl;
}
void question2_2()
{
    int x, y;
    x = 8;
    y = 5;
    silly(x);
    cout << x << " , " << y << endl;
    silly(y);
    cout << x << " , " << y << endl;
}

//QUESTION 3
// (a) variable name is supposed to be a string variable
void question3_1()
{
    string name;
    name = "James Khumalo";
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == 'm')
        {
            name[i] = '*';
        }
    }
    cout << name;
    cout << endl;
}

void question3_2()
{
    vector<int>myList(10);
    int i = 0;
    for (int i = 1; i < myList.size(); i++)
    {
        myList[i] = i;
    }
    vector<int> copy;
    copy = myList;
    myList[0] = 42;
    for (i = 0; i < copy.size(); i++)
    {
        cout << copy[i] << " ";
    }
    cout << endl;
}

// QUESTION 4
void question4_1()
{
    int* ptrl;
    int* dynamicarray = new int[9];
}

// 4.2
struct electric
{
    string current;
    int volts;
 
}; electric* p, * q;


//(a)
void setCurrent()
{
    electric *p,* q, value;
    p = &value;
    (*p).current = "ca";
    cout << (*p).current;
    cout << (*p).volts;


}
// (b)
void setVoltsPtoQ()
{
    electric *p, *q, value;
    p = &value;
    q = &value;
    (*p).volts = (*q).volts;
    cout << (*p).current;
    cout << (*p).volts;
    cout << (*q).current;
    cout << (*q).volts;
}
// (c)
void question4_c()
{
    electric* p, * q, value;
    p = &value;
    q = &value;
    (*p).volts = (*q).volts;
    cout << (*p).current;
    cout << (*p).volts;
    cout << (*q).current;
    cout << (*q).volts;
}
// (d)
void question4_d()
{
    electric* p, * q, value;
    p = &value;
    q = &value;
    // p = 54; cant do statement
    cout << (*p).current;
    cout << (*p).volts;
}
// (e)
void question4_e()
{
    electric* p, * q, value;
    p = &value;
    q = &value;
    p = q;
    cout << (*p).current;
    cout << (*p).volts;
    cout << (*q).current;
    cout << (*q).volts;
}
// MAIN PROGRAM
int main()
{
    //2.1
    cout << "========================= \n";
    std::cout << "Question 2.1\n"; cout << "========================= \n";
    question2_1();
    cout << "\n";
    //2.2
    cout << "========================= \n";
    std::cout << "Question 2.2\n"; cout << "========================= \n";
    question2_2();
    cout << "\n";
    cout << "========================= \n";
    std::cout << "Question 3.1\n"; cout << "========================= \n";
    question3_1();
    cout << "\n";

    cout << "========================= \n";
    std::cout << "Question 3.2\n"; cout << "========================= \n";
    question3_2();
    cout << "\n";
    
}
