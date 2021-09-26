#pragma once
#include <ostream>
#include <iostream>
#include <iomanip>
using namespace std;
class TimeOfDay
{
public:
	int seconds;
	int minutes;
	int hours;

	TimeOfDay()
	{
		seconds = 0;
		minutes = 0;
		hours = 0;
	}

	TimeOfDay(int sec, int min, int hr)
	{
		seconds = sec;
		minutes = min;
		hours = hr;
	}

	void Increment()
	{
		seconds = seconds + 1;
	}
	
	int ReturnSeconds(int sec, int min, int hr)
	{
		int seconds = sec;
		seconds = seconds + (min * 60);
		seconds = seconds + (hr * 3600);
		return seconds;
	}

	bool LessThan(int sec,int min, int hr)
	{
		int CurrentSeconds = ReturnSeconds(seconds,minutes, hours);
		int SecondsComparing = ReturnSeconds(sec, min, hr);

		if (SecondsComparing < CurrentSeconds)
		{
			return true;
		}
		else
		{
			return false;
		}

	}

	friend ostream& operator << (ostream& outs, const TimeOfDay& the_time);
	friend istream& operator >> (istream& ins,  TimeOfDay& the_time);

private:

};

ostream& operator << (ostream& outs, const TimeOfDay& the_time)
{
	outs << setfill('0') << setw(2);
	outs << the_time.hours << ":";

	outs << setfill('0') << setw(2);
	outs << the_time.minutes << ":";

	outs << setfill('0') << setw(2);
	outs << the_time.seconds << endl;
	return outs;
}

istream& operator >> (istream& ins, TimeOfDay& the_time)
{
	cout << "Enter Hours";
	ins >> the_time.hours;
	cout << "Enter Minutes";
	ins >> the_time.minutes;
	cout << "Enter Seconds";
	ins >> the_time.seconds;
	return ins;
}


