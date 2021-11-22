#include<conio.h>
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string num;
	char temp;
	cout << "Enter a 2 digit integer value: ";
	cin >> num;
	temp = num[0];
	num[0] = num[1];
	num[1] = temp;
	cout << "Reverse of this value is: " << num;
	
	_getch();
	return 0;
}