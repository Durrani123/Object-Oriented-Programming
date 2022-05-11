#include<iostream>
#include<string>
using namespace std;

class person {
public:
	static int count;
	string username_id;
	friend ostream& operator << (ostream&, person&);
	friend istream& operator>>(istream&, person&);
	person() {
		count++;
	}
	~person() {
		count--;
	}
};

int person::count = 0;

class date {
public:
	int dates, year, month;
	static int count;

	friend class person;


	friend ostream& operator << (ostream&, date&);
	friend istream& operator>>(istream&, date&);
	int operator>(date &ab) {
		if (year > ab.year) {
			return 0;
		}
		else if(year==ab.year){
			if (month > ab.month) {
				return 0;
			}
			else if (month == ab.month) {
				if (dates > ab.dates) {
					return 0;
				}
				else {
					return 1;
				}
			}
			else {
				return 1;
			}
			}
		else {
			return 1;
		}
	}
	
	date() {};
	~date() {};
};

ostream& operator<<(ostream& output, date& ab) {
	output << ab.year << "-" << ab.dates << "-" << ab.month;
	return output;
}
istream& operator>>(istream& input, date& ab) {
	cout << "Joining Date (yyyy mm dd) :";
	input >> ab.year;
	input >> ab.month;
	input >> ab.dates;
	return input;
}
ostream& operator<<(ostream& output, person& ab) {
	output << ab.username_id;
	return output;
}
istream& operator>>(istream& input, person& ab) {
	cout << "Person No " << ab.count << " Data" << endl << "Enter name and Id ";
	input.ignore();
	getline(input, ab.username_id);
	return input;
}

int main() {
	date ab, bc;
	person a;
	cin >> a;
	cin >> ab;
	person b;
	cin >> b;
	cin >> bc;
	int d = ab > bc;
	if (d == 0) {
		cout << b << " is senior to " << a << " because " << bc << " is earlier than " << ab;
	}
	else {
		cout << a << " is senior to " << b << " because " << ab << " is earlier than " << bc;
	}
}