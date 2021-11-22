#include<conio.h>
#include<iostream>
using namespace std;

int main()
{
	int num;
	int fact = 1;
	cout << "Enter number to find factorial : " << endl;
	cin >> num;
	if (num == 0)
		fact = 1;
	else
		for (int i = 1; i < num; i++)
		{
			fact += fact * i;
		}
	cout << "Answer is : " << fact;
	_getch();
	return 0;
}