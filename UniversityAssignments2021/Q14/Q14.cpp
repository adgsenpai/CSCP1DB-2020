//UNISA STUDENT NUMBER : 75416409
//Q14 - ASHLIN DARIUS GOVINDASAMY

#include <iostream>
#include <string>
#include <fstream>
#include <array>
#include <vector>

using namespace std;

double fRand(double fMin, double fMax)
{
	double f = (double)rand() / RAND_MAX;
	return fMin + f * (fMax - fMin);
}

void main()
{
	double values[10][20];
	ofstream output("output.csv", std::ofstream::out);
	for (int x = 0; x < 10; x++)
	{
		string value = "";
		for (int y = 0; y < 20; y++)
		{
			values[x][y] = fRand(0.0, 9999.9);
			if (value == "")
			{
				value = to_string(values[x][y]);
			}
			else
			{
				value = value + "," + to_string(values[x][y]);
			}

		
		}

		if (output.is_open())
		{
			output << value << endl;
		}
	}
	output.close();

	cout << "output.csv created!" << endl;
	system("PAUSE");
}