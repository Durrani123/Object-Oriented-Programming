#include<iostream>
#include<math.h>
using namespace std;

int c;
int d;

#define func()(c*pow(2,d))

int main() {
	cin >> c;
	cin >> d;
	cout << func();
}