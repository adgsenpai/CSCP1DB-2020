/*
Assignment
UNISA Q10

STUDENT NUMBER
75416409
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void OpenFile(char cLetter)
{
	int count = 0;
	string line;
	ifstream myFile("babynames.txt");
	if (myFile.is_open())
	{
		while (getline(myFile, line))
		{
			for (char& c : line)
			{
				if (c == char(toupper(cLetter)) || c == char(tolower(cLetter)))
				{
					count++;
				}
			}
		}
		myFile.close();
		cout << "Number of " << cLetter << " found is : " << to_string(count) << endl;

	}
	else
	{

	}

}

void getChar()
{
	char cLetter;
	cout << "Enter a character! " << endl;
	try
	{
		string test = "test";
		cin >> cLetter;
		OpenFile(cLetter);

	}
	catch (exception ex)
	{
		cout << "please enter a character only!" << endl;
		getChar();
	}

}

int main()
{
	getChar();
	cout << endl;
	cout << "Would you like to continue the program? to count the occurance of another character? (y/n)";
	char q;
	cin >> q;
	if (q == 'y')
	{
		system("cls");
		main();
	
	}
	else
	{

	}
}

