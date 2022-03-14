#include<iostream>
using namespace std;

class parity {
private:
	int size;
	int* array = new int[size];
public:
	parity(int a) {
		size = a;
	}
	parity() {
		size = 0;
	}
	void put(int num);
	void print(void);
	void delet();
	int test(void);
};
void parity::put(int num) {
	int n = size;
	size = size + 1;
	int* temp = new int[size];
	for (int i = 0; i < n; i++) {
		temp[i]=array[i];
	}
	delete[]array;
	array=temp;
	array[n] = num;
}
void parity::delet() {
	int n = size;
	size = size -1;
	int* temp = new int[size];
	for (int i = 0; i < n; i++) {
		temp[i] = array[i];
	}
	delete[]array;
	array = temp;
}
void parity::print() {
	for (int i = 0; i < size; i++) {
		cout << array[i] << endl;
	}
}
int parity::test(void) {
	if (size % 2 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	parity a;
	int x;
	do {
		cout << "1.put " << endl;
		cout << "2.print" << endl;
		cout << "3.delete" << endl;
		cout << "4.test" << endl;
		cout << "5.exit" << endl;
		cin >> x;
		switch (x) {
		case 1: {
			int num1;
			cout << "Enter number" << endl;;
			cin >> num1;
			a.put(num1);

			cout << endl;
			break;
		}
		case 2: {
			a.print();

			cout << endl;
			break;
		}
		case 3: {
			a.delet();
			cout << endl;
			break;
		}
		case 4: {
			cout<<a.test();
			cout << endl;
			break;
		}
		}
	} while (x != 5);
}