#include<conio.h>
#include<iostream>
using namespace std;

struct Student
{
	char Fname[20];
	char Lname[20];
	double score;
};

void display(Student student1)
{
	cout << "First name is: " << student1.Fname << endl;
	cout << "Last name is: " << student1.Lname << endl;
	cout << "Score name is: " << student1.score << endl;
}

int main()
{
	Student student1 = { "Hassaan", "Siddiqui", 83 };
	display(student1);
	_getch();
	return 0;
}