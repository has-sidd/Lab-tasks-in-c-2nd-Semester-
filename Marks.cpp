#include<conio.h>
#include<iostream>
using namespace std;

struct part
{
	int modelno;
	int partno;
	float cost;
};

int main()
{
	part part1;
	part1.modelno = 100;
	part1.partno = 10;
	part1.cost = 1500;

	cout << "Model no is :" << part1.modelno;
	cout << "Part no is :" << part1.partno;
	cout << "Cost is :" << part1.cost;
	_getch();
	return 0;
}