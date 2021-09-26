/*
Assignment
UNISA Q9

STUDENT NUMBER
75416409
*/

#include <iostream>
#include <string>
#include <array>
#include <algorithm>
#include <vector>
using namespace std;

void swap(double* xp, double* yp)
{
    double temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void swapIfSmaller(double arr[], int size)
{
    bool fin = true;
    while (fin)
    {
        fin = false;
        for (int i = 0; i < size - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(&arr[i], &arr[i + 1]);
                fin = true;
            }
        }
    }
}

bool isSorted(double arr[],int size)
{
    return is_sorted(arr, arr + size);
}

void main()
{
    double arr[5];
    int count = 0;
    try
    {
        do
        {
            if (count < 2)
            {
                cout << "Enter a double value \n";
                double value;
                cin >> value;
                arr[count] = value*1.0;
                count++;

            }
            else
            {
                cout << "Enter an integer value \n";
                double value;
                cin >> value;
                arr[count] = value*1.0;
                count++;
            }
        } while (count < 4);
    }
    catch (exception ex)
    {
        cout << "Incorrect Value, restart program";
        system("PAUSE");
        system("CLS");
    }

    cout << endl;
    cout << "Printing sorted array" << endl;
    if (!isSorted(arr, 4))
    {
    swapIfSmaller(arr, 4);
    }
   
    for (int x = 0; x < 4; x++)
    {        
        cout << arr[x] << endl;
    }
    
    system("PAUSE");
 }
