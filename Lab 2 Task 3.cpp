#include<iostream>
#include<bitset>

using namespace std;

int main() {
	int a;
	cout << "Enter Base system " << endl;
	cin >> a;
	if (a == 2 || a == 8 || a == 10 || a == 16) {
		switch (a) {
		case 2: {
			bitset<4> b;
			bitset<4> c;
			bitset<4> d;
			int e;
			cout << "Enter number 1 with base " << a << endl;
			cin >> b;
			cout << "Enter number 2 with base " << a << endl;
			cin >> c;
			d = b & c;
			d = ~d;
			cout << "Sum is " << d;
			break;
		}

		case 8: {
			int a, b, i, j;

			i = 0;
			j = 0;
			cout<<"Enter first number";
			cin >> a;
			cout<<"Enter first number";
			cin >> b;
			int first = a;
			int second = b;
			int x = a;
			int y = b;

			while (a > 0) {
				a = a / 10;
				i++;
			}
			while (b > 0) {
				b = b / 10;
				j++;
			}
			int large = i;
			if (j > i) {
				large = j;
			}
			int c, d, e;
			int k = 9;
			int array[10] = { 0 };

			while (large >= 0) {
				c = first % 10;
				d = second % 10;
				e = c + d;
				if (e >= 8) {
					e = e - 8;
					first++;
				}
				array[k] = e;
				k--;
				first / 10;
				second / 10;
				large--;
			}

			break;
		}
		case 10: {
			int a;
			
			int b;
			cout<<"Enter first number";
			cin >> a;
			cout<<"Enter second number";
			cin >> b;
			int d = a + b;
			cout << d;
			break;
		}
		case 16: {

		}
		}
	}
	else {
		cout << "wrong value";
	}
	
}
