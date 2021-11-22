#include<iostream>
#include<conio.h>
using namespace std;

struct Address
{
	char houseno[30];
	char city[30];
	char pincode[30];
};
struct Employee
{
	int empid;
	char name[30];
	double salary;
	struct Address add;
};
int main()
{
	Employee e;
	cout << "Enter employee ID: ";
	cin >> e.empid;
	cout << "Enter employee name: ";
	cin >> e.name;
	cout << "Enter employee salary: ";
	cin >> e.salary;
	cout << "Enter employee house no: ";
	cin >> e.add.houseno;
	cout << "Enter employee city: ";
	cin >> e.add.city;
	cout << "Enter employee pincode: ";
	cin >> e.add.pincode;
	if (e.salary < 50000)
	{
		e.salary += 10000;
	}
	cout << "Employee Details: " << endl;
	cout << "Employee ID: " << e.empid << endl;
	cout << "Employee Name: " << e.name << endl;
	cout << "Employee Salary: " << e.salary << endl;
	cout << "Employee House No: " << e.add.houseno << endl;
	cout << "Employee City: " << e.add.city;
	cout << "Employee Pin Code: " << e.add.pincode << endl;

	_getch();
	return 0;
}
