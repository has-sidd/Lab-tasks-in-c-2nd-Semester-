#include<iostream>
#include<conio.h>
using namespace std;

class Rectangle
{
protected:
	double width, length;
public:
	Rectangle()
	{};
	Rectangle(double w, double l) : width(w), length(l)
	{};
	double getwidth()
	{
		return width;
	}
	double getlength()
	{
		return length;
	}
	void setwidth(double w)
	{
		width = w;
	}
	void setlength(double l)
	{
		length = l;
	}
	double area()
	{
		return length * width;
	}

	virtual void DisplayData()
	{
		cout << "Width: " << width << endl;
		cout << "Length: " << length << endl;
	}
};

class DormRoom : public Rectangle
{
private:
	double height, v;
public:
	DormRoom()
	{};
	DormRoom(double h) : height(h)
	{};
	double getHeight()
	{
		return height;
	}
	void setHeight(double h)
	{
		height = h;
	}
	double Volume()
	{
		v = length * width * height;
		return v;
	}
	virtual void DisplayData()
	{
		Rectangle::DisplayData();
		cout << "Height: " << height << endl;
	}
};