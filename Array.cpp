#include<conio.h>
#include<iostream>
using namespace std;

int main()
{
	int std[4];
	for (int i = 0; i <= 4; i++)
	{
		cout << "\nEnter Marks :";
		cin >> std[i];	
	}
	cout << "\nStudents Marks are:";
	for (int i = 0; i <= 4; i++)
	{
		cout << std[i];
	}
	_getch();
	return 0;
}