/*
	UNISA Q1
	75416409
	Ashlin Darius Govindasamy

*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;


#include <iostream>
#include <string>
#include <cmath>

std::string PaperPencilAlgorithm(std::string num1, std::string num2)
{
	std::reverse(num1.begin(), num1.end());
	std::reverse(num2.begin(), num2.end());
	if (num1.size() < num2.size())
		num1.resize(num2.size(), '0');
	else if (num2.size() < num1.size())
		num2.resize(num1.size(), '0');
	std::string result;

	int carry = 0;
	for (size_t i = 0; i < num1.size(); ++i)
	{
		int subtotal = (num1[i] - '0') + (num2[i] - '0') + carry;
		int subanswer = subtotal % 10;
		carry = subtotal / 10;
		result += (subanswer + '0');
	}
	if (carry == 1)
		result += '1';
	std::reverse(result.begin(), result.end());
	return result;
}

void Display()
{
	cout << "Paper and Pencil Algorithm Addition" << endl;
	string num1, num2;
	cout << "Enter num 1: " << endl;
	cin >> num1;
	cout << "Enter num 2: " << endl;
	cin >> num2;
	cout << "Addition is : " + PaperPencilAlgorithm(num1, num2) << endl;
	system("pause");
	system("CLS");

	cout << "Want to add 2 more numbers? (Y/n)" << endl;
	char c;
	cin >> c;

	if (c == 'Y')
	{
		system("CLS");
		Display();
	}
}

int main()
{
	Display();
	return 0;
}



