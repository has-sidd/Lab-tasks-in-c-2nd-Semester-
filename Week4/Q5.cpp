#include<iostream>
#include<conio.h>
using namespace std;

double Add(double *x, double *y)
{
	return *x + *y;
}
double Subt(double *x, double *y)
{
	return *x - *y;
}
double Mult(double *x, double *y)
{
	return *x * *y;
}
double Divide(double *x, double *y)
{
	return *x / *y;
}

int main()
{
	double num1, num2;
	char op;
	double *p1, *p2;
	cout << "Enter 1 number: ";
	cin >> num1;
	cout << "Enter operation(+,-,*,/): ";
	cin >> op;
	cout << "Enter 2 number: ";
	cin >> num2;
	p1 = &num1;
	p2 = &num2;
	cout << "Result" << endl;
	if (op == '+')
	{
		cout << num1 << op << num2 << " = " << Add(p1, p2);
	}
	else if (op == '-')
	{
		cout << num1 << op << num2 << " = " << Subt(p1, p2);
	}
	else if (op == '*')
	{
		cout << num1 << op << num2 << " = " << Mult(p1, p2);
	}
	else if (op == '/')
	{
		cout << num1 << op << num2 << " = " << Divide(p1, p2);
	}

	_getch();
	return 0;
}