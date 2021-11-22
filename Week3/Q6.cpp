#include<iostream>
#include<conio.h>
using namespace std;

int result;
int Sum(int *a, int *b)
{
	result = *a + *b;
	return result;
}
int Subt(int *a, int *b)
{
	result = *a - *b;
	return result;
}
int Mult(int *a, int *b)
{
	result = *a * *b;
	return result;
}
int Divide(int *a, int *b)
{
	result = *a / *b;
	return result;
}

int main()
{
	int x, y;
	char op;
	int * a, *b;

	cout << "Enter 1 number: ";
	cin >> x;
	cout << "Operation (+,-,*,/): ";
	cin >> op;
	cout << "Enter 2 number: ";
	cin >> y;
	a = &x;
	b = &y;
	if (op == '+')
	{
		cout << x << op<< y<< " = " << Sum(&x, &y) << endl;
	}
	else if (op == '-')
	{
		cout << x << op << y << " = " << Subt(&x, &y) << endl;
	}
	else if (op == '*')
	{
		cout << x << op << y << " = " << Mult(&x, &y) << endl;
	}
	else if (op == '/')
	{
		cout << x << op << y << " = " << Divide(&x, &y) << endl;
	}


	_getch();
	return 0;
}