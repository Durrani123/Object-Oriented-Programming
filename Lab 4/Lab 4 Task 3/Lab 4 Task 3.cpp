#include<iostream>
using namespace std;

class sets {
public:
	int array[100];
	void set(int item) {
		static int i = 0;
		int counter = 0;
		
		for (int i = 0; i < 99; i++) {
			for(int j=0;j<99;j++)
			if (array[i] == array[j + 1]) {
				counter++;
				break;
		}
		}
		if (counter == 0) {
			if (item >= 1 && item <= 31) {
				array[i] = item;
				i++;
			}
			else {
				cout << "Enter an element between 1 and 31";
			}
		}
		else {
			cout << "Enter a distinct item";
		}
	}
	void clear(int item) {
	
		for (int i = 0; i < 31; i++) {
			if (item == array[i]) {
				array[i] = 32;
				break;
			}
		}
	}
	void test(int item) {
	
		int counter = 0;
		for (int i = 0; i < 31; i++) {
			if (item == array[i]) {
				counter++;
			}
		}
		if (counter == 0) {
			cout << "The element is not in the set" << endl;
		}
		else
			cout << "The element is in the set" << endl;
	}
};

int main() {
	int item;
	
	sets a;
	int num;
	do {
		cout << "Enter 1 to set" << endl;
		cout << "Enter 2 to clear" << endl;
		cout << "Enter 3 to test" << endl;
		cin >> num;
		cout << "Enter item" << endl;
		cin >> item;
		switch (num) {
		case 1: {
			a.set(item);
			cout << endl;
			break;
		}
		case 2: {
			a.clear(item);
			cout << endl;
			break;
		}
		case 3: {
			a.test(item);
			cout << endl;
			break;
		}
		}
	} while (num != 4);
	
	
}