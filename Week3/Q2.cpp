#include<conio.h>
#include<iostream>
using namespace std;

int main()
{
	int M1[3][3] = { {1,2,3}, {3,0,1}, {2,1,4} };
	int	M2[3][3] = { {5,-10,6}, {8,7,-1}, {0,3,2} };
	int	sum[3][3], mult[3][3];

	for (int i = 0; i<=2; i++) {
		for (int j = 0; j<=2; j++) {
			sum[i][j] = M1[i][j] + M2[i][j];
		}
	}
	cout << endl << "SUM of matrices: " << endl;
	for (int i = 0; i <= 2; ++i)
		for (int j = 0; j <= 2; ++j)
		{
			cout << " " << sum[i][j];
			if (j == 3 - 1)
				cout << endl;
		}

	for (int i = 0; i <= 2; ++i)
	{
		for (int j = 0; j <= 2; ++j)
		{
			mult[i][j] = 0;
			for (int k = 0; k <= 2; ++k)
			{
				mult[i][j] += M1[i][k] * M2[k][j];
			}
		}
	}
	cout << endl << "MULTIPLICATION of matrices: " << endl;
	for (int i = 0; i <= 2; ++i)
		for (int j = 0; j <= 2; ++j)
		{
			cout << " " << mult[i][j];
			if (j == 3 - 1)
				cout << endl;
		}
	_getch();
	return 0;
}