#include<conio.h>
#include<iostream>
using namespace std;

int main()
{
	char dir = 'n';
	int x = 10, y = 10;
	cout << "Press Enter key to Quit" << endl;
	while (dir != '\r')
	{
		cout << "current value of x: " << x << "and y : " << y << endl;
		cout << "Press Direction Keys(n,s,e,w)" << endl;
		dir = _getch();
		switch (dir)
		{
		case 'n': y++; break;
		case 's': y--; break;
		case 'e': x++; break;
		case 'w': x--; break;
		}
		if (x == 7 && y == 8)
			cout << "Treasure Found";
	}
	_getch();
	return 0;
}