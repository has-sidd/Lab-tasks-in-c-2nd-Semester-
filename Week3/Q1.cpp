#include<conio.h>
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string co1, co2;
	double x1, y1, x2, y2, d;
	cout << "Enter 1 coordinates (X,Y) : ";
	cin >> co1;
	cout << "Enter 2 coordinates (X,Y) : ";
	cin >> co2;
	x1 = co1[1] - '0';
	y1 = co1[3] - '0';
	x2 = co2[1] - '0';
	y2 = co2[3] - '0';
	d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	cout << "length of the line segment connecting two points: " << d;

	_getch();
	return 0;
}