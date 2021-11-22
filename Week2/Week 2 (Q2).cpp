#include<conio.h>
#include<iostream>
using namespace std;

extern int main()
{
	//Q2
	double height, feet;
	const int foot2Inch = 12;
	cout << "Enter height in inches: ";
	cin >> height;
	feet = height / foot2Inch;
	cout << "This is equivalent to: " << feet << " feets";

	_getch();
	return 0;
}