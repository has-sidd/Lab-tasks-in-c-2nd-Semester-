#include<conio.h>
#include<iostream>
using namespace std;

int main()
{
	double c, f, c, f;
	const double c1 = 9 / 5;
	const double c2 = 5 / 9;
	cout << "Enter temperature in Celcius: ";
	cin >> c;
	f = (c * c1) + 32;
	cout << "Temperature in Fahrenheit: " << f << " F" << endl;
	cout << "Enter temperature in Fahrenheit: ";
	cin >> f;
	c = (f - 32) * c2;
	cout << "Temperature in Celcius: " << c << " C";
	_getch();
	return 0;
}