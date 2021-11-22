#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int num;
	int *ptr;
	cout << "Enter the number: ";
	cin >> num;
	ptr = &num;
	cout << "Table of " << num << ":" << endl;
	cout << "\n" << endl;
	for (int i = 1; i <= 10; i++)
	{
		cout << num << "*" << i << " = " << *ptr * i << endl;
	}

	_getch();
	return 0;
}