#include<conio.h>
#include<iostream>
using namespace std;

extern int main()
{
	//Q1:
	double num1, num2, avg;
	double sum = 0;
	cout << "Enter First Number: ";
	cin >> num1;
	cout << "Enter Second Number: ";
	cin >> num2;
	sum = num1 + num2;
	avg = sum / 2;
	cout << "Sum is: " << sum << endl;
	cout << "Average is: " << avg << endl;
	cout << endl;
	_getch();
	return 0;
}