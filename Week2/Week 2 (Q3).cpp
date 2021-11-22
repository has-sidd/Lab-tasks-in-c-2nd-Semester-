#include<conio.h>
#include<iostream>
using namespace std;

int main()
{
	int sec;
	double hours, min, second;
	cout << "Enter time in seconds: ";
	cin >> sec;
	hours = (int)sec / 3600;
	min = (int)(sec % 3600) / 60;
	second = (sec % 3600) % 60;
	cout << "hours in time is: " << hours << endl;
	cout << "Minutes in time is: " << min << endl;
	cout << "Seconds in time is: " << second << endl;

	_getch();
	return 0;
}