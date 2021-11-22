#include<conio.h>
#include<iostream>
using namespace std;

int main()
{
	cout << "Frist 50 even numbers are : \n";
	for (int i = 0; i <= 50; i++)
	{
		if (i%2==0)
			cout << i << endl;
	}
	_getch();
	return 0;
}
