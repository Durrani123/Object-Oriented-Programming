#include<iostream>
using namespace std;
int main() {
	int first, second;
	cout << "First "<<endl;
	cin >> first;
	cout << "second " << endl;
	cin >> second;
	cout << "Implicit" << endl;
	float a = first / second;
	cout << a;
	cout << "Explicit" << endl;
	float b = float(first / second);
	cout << b;
}