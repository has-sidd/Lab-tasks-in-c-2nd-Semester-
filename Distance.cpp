#include<conio.h>
#include<iostream>
using namespace std;

struct Distance
{
	int feets;
	float inches;
};

int main()
{
	Distance d1, d3;
	Distance d2 = { 12, 6.25 };
	cout << "\nEnter feets :"; cin >> d1.feets;
	cout << "\nEnter inches :"; cin >> d1.inches;
	d3.feets = d1.feets + d2.feets;
	d3.inches = d1.inches + d2.inches;
	cout << "value of d1 are: " << d1.feets << " feets and " << d1.inches << " inches\n";
	cout << "value of d3 are: " << d3.feets << " feets and " << d3.inches << " inches";
	_getch();
	return 0;
}