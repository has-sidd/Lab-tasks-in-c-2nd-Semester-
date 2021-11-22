#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class Door
{
private:
	double doorHeight, doorWidth;
public:
	Door()
	{};
	Door(double h, double w) : doorHeight(h), doorWidth(w)
	{};
	void setdoorHeight(double h)
	{
		doorHeight = h;
	}
	void setdoorWidth(double w)
	{
		doorWidth = w;
	}
	double getdoorHeight()
	{
		return doorHeight;
	}
	double getdoorWidth()
	{
		return doorWidth;
	}
};
class Window
{
private:
	double winHeight, winWidth;
public:
	Window()
	{};
	Window(double h, double w) : winHeight(h), winWidth(w)
	{};
	void setwindowHeight(double h)
	{
		winHeight = h;
	}
	void setwindowWidth(double w)
	{
		winWidth = w;
	}
	double getwindowHeight()
	{
		return winHeight;
	}
	double getwindowWidth()
	{
		return winWidth;
	}
};
class Engine
{
private:
	int cylinders, powerrating;
public:
	Engine()
	{};
	Engine(int c, int p) : cylinders(c), powerrating(p)
	{};
	void setCylinders(int c)
	{
		cylinders = c;
	}
	void setpowerrating(int p)
	{
		powerrating = p;
	}
	int getCylinder()
	{
		return cylinders;
	}
	int getPowerrating()
	{
		return powerrating;
	}
};
class Wheels
{
private:
	int tensileStrenght;
	double specificGravity;
public:
	Wheels()
	{};
	Wheels(int t, double s) : tensileStrenght(t), specificGravity(s)
	{};
	void setTensileStrenght(int t)
	{
		tensileStrenght = t;
	}
	void setSpecificGravity(double s)
	{
		specificGravity = s;
	}
	int getTensileStrenght()
	{
		return specificGravity;
	}
	double getSpecificGravity()
	{
		return specificGravity;
	}
};
class Car
{
private:
	Door door{ 5.6, 6.1 };
	Window window{ 1.2, 2.5 };
	Engine engine{ 4, 120 };
	Wheels wheel{ 5300, 1.18 };
public:
	Car()
	{};
	void DisplayDetails()
	{
		cout << "Doors: " << endl;
		cout << "\tHeight:\t\t\t" << door.getdoorHeight() << endl;
		cout << "\tWidth:\t\t\t" << door.getdoorWidth() << endl;
		cout << "\n";
		cout << "Windows:" << endl;
		cout << "\tHeight:\t\t\t" << window.getwindowHeight() << endl;
		cout << "\tWidth:\t\t\t" << window.getwindowWidth() << endl;
		cout << "\n";
		cout << "Engine:" << endl;
		cout << "\tCylinders:\t\t" << engine.getCylinder() << endl;
		cout << "\tPower Ratings:\t\t" << engine.getPowerrating() << endl;
		cout << "\n";
		cout << "Wheels:" << endl;
		cout << "\tTensile Strenght:\t" << wheel.getTensileStrenght() << endl;
		cout << "\tSpecific Gravity:\t" << wheel.getSpecificGravity() << endl;
	}
};
int main()
{
	Car Suzuki;
	cout << "Car Details:" << endl;
	cout << "\n";
	Suzuki.DisplayDetails();

	_getch();
	return 0;
}