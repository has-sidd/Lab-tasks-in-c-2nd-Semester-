#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class MealBill
{
private:

	double mealCost, tax, payment, tip, change, totalCost;
	string name;
public:
	MealBill()
	{};
	MealBill(string n, double t) : name(n), tax(t)
	{};
	MealBill(string n, double mealc, double t, double p) : name(n), mealCost(mealc), tax(t), payment(p)
	{};
	string getName()
	{
		return name;
	}
	double getmealCost()
	{
		return mealCost;
	}
	double gettax()
	{
		return tax;
	}
	double getpayment()
	{
		return payment;
	}
	void setmealCost(double mealc)
	{
		mealCost = mealc;
	}
	void settax(double t)
	{
		tax = t;
	}
	void setpayment(double p)
	{
		payment = p;
	}
	double Tip()
	{
		tip = 0.15 * mealCost;
		return tip;
	}
	double Change()
	{
		change = payment - totalCost;
		return change;
	}
	double TotalCost()
	{
		totalCost = mealCost + tax + tip;
		return totalCost;
	}
};

int main()
{
	double mealc, amount;

	MealBill Bill1("Burger Boss", 65.8);
	cout << Bill1.getName() << endl;
	cout << "\n";
	cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;
	cout << "\n";
	cout << "Enter Meal Cost: ";
	cin >> mealc;
	Bill1.setmealCost(mealc);
	cout << "\n";
	cout << "Bill:" << endl;
	cout << "\tMeal Cost:\t" << Bill1.getmealCost() << endl;
	cout << "\tTax:\t\t" << Bill1.gettax() << endl;
	cout << "\tTip:\t\t" << Bill1.Tip() << endl;
	cout << "\tTotal Cost:\t" << Bill1.TotalCost() << endl;
	cout << "____________________________________________________" << endl;
	cout << "\n";
	cout << "Amount paid by customer: ";
	cin >> amount;
	Bill1.setpayment(amount);
	cout << "\n";
	cout << "Receipt:" << endl;
	cout << "\tTotal Cost:\t" << Bill1.TotalCost() << endl;
	cout << "\tPayment:\t" << Bill1.getpayment() << endl;
	cout << "\tChange:\t\t" << Bill1.Change() << endl;
	cout << "\n";
	cout << "\tThankyou for dining at " << Bill1.getName();



	_getch();
	return 0;
}
