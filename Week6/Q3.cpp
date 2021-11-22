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
	double Calctax()
	{
		tax = tax * mealCost;
		return tax;
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
		totalCost = mealCost + tax + Tip();
		return totalCost;
	}
};

class Student
{
private:
	string ID, name;
	double acc_balance, amountPaid;
public:
	Student()
	{};
	Student(string id, string n, double acc) : ID(id), name(n), acc_balance(acc)
	{};
	string getID()
	{
		return ID;
	}
	string getname()
	{
		return name;
	}
	void setamountPaid(double a)
	{
		amountPaid = a;
	}
	double getbalance()
	{
		return acc_balance;
	}
	double CalcBalance()
	{
		acc_balance -= amountPaid;
		return acc_balance;
	}
	void showAccountdetails()
	{
		cout << "\tID:\t\t" << ID << endl;
		cout << "\tName:\t\t" << name << endl;
		cout << "\tBalance:\tRs." << CalcBalance() << endl;
	}
};

int main()
{
	double mealc, amount, t;

	MealBill Bill1("University Summit Restaurant", 0.06);
	Student AhmedAli("0210-BCS-06","Ahmed Ali", 2000);
	cout << Bill1.getName() << endl;
	cout << "\n";
	cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;
	cout << "\n";
	cout << "Enter Meal Cost: ";
	cin >> mealc;
	Bill1.setmealCost(mealc);
	t = Bill1.Calctax();
	cout << "\n";
	cout << "Amount of Ahmed's bill: " << Bill1.TotalCost();
	cout << "\n";
	cout << "Bill:" << endl;
	cout << "\tMeal Cost:\t" << Bill1.getmealCost() << endl;
	cout << "\tTax:\t\t" << t << endl;
	cout << "\tTip:\t\t" << Bill1.Tip() << endl;
	cout << "\tTotal Cost:\t" << Bill1.TotalCost() << endl;
	cout << "____________________________________________________" << endl;
	cout << "\n";
	cout << "Amount paid by Ahmed: ";
	cin >> amount;
	Bill1.setpayment(amount);
	AhmedAli.setamountPaid(amount);
	cout << "\n";
	cout << "Charge the meal to Ahmeds account" << endl;
	cout << "\n";
	cout << "Receipt:" << endl;
	cout << "\tTotal Cost:\t" << Bill1.TotalCost() << endl;
	cout << "\tPayment:\t" << Bill1.getpayment() << endl;
	cout << "\tChange:\t\t" << Bill1.Change() << endl;
	cout << "\n";
	cout << "\tThankyou for dining at " << Bill1.getName() << endl;;
	cout << "\n";
	cout << "Current status of Ahmed’s account: " << endl;
	cout << "\n";
	AhmedAli.showAccountdetails();
	_getch();
	return 0;
}