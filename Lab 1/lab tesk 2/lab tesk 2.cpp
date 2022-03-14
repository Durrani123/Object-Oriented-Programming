#include<iostream>
using namespace std;

struct birth {
	int day;
	int month;
	int year;
};

struct birthday{
	string name;
	int age;
	string city;
	birth cs;

};
int main() {
	birthday c[3];
	int d;
	int m;
	int y;
	for (int i = 0; i < 3; i++) {
		cout << "Enter the name " << endl;
		cin >> c[i].name;
		cout << "Enter the age " << endl;
		cin >> c[i].age;
		cout << "Enter the city " << endl;
		cin >> c[i].city;
		cout << "Enter the DOB" << endl;
		cout << "Enter day";
		cin >> c[i].cs.day;
		cout << "Enter month" << endl;
		cin >> c[i].cs.month;
		cout << "Enter year" << endl;
		cin >> c[i].cs.year;
	}
	cout << "Enter day" << endl;
	cin >> d;
	cout << "Enter month" << endl;
	cin >> m;
	cout << "Enter year" << endl;
	cin >> y;
	for (int i = 0; i < 3; i++) {
		if (d == c[i].cs.day && m == c[i].cs.month && y == c[i].cs.year) {
			cout << "It is " << c[i].name << " Birthday" << " Happy Birthday " << c[i].name;
		}
}
}