// TutL4Q4.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Ashlin Darius Govindasamy
// Student Number : 75416409

#include <iostream>
#include <stdlib.h>
class DArray
{
private:
    double* m_Data;
    int m_Size;  
    int m_Max;   
private:
    void Init(); 
    void Free();   
public:
    DArray();   
    DArray(int nSize, double dValue = 0); 
    DArray(const DArray& arr);
    DArray& operator=(const DArray& arr); 
    ~DArray();   
    void displayAllEntries(); 
    int countEntry(); 
    void addEntry(double dValue);

};

using namespace std;
void DArray::Init()
{
    m_Size = 0;   
    m_Max = 1;
    m_Data = new double[m_Max];
}

void DArray::Free()
{
    delete[] m_Data;
}


DArray::DArray()
{
    Init();
}

DArray::DArray(int nSize, double dValue)
{
    if (nSize == 0)
        Init();
    else
    {
        m_Size = nSize;
        m_Max = nSize;
        m_Data = new double[m_Max];
        for (int i = 0; i < nSize; ++i)
            m_Data[i] = dValue;
    }
}

DArray::DArray(const DArray& arr)
{
    m_Size = arr.m_Size;
    m_Max = arr.m_Max;
    m_Data = new double[m_Max];
    memcpy(m_Data, arr.m_Data, m_Size * sizeof(double));
}

DArray& DArray::operator=(const DArray& arr)
{
    if (this == &arr)
        return *this;
    m_Size = arr.m_Size;
    m_Max = arr.m_Max;
    double* m_Temp = new double[m_Max];
    memcpy(m_Temp, arr.m_Data, m_Size * sizeof(double));
    delete[] m_Data;
    m_Data = m_Temp;
    return *this;
}


DArray::~DArray()
{
    Free();
}


void DArray::displayAllEntries()
{
    if (m_Size == 0)
    {
        cout << "Error: The empty array can't be Printed." << endl;
        exit(0);
    }
    else
    {
        for (int i = 0; i < m_Size; ++i)
            cout << m_Data[i] << " ";
        cout << endl;
    }
}

int DArray::countEntry()
{
    return m_Size;
}

void DArray::addEntry(double dValue)
{
    if (m_Size < m_Max)
    {
        m_Data[m_Size] = dValue;
    }
    else
    {
        m_Max = m_Max * 2;
        double* temp = new double[m_Max];
        memcpy(temp, m_Data, m_Size * sizeof(double));
        delete[] m_Data;
        m_Data = temp;
        m_Data[m_Size] = dValue;
    }
    ++m_Size;
}

double fRand(double fMin, double fMax)
{
    double f = (double)rand() / RAND_MAX;
    return fMin + f * (fMax - fMin);
}

int main()
{
    cout << "===============================================" << "\n";
    cout << "Dynamic Arrays" << "\n \n \n";
    cout << "===============================================" << "\n";
    cout << "Printing values of array" << endl;
    cout << "===============================================" << "\n";
    DArray arr;
    for (int i = 1; i < rand() % 1000 + 20;i++)
    {
        arr.addEntry(fRand(1,1000));
    }
    arr.displayAllEntries();
    cout << "\n \n";
    cout << "===============================================" << "\n";
    cout << "Total Entries in array : " << arr.countEntry() << "\n";
    cout << "===============================================" << "\n";
}

 