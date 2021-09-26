// TutL4Q6.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Ashlin Darius Govindasamy
// Student Number : 75416409

#include <iostream>
#include "figure.h"
#include "rectangle.h"
#include "triangle.h"

using namespace std;
int main()
{
	Triangle tri;
	tri.draw();
	cout << "\nDerived class Triangle object calling"
		<< " center().\n";
	tri.center();
	Rectangle rect;
	rect.draw();
	cout << "\nDerived class Rectangle object calling"
		<< " center().\n";
	rect.center();
	return 0;
}
