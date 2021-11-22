#include<conio.h>
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string num;
	char chTen, chUnit;
	int m, valueTen, valueUnit;

	cout << "Enter a two digit number: ";
	cin >> num;
	chTen = num[0];
	chUnit = num[1];
	valueTen = chTen - '0';
	valueUnit = chUnit - '0';
	m = valueTen * 10 + valueUnit;
	cout << "Numeric Value is: " << m;

	_getch();
	return 0;
}