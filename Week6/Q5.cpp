#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class GradeRecord
{
private:
	string ID;
	double gradepts, GPA, credits;
public:
	GradeRecord()
	{};
	GradeRecord(string id, double c, double g) : ID(id), credits(c), gradepts(g)
	{};
	double getGradepoints()
	{
		return gradepts;
	}
	double getCredits()
	{
		return credits;
	}
	double calcGPA()
	{
		GPA = gradepts / credits;
		return GPA;
	}
	double InitialGPA()
	{
		GPA = 0.0;
		return GPA;
	}
	void Process()
	{
		string subject;
		char key, g;
		double c, gpts;
		cout << "Press Y to enter details:  ";
		cin >> key;
		cout << "\n";
		while (key == 'Y')
		{
			cout << "Subject: ";
			cin >> subject;
			cout << "Grade: ";
			cin >> g;
			cout << "Credit Hours: ";
			cin >> c;
			if (g == 'A')
			{
				gpts = 4 * c;
				gradepts += gpts;
				credits += c;
			}
			else if (g == 'B')
			{
				gpts = 3 * c;
				gradepts += gpts;
				credits += c;
			}
			else if (g == 'C')
			{
				gpts = 2 * c;
				gradepts += gpts;
				credits += c;
			}
			else if (g == 'D')
			{
				gpts = 1 * c;
				gradepts += gpts;
				credits += c;
			}
			else if (g == 'F')
			{
				gpts = 0 * c;
				gradepts += gpts;
				credits += c;
			}
			cout << "Press 'Y' to continue entering, any other key to stop: ";
			cin >> key;
			cout << "\n";
		}
	}
	void Display()
	{
		cout << "Student: " << ID << "\tUnits: " << credits << "\tGrade Points: " << gradepts << "\tGPA: " << GPA << endl;
	}

};

int main()
{
	GradeRecord record1("0190-BESE-84", 65, 150);
	cout << "Ali 's Initial GPA: " << record1.InitialGPA() << endl;
	cout << "\n";
	record1.Process();
	record1.calcGPA();
	cout << "DETAILS: " << endl;
	cout << "\n";
	cout << "Ali’s 1st semester grade points and units: " << record1.getGradepoints() << "   " << record1.getCredits() << endl;
	cout << "\n";
	record1.Display();

	_getch();
	return 0;
}