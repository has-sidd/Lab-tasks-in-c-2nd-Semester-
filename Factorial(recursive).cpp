#include<conio.h>
#include<iostream>
using namespace std;

int Fact(int n)
{
	if (n <= 0)
	{
		return 1;

	}
	else
		return n*Fact(n - 1);
}

int main()
{
	int num;
	cout << "Enter number to find factorial : " << endl;
	cin >> num;
	cout << "Answer is : " << Fact(num);
	_getch();
	return 0;
}