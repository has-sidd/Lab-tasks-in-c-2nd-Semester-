#include<iostream>
#include<conio.h>
#include<string>
#include<algorithm>
using namespace std;

class Flight
{
private:
	int FNo, avail_seats, book_seats;
	string source, dest;

	string toUpperCase(string s1)
	{
		transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
		return s1;
	}

	string ShortAndCapital(string name)
	{
		name = toUpperCase(name);
		if (name.size() <= 3)
		{
			return name;
		}
		else
		{
			return name.substr(0, 3);
		}
	}
	
public:
	Flight()
	{
		FNo = 0;
		source = "";
		dest = "";
		avail_seats = 0;
	};
	Flight(int Flightno, int aseats) : FNo(Flightno), avail_seats(aseats)
	{};
	Flight(int Flightno) : FNo(Flightno)
	{};
	int getflightNo()
	{
		return FNo;
	}
	string getsource()
	{
		return source;
	}
	string getdestination()
	{
		return dest;
	}
	int getavailableSeats()
	{
		return avail_seats;
	}
	void setflightno(int f)
	{
		FNo = f;
	}
	void setsource(string s)
	{
		source = s;
	}
	void setdestination(string d)
	{
		dest = d;
	}void setavailableSeats(int x)
	{
		avail_seats = x;
	}
	void reserve(int seatsno)
	{
		if (seatsno <= avail_seats)
		{
			book_seats = seatsno;
			avail_seats -= book_seats;
			cout <<seatsno <<" Seats Reserved!"<<endl;
		}
		else
		{
			cout << "Seats not available";
		}
	}
	void cancel(int seatsno)
	{
		avail_seats += book_seats;
		book_seats -= seatsno;
		cout << seatsno << " reservation is canceled!" << endl;
	}
	void toString()
	{
		cout << "Flight Number: " << FNo << endl;
		cout << "From: " << source << endl;
		cout << "To: " << dest << endl;
	}
	void equal(Flight flight2)
	{
		if (flight2.FNo == FNo)
		{
			cout << "Flights are same" << endl;
		}
		else
		{
			cout << "Flights are not same" << endl;
		}
	}
};

int main()
{
	int seats, aseats, fnum;
	string from, to;
	cout << "Enter number of seats: ";
	cin >> seats;
	cout << "Enter Source: ";
	cin >> from;
	cout << "Enter destination: ";
	cin >> to;
	cout << "Enter available seats: ";
	cin >> aseats;

	Flight flight1(111);
	flight1.setsource(from);
	flight1.setdestination(to);
	flight1.setavailableSeats(aseats);
	cout << "\n";
	flight1.reserve(seats);
	cout << "\n";
	cout << "Enter data of flight 2:"<< endl;
	
	cout << "Enter Flight Number: ";
	cin >> fnum;
	cout << "Enter number of seats: ";
	cin >> seats;
	cout << "Enter Source: ";
	cin >> from;
	cout << "Enter Destination: ";
	cin >> to;
	cout << "Enter available seats: ";
	cin >> aseats;

	Flight flight2;
	flight2.setflightno(fnum);
	flight2.setsource(from);
	flight2.setdestination(to);
	flight2.setavailableSeats(aseats);
	cout << "\n";
	flight2.reserve(seats);
	cout << "\n";
	cout << "Flight 1 info:" << endl;
	flight1.toString();
	cout << "\n" << endl;
	cout << "flight 2 info:" << endl;
	flight2.toString();
	cout << "\n";
	flight1.equal(flight2);

	_getch();
	return 0;
}