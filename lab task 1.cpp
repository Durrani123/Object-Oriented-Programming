#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
struct student {
	string name;
	int regn;
	string program;
	int courses;
};

int main(){
	student c[3];
	float mark[3];
	float sum = 0;

	for (int j = 0; j < 3; j++) {
		cout << "Enter record  of student " << j << endl;
		cout << "Enter reg no " << endl;
		cin >> c[j].regn;
		cout << "Enter name " << endl;
		cin >> c[j].name;
		cout << "Enter degree program " << endl;
		cin >> c[j].program;
		cout << "Enter courses " << endl;
		cin >> c[j].courses;
		for (int i = 1; i <= c[0].courses; i++) {
			cout << "Enter marks of course " << i<<" ";
			int marks;
			float gpas = 0;
			cin >> marks;
			if (marks >= 86) {
				gpas = 4;
			}
			if (marks >= 82 && marks < 86) {
				gpas = 3.6;
			}
			if (marks >= 78 && marks < 82) {
				gpas = 3.3;
			}
			if (marks >= 74 && marks < 78) {
				gpas = 3.0;
			}
			if (marks >= 70 && marks < 74) {
				gpas = 2.67;
			}
			sum += gpas;
		}
		mark[j] = sum / c[j]. courses;
	}
	cout << "S.No\t" << "Name\t" << "Reg No\t" << "Degree Program\t" << "SGPA" << endl;
	for (int i = 0; i < 3; i++) {
		cout << i << "\t" << c[i].name << "\t" << c[i].regn << "\t" << c[i].program <<"\t\t" << mark[i];
		cout << endl;
	}
	for (int i = 2; i >= 0; i--) {
		for (int j = 0; j <= 1; j++) {
			if (mark[j] < mark[j + 1]) {
				student temp = c[j];
				c[j] = c[j + 1];
				c[j + 1] = temp;
				float tempa = mark[j];
				mark[j] = mark[j + 1];
				mark[j + 1] = tempa;
			}
		}
	}
	cout << "S.No\t" << "Name\t" << "Reg No\t" << "Degree Program\t" << "SGPA" << endl;
	for (int i = 0; i < 3; i++) {
		cout << i << "\t" << c[i].name << "\t" << c[i].regn << "\t" << c[i].program << "\t\t" << mark[i];
		cout << endl;
	}
	cout << "The Best student is " << endl;
	cout << c[0].name << "\t" << c[0].regn << "\t" << c[0].program << "\t"<< mark[0];
}