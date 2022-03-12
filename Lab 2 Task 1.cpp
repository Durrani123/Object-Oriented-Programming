#include<iostream>
#include<bitset>

using namespace std;

bitset<8>c;

#define func()((c==0)?0:1)

int main() {
	int n, d;
	cout << "Enter number" << endl;
	cin >> n;
	bitset <8> a;
	a = bitset<8>((int)n);
	bitset <8> b;
	b = bitset<8>((int)n - 1);
	
	c = b & a;
	
	d=func();
	if (d == 0) {
		cout << "it is the power";
	}
	else {
		cout << "no";
	}
}