#include<conio.h>
#include<iostream>
using namespace std;

struct Distance
{
	int feets;
	float inches;
};

struct Room
{
	Distance lenght;
	Distance width;
};

int main()
{
	Room Classroom;
	Classroom.lenght.feets = 15;
	Classroom.lenght.inches = 6.5;
	Classroom.width.feets = 10;
	Classroom.width.inches = 0.2;
	float l = Classroom.lenght.feets = 15;
	float w = Classroom.width.feets = 10;
	float area;
	area = l * w;
	cout << "Area Of Classroom is : " << area;
	_getch();
	return 0;
}