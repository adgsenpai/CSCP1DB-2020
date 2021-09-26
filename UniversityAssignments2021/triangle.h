#pragma once
#include "figure.h"
#include <chrono>
#include <thread>
using namespace std;
class Triangle : public Figure{
public:
	void draw()
	{
        int height = getHeight();
        for (int i = 1; i <= height; i++)
        {
           
            for (int j = 1; j <= (height - i); j++)
            {
                cout << " ";
            }

        
            for (int k = 1; k <= i * 2 - 1; k++)
            {
            
                if (k == 1 || k == i * 2 - 1)
                {
                    cout << "*";
                }
                else if (i == height)
                {
                  
                    cout << "*";
                }
                else
                {
                  
                    cout << " ";
                }

            }
           
            cout << endl;
        }
	}
	void center()
	{
		erase();
		draw();
        std::this_thread::sleep_for(std::chrono::milliseconds(3000));
	}
	void erase()
	{
        system("cls");
	}
};