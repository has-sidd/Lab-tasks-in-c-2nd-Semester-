#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class Circle
{
private:
	double radius;
	const double pi = 3.14;
public:
	Circle()
	{};
	Circle(double r) : radius(r)
	{};
	void setRadius(double r)
	{
		radius = r;
	}
	double getRadius()
	{
		return radius;
	}
	double calcArea()
	{
		return pi * pow(radius, 2);
	}
	double calcCircumference()
	{
		return 2 * pi * radius;
	}
	virtual string toString()
	{
		return to_string(radius);
	}
	bool equals(Circle c)
	{
		if (Circle::radius == c.radius)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};
class Cylinder : public Circle
{
private:
	double height;
	const double pi = 3.14;
public:
	Cylinder()
	{};
	Cylinder(double r, double h)
	{
		setRadius(r);
		height = h;
	};
	void setHeight(double h)
	{
		height = h;
	}
	double getHeight()
	{
		return height;
	}
	double calcArea()
	{
		return (2 * pi * getRadius() * height) + (2 * pi * pow(getRadius(), 2));
	}
	double calcVolume()
	{
		return pi * pow(getRadius(), 2) * height;
	}
	string toString()
	{
		return to_string(height);
	}
	bool equals(Cylinder c)
	{
		if (Cylinder::height == c.height && Cylinder::getRadius() == c.getRadius())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

int main()
{
	Circle circle1(5.5);
	Circle circle2(7.8);
	cout << "Area of Circle 1: " << circle1.calcArea() << endl;
	cout << "Circumference of Circle 1: " << circle1.calcCircumference() << endl;
	cout << "\n";
	cout << "Area of Circle 2: " << circle2.calcArea() << endl;
	cout << "Circumference of Circle 2: " << circle2.calcCircumference() << endl;
	cout << "\n";
	if (circle1.equals(circle2) == true)
	{
		cout << "Circle 1 is equal to Circle 2!" << endl;
	}
	else
	{
		cout << "Circle 1 is not equal to Circle 2!" << endl;
	}
	cout << "\n";
	Cylinder cylinder1(8, 11.5);
	Cylinder cylinder2(8, 11.5);
	cout << "Surface Area of Cylinder 1: " << cylinder1.calcArea() << endl;
	cout << "Volume of Cylinder 1: " << cylinder1.calcVolume() << endl;
	cout << "\n";
	cout << "Surface Area of Cylinder 2: " << cylinder2.calcArea() << endl;
	cout << "Volume of Cylinder 2: " << cylinder2.calcVolume() << endl;
	cout << "\n";
	if (cylinder1.equals(cylinder2) == true)
	{
		cout << "Cylinder 1 is equal to Cylinder 2!" << endl;
	}
	else
	{
		cout << "Cylinder 1 is not equal to Cylinder 2!" << endl;
	}

	_getch();
	return 0;
}