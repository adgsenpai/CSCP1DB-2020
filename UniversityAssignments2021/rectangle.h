#pragma once
#include "figure.h";
#include <chrono>
#include <thread>

class Rectangle : public Figure
{
public:
	void draw()
	{
		int height = getHeight();
		for (int i = 1; i <= height;i++)
		{
			std::cout << "*********************\n";
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