#include<iostream>
#include<conio.h>
using namespace std;

class Links
{
private:
	const char *linkname;
public:
	Links()
	{
		cout << "Links default constructor called." << endl;
	};
	Links(const char* n) :linkname(n)
	{
		cout << "Links parameterized constructor called." << endl;
	};
	char getlinkname()
	{
		return *linkname;
	}
	void setlinkname(const char* n)
	{
		linkname = n;
	}
};

class Webpage
{
private:
	double width;
	double height;
	Links link1{ "www.gmail.com/u/1/#inbox" };
	Links link2;
public:
	Webpage()
	{
		cout << "Webpage default constructor called." << endl;
	};
	Webpage(double w, double h) :width(w), height(h)
	{
		cout << "Webpage parameterized constructor called." << endl;
	};
	double getheight()
	{
		return height;
	}
	double getwidth()
	{
		return width;
	}
	void setheight(double h)
	{
		height = h;
	}
	void setwidth(double w)
	{
		width = w;
	}
};

class Website
{
private:
	const char *name;
	Webpage webpage1{ 24.5, 37.2 };
	Webpage webpage2;
	Webpage webpage3{ 10, 18.7 };
	Webpage webpage4;
public:
	Website()
	{
		cout << "Website default constructor called." << endl;
	};
	Website(const char* n) :name(n)
	{
		cout << "Website parameterized constructor called." << endl;
	};
	char getname()
	{
		return *name;
	}
	void setname(const char* n)
	{
		name = n;
	}

};

int main()
{
	Website w1("www.google.com");

	_getch();
	return 0;
}