#include<iostream>
#include<conio.h>
using namespace std;

void Fact(int num, int *f)
{
	*f = 1;
	for (int i= 1; i <= num; i++)
	{
		*f = *f * i;
	}
}

int main()
{
	int num, f;
	cout << "Enter Number: ";
	cin >> num;
	Fact(num, &f);
	cout << "Factorial is: " << f;

	_getch();
	return 0;
}