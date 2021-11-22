#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class Fan
{
private:
	const int SLOW = 1;
	const int MEDIUM = 2;
	const int FAST = 3;
	int speed;
	bool on;
	double radius;
	string color;
public:
	Fan()
	{
		speed = SLOW;
		on = false;
		radius = 5;
		color = "Blue";
	};
	void setspeed(int s)
	{
		speed = s;
	}
	void seton(bool o)
	{
		on = o;
	}
	void setradius(double r)
	{
		radius = r;
	}
	void setcolor(string c)
	{
		color = c;
	}
	int getspeed()
	{
		return speed;
	}
	bool geton()
	{
		return on;
	}
	double getradius()
	{
		return radius;
	}
	string getcolor()
	{
		return color;
	}
	string Showdata()
	{
		if (geton() == true)
		{
			if (getspeed() == 1)
			{
				return "The fan speed is Slow, the color of the fan is " + getcolor() + " and the radius is " + to_string(getradius());
			}
			else if (getspeed() == 2)
			{
				return "The fan speed is Medium, the color of the fan is " + getcolor() + " and the radius is " + to_string(getradius());
			}
			else if (getspeed() == 3)
			{
				return "The fan speed is High, the color of the fan is " + getcolor() + " and the radius is " + to_string(getradius());
			}
		}
		else
		{
			return "The fan is OFF, the color of the fan is " + getcolor() + " and the radius of the fan is " + to_string(getradius());
		}
	}
};

int main()
{
	Fan fan1;
	cout << fan1.Showdata();
	_getch();
	return 0;
};