#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	double r, area;
	const double PI = 3.14;
	const double *ptr;
	cout << "Enter radius: ";
	cin >> r;
	ptr = &r;
	area = PI * (*ptr) * (*ptr);
	cout << "Area: " << area;
	_getch();
	return 0;
}