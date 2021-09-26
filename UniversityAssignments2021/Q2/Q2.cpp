/*
UNISA Q2
75416409
Ashlin Darius Govindasamy
*/

#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;

void countOccurances(string sentence)
{
	for (char ch = 'a'; ch <= 'z'; ch++)
	{

		std::size_t n = std::count(sentence.begin(), sentence.end(), ch);
		if (n > 0)
			std::cout << ch << " - " << n << "," << std::endl;
	}
	for (char ch = 'A'; ch <= 'Z'; ch++)
	{
		std::size_t n = std::count(sentence.begin(), sentence.end(), ch);
		if (n > 0)
			std::cout << ch << " - " << n << "," << std::endl;
	}
}

void main()
{
	char str[80];
	string sentence = "";
	cout << "Enter a sentence: ";
	cin.getline(str,80);
	sentence = string(str);
	int words = 0; 
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ') 
        {
			words++;
		}
	}

    cout << words + 1 << " words" << endl;
	countOccurances(sentence);
}