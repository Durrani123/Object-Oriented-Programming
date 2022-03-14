#include<iostream>
using namespace std;
class Heater {
private:
	int temprature;
public:
	Heater() {
		temprature = 15;
	}
	void warmer() {
		temprature + 5;
	}
	void cooler() {
		temprature - 5;
	}
	int print() {
		cout << temprature;
		return temprature;
	}
};

int main() {
	Heater a;
	int x;
	do {
		cout << "1.warmer " << endl;
		cout << "2.cooler" << endl;
		cout << "3.exit" << endl;
		cin >> x;
		switch (x) {
		case 1:{
			a.warmer();
			a.print();
			break;
		}
		case 2:
			a.cooler();
			a.print();
		}
	} while (x != 3);
	return 0;
}