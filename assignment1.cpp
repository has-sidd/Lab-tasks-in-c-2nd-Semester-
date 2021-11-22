#include <iostream>
#include <conio.h>
using namespace std;

class website
{
	char *name;

public:
	website()
	{
		name = "NULL";
	};
	website(char n[]) : name(n)
	{ };
	void disp()
	{
		cout << " Website name is : " << name << endl;
	}
};

class webpage : public website
{
	double width;
	double height;

public:
	webpage()
	{
		width = 0.0;
		height = 0.0;
	};
	webpage(double w) : width(w)
	{ };
	webpage(double w, double h) : width(w), height(h)
	{ };
	void disp()
	{
		cout << " Webpage width is : " << width << endl;
		cout << " Webpage height is : " << height << endl;
	}
};

class links : public website
{
	char *name;

public:
	links()
	{
		name = "NULL";
	};
	links(char n[]) : name(n)
	{ };
	void disp()
	{
		cout << " Link name is : " << name << endl;
	}
};

int main()
{
	webpage web1;
	links link1;
	cout << " Webpage1 default constructor called :" << endl;
	web1.disp();
	cout << endl;
	cout << " Link1 default constructor called :" << endl;
	link1.disp();
	cout << endl;
	webpage web2;
	links link2;
	cout << " Webpage2 default constructor called :" << endl;
	web2.disp();
	cout << endl;
	cout << " Link2 default constructor called :" << endl;
	link2.disp();
	cout << endl;
	webpage web3;
	links link3;
	cout << " Webpage3 default constructor called :" << endl;
	web3.disp();
	cout << endl;
	cout << " Link3 default constructor called :" << endl;
	link3.disp();
	cout << endl;
	webpage web4(2.2, 4.8);
	links link4("www.xyz.org");
	cout << " Webpage4 parameterized constructor called :" << endl;
	web4.disp();
	cout << endl;
	cout << " Link3 parameterized constructor called :" << endl;
	link4.disp();

	_getch();
	return 0;
}