#include<iostream>
using namespace std;


class stringtype {
private:
	string a;
	string b;
public:
	void setvalues(string str1, string str2) {
		a = str1;
		b = str2;
	}
	stringtype() {
	
	}
	stringtype(string str1,string str2) {
		a = str1;
		b = str2;
	}
	void printvalues() {
		cout << "String 1 is " << endl;
		cout << a << endl;
		cout << "String 2 is " << endl;
		cout << b;
	}
	int maxLength() {
		int count1 = 0, count2 = 0;
		while (a[count1] != '\0') {
			count1++;
		}
		while (b[count2] != '\0') {
			count2++;
		}
		return count1 > count2 ? count1 : count2;
	}
	int compare(string s1, string s2) {
		int count1 = 0, count2 = 0,count3=0;
		while (a[count1] != '\0') {
			count1++;
		}
		while (b[count2] != '\0') {
			count2++;
		}
		if (count1 > count2 || count2 > count1) {
			return 0;
		}
		else {
			for (int i = 0; i<(count1 > count2 ? count1 : count2); i++) {
				if (a[i] > b[i]) {
					count3++;
					break;
				}
				else if (a[i] < b[i]) {
					count3++;
					break;
				}
			}
		}
		if (count3 == 0) {
			return 1;
		}
		else {
			return 0;
		}
	}

	void copy(string source, string destination) {
		source = destination;
	}
	string concatenate(string s1, string s2) {
		int count1 = 0;
		char temp[1000] = {' '};

		while (a[count1] != '\0') {
			temp[count1] = a[count1];
			count1++;
		}
		for (int i = 0; b[i] != '\0'; i++) {
			temp[count1 + i] = b[i];
		}
		return temp;
	}
	int searchWord(string word) {
		int count = 0;
		for (int i = 0; a[i] != '\0'; i++) {
			for (int j = 0; word[i] != '\0'; j++) {
				if (a[i + j] == word[j]) {
					count++;
				}
			}
		}
		if (count == 0) {
			return 1;
		}
		else
			return 0;
	}
	int searchChar(char ch) {
		int count = 0;
		for (int i = 0; a[i] != '\0'; i++) {
			if (a[i] != ch) {
				count++;
			}
		}
		if (count == 0) {
			return 1;
		}
		else
			return 0;
	}
};

int main() {
	string a, b;
	stringtype c;
	int x;
	do {
		cout << "1.Setvalues" << endl << "2.Print values" << endl << "3.Max Length" << endl << "4.Compare" << endl << "5.Copy" << endl << "6.Concatenate" << endl << "7.Search Word" << endl << "8.Search Char" << endl << "9.Exit" << endl;
			cin >> x;
		switch (x) {
		case 1: {
			string a1, a2;
			cout << "Enter First String" << endl;
			cin >> a1;
			cout << "Enter Second String" << endl;
			cin >> a2;
			c.setvalues(a1, a2);
			cout << endl;
			break;
		}
		case 2: {
			c.printvalues();
			cout << endl;
			break;
		}
		case 3: {
			cout<<c.maxLength();
			cout << endl;
			break;
		}
		case 4: {
		cout<<c.compare(a, b);
			cout << endl;
			break;
		}
		case 5: {
			c.copy(a, b);
			cout << endl;
			break;
		}
		case 6: {
			cout << c.concatenate(a, b) << endl;
			break;
		}
		case 7: {
			string words;
			cin >> words;
			cout << c.searchWord(words) << endl;
			break;
		}
		case 8: {
			char d;
			cin >> d;
			cout << c.searchChar(d) << endl;
			break;
		}
		}
	} while (x != 9);
}