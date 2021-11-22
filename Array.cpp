#include<conio.h>
#include<iostream>
using namespace std;

int main()
{
	int std[10];
	cout << "\nEnter Marks :";

	for (int i = 0; i <= 10; i++)
	{
		cin >> std[i];
	}
	for (int i = 0; i <= 10; i++)
	{
		cout << std[i] << '\n';
	}
	_getch();
	return 0;
}