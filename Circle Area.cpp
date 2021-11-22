#include<conio.h>
#include<iostream>
using namespace std;

double calarea(double r)
{
	const int pi = 3.14;
	return pi * r * r;
}


int main()
{
	double r1, area;
	cout << "Enter radius of circle : ";
	cin >> r1;
	area = calarea(r1);
	cout << "Area of circle is : " << area;
	_getch();
	return 0;
}