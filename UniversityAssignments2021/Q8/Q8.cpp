/*
Assignment 
UNISA Q8

STUDENT NUMBER 
75416409
*/

#include <iostream>
#include <fstream>
#include <chrono>
#include <thread>
#include <stdlib.h>
#include <sstream>
#include <iomanip>
using namespace std;

string getFilePath()
{
	string filename;
	cout << "Enter the file directory for the .txt file \n";
	cin >> filename;
	return filename;
}

inline bool FileExists(const std::string& filename)
{
	ifstream file(filename);
	if (!file)
		return false;
	else          
		return true;  
}

void ReadFile(string filename)
{
	ofstream o("output.txt", std::ofstream::out);
	if (o.is_open())
	{

	int lineno = 0;
	ifstream file(filename);
	system("CLS");
	while (!file.eof())
	{
		string line = "";
		getline(file, line);
		lineno++;
		ofstream outfile;
		if (line != "")
		{
			cout << setw(4) << right << to_string(lineno) + ": ";
			cout << line.substr(0, 72) << "\n";
			o << setw(4) << right << to_string(lineno) + ": " << line.substr(0,72) << endl;
			line.erase(0, 72);
		}
		do
		{
			if (line == "")
			{

			}
			else
			{
				if (line.length() > 72)
				{
					cout << setw(4) << right << "";
					cout << line.substr(0, 72) << "\n";
					o << setw(4) << right << "" << line.substr(0, 72) << endl;
					line.erase(0, 72);
				}
			}
		} while (line.length() > 72);

		if (line.length() > 0)
		{

			cout << setw(4) << right << "";
			cout << line.substr(0, line.length()) << "\n";
			o << setw(4) << right << ""  << line.substr(0,line.length()) << endl;

		}

	}
	o.close();
    }
	else
	{
		cout << "Error with openning file";
	}
}
int main()
{
	string filename = getFilePath();
	if (FileExists(filename))
	{
		cout << "\n";
		ReadFile(filename);
		system("PAUSE");
	}
	else
	{
		cout << "File does not exist! retry ...";		
		std::this_thread::sleep_for(std::chrono::milliseconds(3000));
		system("CLS");
		main();

	}
	return 0;
 }
