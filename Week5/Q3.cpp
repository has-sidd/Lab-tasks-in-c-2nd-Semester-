#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main()
{
	double bagPrice = 5.50;
	double largecost = 1.80;
	double mediumcost = 1.00;
	double smallcost = 0.60;
	int boxes, large, medium, small;

	cout << "Enter number of bags: ";
	cin >> boxes;

	large = boxes / 20;
	medium = (boxes % 20) / 10;
	small = ((boxes % 20) % 10) / 5;
	if (boxes % 20 % 10 % 5 != 0)
	{
		small += 1;
	}

	cout << "Number of Bags Ordered : " << boxes << endl;
	cout << "The Cost of Order      : $ " << bagPrice * boxes << endl;
	cout << "\n";
	cout << "Boxes Used: " << endl;
	cout << large << "  Large  : $" << large * largecost << endl;
	cout << medium << "  Medium : $" << medium * mediumcost << endl;
	cout << small << "  Small  : $" << small * smallcost << endl << endl;
	cout << "Your total cost is:  $ " << (bagPrice * boxes) + (large * largecost) + (medium * mediumcost) + (small * smallcost);
	
	_getch();
	return 0;
}
