#include<iostream>
#include<conio.h>
#include<string>
#include<algorithm>
using namespace std;

class Car
{
private:
	string Brand_name, color;
	double pricenew, odometer, priceAfter;

public:
	Car()
	{};
	Car(string name, double price, string c, double meter) : Brand_name(name), pricenew(price), color(c), odometer(meter)
	{};
	string getbrandName()
	{
		return Brand_name;
	}
	string getcolor()
	{
		return color;
	}
	int getnewPrice()
	{
		return pricenew;
	}
	double getodometer()
	{
		return odometer;
	}
	void setbrandName(string n)
	{
		Brand_name = n;
	}
	void setcolor(string c)
	{
		color = c;
	}
	void setnewPrice(double pn)
	{
		pricenew = pn;
	}
	void setodometer(double od)
	{
		odometer = od;
	}
	double getPriceAfterUse()
	{
		priceAfter = pricenew * (1 - (odometer / 600000));
		return priceAfter;
	}
	void updateMileage(double travelledDistance)
	{
		odometer += travelledDistance;
	}
	void outputDetails()
	{
		cout << "Brand Name: " << Brand_name <<endl;
		cout << "Price of new car: " << pricenew << endl;
		cout << "Price of used car: " << priceAfter << endl;
		cout << "Color: " << color << endl;
		cout << "Odometer: " << odometer << endl;
	}
};

int main()
{
	string name, clr;
	double nprice, od;
	Car car1;
	cout << "Enter Brand:";
	cin >> name;
	cout << "Enter Color:";
	cin >> clr;
	cout << "Enter New price:";
	cin >> nprice;
	cout << "Enter Odometer:";
	cin >> od;
	car1.setbrandName(name);
	car1.setcolor(clr);
	car1.setnewPrice(nprice);
	car1.setodometer(od);
	cout << "\n";
	cout << "Car Details: " << endl;
	car1.outputDetails();
	cout << "\n";
	cout << "Price after first use: " << car1.getPriceAfterUse() << endl;
	cout << "\n";
	cout << "Car Details: " << endl;
	car1.updateMileage(754.25);
	car1.outputDetails();
	cout << "\n";
	cout << "Price after second use: " << car1.getPriceAfterUse() << endl;

	_getch();
	return 0;
}