// CSCP1DB-2020.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Memo by Ashlin Darius Govindasamy

#include <iostream>
#include <vector>
#include "TimeOfDay.h"
#include <iostream>
#include <fstream>

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
 
};


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
    (p)->current = 54;    
    cout << (*p).current;
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

//QUESTION 5    
void Question5()
{
    try
    {
        ofstream MyFile("Time.txt");
        MyFile.close();
        
        

    }
    catch (const char* msg)
    {
        std::cout << msg;
    }

    TimeOfDay currentTime(50,45,12);
    std::vector<TimeOfDay> aTime;
    aTime.push_back(TimeOfDay(50,50,22));
    aTime.push_back(TimeOfDay(0,35,9));
    aTime.push_back(TimeOfDay(4,53,17));
    aTime.push_back(TimeOfDay(0,19,3));
    aTime.push_back(TimeOfDay(20,12,14));
    ofstream MyFile("Time.txt");
    for (auto const data : aTime) {   
        if (currentTime.LessThan(data.seconds,data.minutes,data.hours))
        {
            cout << "Wrote data " << data;
            MyFile << data;
           
        }
    }
    MyFile.close();
}
// MAIN PROGRAM
int main()
{

    // 1.1
    // 1.1 (a) x = 15 and y = 10 | x >= y-x
    int x = 15;
    int y = 10;
    std::cout << "1.1 (a) ";
    std::cout << (x >= (y - x)) << "\n";
    // 1.2 (a) x = 15 and y = 10 | x == (y + x -y)
    std::cout << "1.1 (b) ";
    std::cout << (x == (y + x - y)) << "\n";

    // 1.2 
        // 1.2 (a) a = 10, b = 12 , c = 8 and flag is false
    int a = 10;
    int b = 12;
    int c = 8;
    bool flag = false;
    std::cout << "1.2 (a) " << (c == (a * b) || !flag) << "\n";
    std::cout << "1.2 (b) " << (!(b <= 12) && (a % 2) <= 20) << "\n";

    // 1.3
        // X? if y =10.0
    x = 20.0;
    y = 10.0;
    if (y != (x - 10.0))
        x = x - 10.0;
    else
        x = x / 2.0;
    std::cout << "1.3        x=" << x << "\n";

    // 1.4 Statement Question
    /*
        int zeroCount = 0;
        int plusSum = 0;
        int minusSum = 0;

        if (x == 0)
        {
            zeroCount++;
        }
        else if (x < 0)
        {
            minusSum = minusSum + x;
        }
        else if (x > 0)
        {
            plusSum = plusSum + x;
        }
    */

    // 1.5 Explain the difference ...
    /*
       1.5 (a)
                left - Statement will run once because of the elseif control statement

                right - Statement will run twice one after another (there is two control if statements)
    */
    //  1.5 (b)(a)
    x = 1;
    if (x >= 0)
    {
        x = x + 1;
    }
    else if (x >= 1)
    {
        x = x + 2;
    }

    std::cout << "1.5 (b)(a) x=" << x << "\n";

    //  1.5 (b)(b)
    x = 1;
    if (x >= 0)
    {
        x = x + 1;
    }
    if (x >= 1)
    {
        x = x + 2;
    }

    std::cout << "1.5 (b)(b) x=" << x << "\n \n";

    //  1.6 
    std::cout << "1.6 Output" << "\n";
    int firstCout = 0;
    int secondCout = 0;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < i; j++)
        {
            firstCout++;
            std::cout << std::setw(4) << (i * j);
        }
        std::cout << std::endl;
        secondCout++;
    }
    std::cout << "1.6 (a) " << firstCout << "\n";
    std::cout << "1.6 (b) " << secondCout << "\n";

    //  1.7 if m is 5 and n = 3 (value of m++ * --n)
    int m = 5;
    int n = 3;

    std::cout << "1.7     " << (m++ * --n) << "\n";


    //  1.8 
   /* 1.8 (a)
       count = 0;
       n = 5;

       int i = 1;
       while (i <= n)
       {
           cin >> x;
           if (x % i == 0)
           {
               count++;
           }
       }

   */

   /* 1.8 (b)
       count = 0;
       n = 5;

       int i = 1;
       do
       {
           cin >> x;
           if (x % i == 0)
           {
               count++;
           }
       }while(i <= n);

   */
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
   
    cout << "========================= \n";
    std::cout << "Question 5\n"; cout << "========================= \n";
    Question5();
    cout << "\n";

}
