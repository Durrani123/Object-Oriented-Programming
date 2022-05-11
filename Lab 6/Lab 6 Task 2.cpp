#include<iostream>
using namespace std;
class check {
private:
	int id;
	string name;
	string rank;
	
public:
	static int count;

	
	void sett() {
		cout << "Enter id of officer" << endl;
		cin  >> id;
		cout << "Enter name of officer" << endl;
		cin  >> name;
		cout << "Enter rank of officer" << endl;
		cin  >> rank;
		this->count++;
	}
	void check1() {
		int id1 = id;
		int count = 0;
		int count1 = 1;
		while (id1 > 0) {
			id1 = id1 / 10;
			count++;
		}

		int* array1 = new int[count];
		int* array2 = new int[count];
		for (int i = 0; i < count; i++) {
			array1[i] = id % 10;
			id = id / 10;
		}
		int count4 = count;
		int count3 = --count;
		for (int i = 0; i < count4; i++) {
			array2[i] = array1[count3];
			count3--;
		}
		int count5 = 0;
		for (int i = 0; i < count4; i++) {
			if (array1[i] != array2[i]) {
				count5++;
			}
		}
		if (count5 == 0) {
			cout << "The officer is not allowed to enter the restricted area"<<endl;
			this->count--;
		}
		else {
			cout << "The officer is allowed to enter the restricted area" << endl;
		}

	}
};
int check::count;

int main() {
	check a;
	int x;
	do {
		cout << "1. Enter id of officer" << endl;
		cout << "2. Get total No of officer" << endl;
		cout << "3. Exit" << endl;
		cin >> x;
		switch (x) {
		case 1: {
			a.sett();
			a.check1();
			cout << endl;
			break;
		}
		case 2: {
			cout << a.count << endl;
			break;
		}
		} 
	} while (x != 3);
}