#include<iostream>
#include<time.h>
using namespace std;
class matrix {
public:
	int array[5][5];
	void initialize() {
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				cin>>array[i][j];
			}
		}
	}
	void Print() {
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				cout << array[i][j];
			}
			cout << endl;
		}
	}
	void Transpose() {
		int counter = 0;
		int array1[5][5];
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				array1[i][j] = array[j][i];
			}
		}
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				if (array[i][j] != array1[i][j]) {
					counter++;
					break;
				}
			}
		}
		if (counter == 0) {
			cout << "Symmetric ";
		}
		else {
			cout << "Not symmetric ";
		}
	}
	void multiply(matrix obj1, matrix obj2) {
		obj1.array;
		obj2.array;

		int array4[5][5];
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				array4[i][j] = 0;
				for (int k = 0; k < 5; k++) {
					array4[i][j] = array4[i][j] + obj1.array[i][k] * obj2.array[k][j];
				}
			}
		}

		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				cout << array4[i][j];
			}
			cout << endl;
		}
	}
};

int main() {
	int n;
	matrix a, b, c;
	do {
		cout << "Press 1 to initialize "<<endl;
		cout << "Press 2 to Print " << endl;
		cout << "Press 3 to check symmetry" << endl;
		cout << "Press 4 to multiply" << endl;
		cout << "Press 5 to exit" << endl;
		cin >> n;
		switch (n) {
		case 1: {
			a.initialize();
			break;
		}
		case 2: {
			a.Print();
			break;
		}
		case 3: {
			a.Transpose();
			break;
		}
		case 4: {
			a.initialize();
			b.initialize();
			c.multiply(a, b);
			break;
		}
		}
	} while (n != 5);
}