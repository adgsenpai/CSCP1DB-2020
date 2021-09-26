// Tut4Q2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Ashlin Darius Govindasamy
// Student Number : 75416409

#include <iostream>
#include <string>
#include <stdlib.h>
class Movie
{
	private:
		std::string MPPARating;
		std::string MovieName;
		int NoOfPeople = 0;
		int Terrible = 0;
		int Bad = 0;
		int OK = 0;
		int Good = 0;
		int Great = 0;
public:
		void Create(std::string movname, std::string MPPARating);
		std::string getMovieName();
		std::string getMPPArating();
		void addRating(int Rating);
		void getAverage();

};

void Movie::Create(std::string movname, std::string mppaRating)
{
	MPPARating = mppaRating;
	MovieName = movname;
	NoOfPeople = 0;
}

std::string Movie::getMovieName()
{
	return MovieName;
}

std::string Movie::getMPPArating()
{
	return MPPARating;
}

void Movie::getAverage()
{
	std::cout.precision(2);
	std::cout << "==============================================\n";
	std::cout << "Average ratings for the movie \n";
	std::cout << "------------------------------------------------\n";
	std::cout << "Terrible Average: " << (double)Terrible/NoOfPeople << "\n";
	std::cout << "------------------------------------------------\n";
	std::cout << "Bad Average: " << (double)Bad / NoOfPeople << "\n";
	std::cout << "------------------------------------------------\n";
	std::cout << "OK Average: " << (double)OK / NoOfPeople << "\n";
	std::cout << "------------------------------------------------\n";
	std::cout << "Good Average: " << (double)Good / NoOfPeople << "\n";
	std::cout << "------------------------------------------------\n";
	std::cout << "Great Average: " << (double)Great / NoOfPeople << "\n";
	std::cout << "------------------------------------------------\n";
	std::cout << "Total amount of number of people voted : " << (int)NoOfPeople << "\n";
}
void Movie::addRating(int Rat)
{
	switch (Rat)
	{
	case 1: {
		++NoOfPeople;
		++Terrible;
		break;
	}
	case 2: {
		++NoOfPeople;
		++Bad;
		break;
	}
	case 3: {
		++NoOfPeople;
		++OK;
		break;
	}
	case 4: {
		++NoOfPeople;
		++Good;
		break;
	}
	case 5: {
		++NoOfPeople;
		++Great;
		break;
	}
	default: {
	}
	}
	
}

void GenerateMovie(std::string MovieName,std::string Rating)
{
	Movie obj1;
	obj1.Create(MovieName, Rating);
	for (int i = 1; i <= rand() % 100 + 25; i++)
	{
		obj1.addRating(rand() % 5 + 1);
	}
	std::cout << "Name of Movie : " << obj1.getMovieName() << "\n";
	std::cout << "Rating : " << obj1.getMPPArating() << "\n";
	obj1.getAverage();
	std::cout << "\n";
	std::cout << "---------------------------------------------\n";

}

int main()
{
	GenerateMovie("Django Unchained (2012)", "R");
	GenerateMovie("Wolf of Wall Street (2013)", "R");
	GenerateMovie("Spider-Man: Into the Spider-Verse (2018)", "G");
}