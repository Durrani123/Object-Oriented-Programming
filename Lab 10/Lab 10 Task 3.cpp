#include<iostream>
using namespace std;
int main() {
	double a, b;
	cout << "Enter length " << endl;
	cin >> a;
	cout << "Enter Breadth" << endl;
	cin >> b;
	cout << "Int " << endl;
	cout << static_cast<int>(b * a) << endl;
	cout << "Float " << endl;
	cout << static_cast<float>(b * a);
}