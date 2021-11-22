#include<conio.h>
#include<iostream>
#include<string>
using namespace std;

class Employee
{
	int Empno;
	string name;
	string address;
	int salary;
	string experience;
public:
	void setempno(int no)
	{
		Empno = no;;
	}
	void setname(string n)
	{
		name = n;
	}
	void setaddress(string add)
	{
		address = add;;
	}
	void setsalary(int s)
	{
		salary = s;
	}
	void setexperience(string exp)
	{
		experience = exp;
	}
	int getempno()
	{
		return Empno;
	}
	string getname()
	{
		return name;
	}
	string getaddress()
	{
		return address;
	}
	int getsalary()
	{
		return salary;
	}
	string getexperience()
	{
		return experience;
	}
	void disp()
	{
		cout << "hassaan Siddqui, se-084" << endl;
		cout << " empl num IS:" << getempno() << endl;
		cout << " empl name IS:" << getname() << endl;
		cout << " empl address IS:" << getaddress() << endl;
		cout << " empl salary IS:" << getsalary() << endl;
		cout << " empl experience IS:" << getexperience() << endl;
	}
};



int main()
{
	Employee e1;
	e1.disp();
	_getch();
	return 0;
}