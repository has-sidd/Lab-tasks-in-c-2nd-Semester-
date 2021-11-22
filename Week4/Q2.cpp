#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int arr1[5] = { 2, 5, 10, 8, 15 };
	int arr2[5] = { 4, 29, 17, 21, 1 };
	int sum[5];
	int * pointer1, *pointer2, *Spointer;
	pointer1 = arr1;
	pointer2 = arr2;
	Spointer = sum;
	for (int i = 0; i < 5; i++)
	{
		*(Spointer + i) = *(pointer1 + i) + *(pointer2 + i);
	}
	for (int i = 0; i < 5; i++)
	{
		cout << "arr1["<<i<<"] + "<<"arr2["<< i<<"] = "<<*Spointer++ << endl;
	}

	_getch();
	return 0;
}