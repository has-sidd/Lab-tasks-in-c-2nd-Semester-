#include<conio.h>
#include<iostream>
using namespace std;

int main()
{
	int amount, _1000, _500, _100, _50, _10, _5, _2, _1;
	cout << "Enter amount in rupees: ";
	cin >> amount;
	_1000 = (int)amount / 1000;
	_500 = (int)(amount % 1000) / 500;
	_100 = (int)((amount % 1000) % 500) / 100;
	_50 = (int)(((amount % 1000) % 500) % 100) / 50;
	_10 = (int)((((amount % 1000) % 500) % 100) % 50) / 10;
	_5 = (int)(((((amount % 1000) % 500) % 100) % 50) % 10) / 5;
	_2 = (int)((((((amount % 1000) % 500) % 100) % 50) % 10) % 5) / 2;
	_1 = (int)((((((amount % 1000) % 500) % 100) % 50) % 10) % 5) % 2;
	cout << "1000 s in the given amount is: " << _1000 << endl;
	cout << "500 s in the given amount is: " << _500 << endl;
	cout << "100 s in the given amount is: " << _100 << endl;
	cout << "50 s in the given amount is: " << _50 << endl;
	cout << "10 s in the given amount is: " << _10 << endl;
	cout << "5 s in the given amount is: " << _5 << endl;
	cout << "2 s in the given amount is: " << _2 << endl;
	cout << "1 s in the given amount is: " << _1 << endl;

	_getch();
	return 0;
}