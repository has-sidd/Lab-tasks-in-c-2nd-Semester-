#include<iostream>
#include<conio.h>
using namespace std;

class RentedVehicle
{
private:
	double baseFee;
public:
	RentedVehicle()
	{};
	RentedVehicle(double b)
	{
		baseFee = b;
	};
	virtual double getCost()
	{
		return baseFee;
	}
	void setbaseFee(double b)
	{
		baseFee = b;
	}
	double getbaseFee()
	{
		return baseFee;
	}
};

class FuelVehicle :public RentedVehicle
{
private:
	double Kms;

public:
	FuelVehicle()
	{};
	FuelVehicle(double km, double m)
	{
		Kms = km;
	};
	double getMileageFees()
	{
		if (Kms < 100)
		{
			return 0.2 * Kms;
		}
		else if (Kms >= 100 && Kms <= 400)
		{
			return 0.3 * Kms;
		}
		else
		{
			return (0.3 * 400) + (0.5 * (Kms - 400));
		}
	}
	void setkms(double k)
	{
		Kms = k;
	}
	double getkms()
	{
		return Kms;
	}
};

class Car :public FuelVehicle
{
private:
	int seats;
public:
	Car()
	{};
	Car(int s) :seats(s)
	{};
	int getseats()
	{
		return seats;
	}
	void setseats(int s)
	{
		seats = s;
	}
	double getCost()
	{
		return getseats() * getbaseFee() + getMileageFees();
	}
};

class Truck :public FuelVehicle
{
private:
	int capacity;
public:
	Truck()
	{};
	Truck(int c)
	{
		capacity = c;
	}
	void setcapacity(int c)
	{
		capacity = c;
	}
	int getcapacity()
	{
		return capacity;
	}
	double getCost()
	{
		return getcapacity() * getbaseFee() + getMileageFees();
	}
};

class Bicycle :public RentedVehicle
{
private:
	int nDays;
public:
	Bicycle()
	{};
	Bicycle(int n)
	{
		nDays = n;
	}
	int getndays()
	{
		return nDays;
	}
	void setndays(int n)
	{
		nDays = n;
	}
	double getCost()
	{
		return getbaseFee() * getndays();
	}
};

int main()
{
	Car c1(4);
	Truck t1(2500);
	Bicycle b1(7);
	c1.setkms(5000);
	c1.setbaseFee(1200);
	cout << c1.getseats() << endl;
	cout << c1.getMileageFees() << endl;
	cout << c1.getCost();
	_getch();
	return 0;
}