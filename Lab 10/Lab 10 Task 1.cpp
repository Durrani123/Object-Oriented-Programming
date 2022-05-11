#include<iostream>
using namespace std;
int main() {
	int first, third;
	char fourth, fifth;
	cout << "Enter value for first var " << endl;
	cin >> first;
	cout << "Enter value for third var " << endl;
	cin >> third;
	cout << "Enter value for fourth var " << endl;
	cin >> fourth;
	cout << "Enter value for fifth var " << endl;
	cin >> fifth;
	int second = first;
	cout << second << endl;
	cout << third + fourth << endl;
	float a = third + fifth;
	cout << a;
}