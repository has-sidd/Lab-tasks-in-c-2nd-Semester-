#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class Person
{
private:
	string name, gender;
	double age;
	
public:
	Person()
	{};
	Person(string n, string g, double a) : name(n), gender(g), age(a)
	{};
	void setname(string n)
	{
		name = n;
	}
	void setgender(string g)
	{
		gender = g;
	}
	void setage(int a)
	{
		age = a;
	}
	string getname()
	{
		return name;
	}
	string getgender()
	{
		return gender;
	}
	double getage()
	{
		return age;
	}
	virtual void showdata()
	{
		cout << "Person details:" << endl;
		cout << "Name\t\t: " << name << endl;
		cout << "Gender\t: " << gender << endl;
		cout << "Age\t\t   : " << age << endl;
	}
};
class Student : public Person
{
private:
	string department, year, rollNo;
public:
	Student()
	{};
	Student(string d, string y, string r) : department(d), year(y), rollNo(r)
	{};
	void setdepartment(string d)
	{
		department = d;
	}
	void setyear(string y)
	{
		year = y;
	}
	void setrollNo(string r)
	{
		rollNo = r;
	}
	string getyear()
	{
		return year;
	}
	string getdepartment()
	{
		return department;
	}
	string getrollNo()
	{
		return rollNo;
	}
	virtual void showdata()
	{
		cout << "Student Details:" << endl;
		cout << "Name      : " << getname() << endl;
		cout << "Gender    : " << getgender() << endl;
		cout << "Age       : " << getage() << endl;
		cout << "Roll No: " << rollNo << endl;
		cout << "Year      : " << year << endl;
		cout << "Department: " << department << endl;
	}
};
class GraduateStudent : public Student
{
private:
	int gradYear;
	double gpa;
public:
	GraduateStudent()
	{};
	GraduateStudent(int y, double g) : gradYear(y), gpa(g)
	{};
	int getgraduationyear()
	{
		return gradYear;
	}
	double getgpa()
	{
		return gpa;
	}
	void setgraduationyear(int y)
	{
		gradYear = y;
	}
	void setgpa(double gp)
	{
		gpa = gp;
	}
	virtual void showdata()
	{
		cout << "Graduate Student Details:" << endl;
		cout << "  Name           :  " << getname() << endl;
		cout << "  Gender         :  " << getgender() << endl;
		cout << "  Age            :  " << getage() << endl;
		cout << "  Roll No        :  " << getrollNo() << endl;
		cout << "  Department     :  " << getdepartment() << endl;
		cout << "  Graduation Year:  " << gradYear << endl;
		cout << "  CGPA           :  " << gpa << endl;
	}
};
int main()
{
	GraduateStudent studen1(2023, 3.99);
	studen1.setname("Hassaan Siddiqui");
	studen1.setgender("Male");
	studen1.setage(20);
	studen1.setrollNo("SE-084");
	studen1.setyear("First");
	studen1.setdepartment("Software Engineering");
	studen1.showdata();
	_getch();
}
