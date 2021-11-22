#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

class Box
{
private:
	double length, width, height;
public:
	Box()
	{};
	Box(double w, double h, double l) :width(w), height(h), length(l)
	{};
	void showdata()
	{
		cout << "Height: " << height << endl;
		cout << "Width : " << width << endl;
		cout << "Length: " << length << endl;
	}
	double Volume()
	{
		return height * width * length;
	}
	Box operator + (const Box& b)
	{
		Box box1;
		box1.height = this->height + b.height;
		box1.width = this->width + b.width;
		box1.length = this->length + b.length;
		return box1;
	}
	Box operator - (const Box& b)
	{
		Box box1;
		box1.height = this->height - b.height;
		box1.width = this->width - b.width;
		box1.length = this->length - b.length;
		return box1;
	}
	Box operator * (const Box& b)
	{
		Box box1;
		box1.height = this->height * b.height;
		box1.width = this->width * b.width;
		box1.length = this->length * b.length;
		return box1;
	}
	Box operator / (const Box& b)
	{
		Box box1;
		box1.height = this->height / b.height;
		box1.width = this->width / b.width;
		box1.length = this->length / b.length;
		return box1;
	}

};
int main()
{
	Box box1(5, 5, 7);
	Box box2(1, 3, 2);
	Box box3;
	Box box4;
	Box box5;
	Box box6;
	box3 = box1 + box2;
	cout << "Dimensions of Box 3 are: " << endl;
	box3.showdata();
	box4 = box2 - box1;
	cout << "Dimensions of Box 4 are: " << endl;
	box4.showdata();
	box5 = box1 * box2;
	cout << "Dimensions of Box 5 are: " << endl;
	box5.showdata();
	box6 = box2 / box1;
	cout << "Dimensions of Box 6 are: " << endl;
	box6.showdata();
	_getch();
}

