#include<iostream>
using namespace std;
class bankaccount {
protected:
	int acc_number;
	double balance;
public:
	virtual void set_acc() = 0;
	virtual void set_bal() = 0;
	virtual void print() = 0;
	virtual void dmoney() {}
	virtual void wmoney() {}
	bankaccount(int a, double b) {
		acc_number = a;
		balance = b;
	}
};
class checkingaccount :public bankaccount {
protected:
	int min_balance;
	int interest;
	int s_charges;
public:
	checkingaccount(int a, double b, int c, int d, int e) :bankaccount(a, b) {
		min_balance = c;
		interest = d;
		s_charges = e;
	}
	void check() {
		balance += (interest * balance) / 100;
		if (balance < min_balance) {
			balance -= s_charges;
		}
	}
	void set_acc() {
		cin >> acc_number;
	}
	void set_bal() {
		cin >> balance;
	}
	void set_mbal() {
		cin >> min_balance;
	}
	void set_int() {
		cin >> interest;
	}
	void set_s_charges() {
		cin >> s_charges;
	}
	void print() {
		cout << "Account No " << acc_number << endl;
		cout << "Balance " << balance << endl;
		cout << "Min Balance " << min_balance << endl;
		cout << "Interest " << interest << " %" << endl;
		cout << "Service Charge " << s_charges << endl;
	}
	void wmoney() {
		if (balance < min_balance) {
			cout << "Balane is less than " << min_balance << endl;
			cout << "can not withdraw money" << endl;
		}
		else {
			cout << "Enter money to withdraw" << endl;
			int a;
			cin >> a;
			balance -= a;
		}
	}
};
class savingsaccount :public bankaccount {
protected:
	int interest;
public:
	savingsaccount(int a, double b, int c) :bankaccount(a, b) {
		interest = c;
	}
	void set_acc() {
		cin >> acc_number;
	}
	void set_bal() {
		cin >> balance;
	}
	void set_int() {
		cin >> interest;
	}
	void wmoney() {
		int a;
		cout << "Enter amount to withdraw " << endl;
		cin >> a;
		balance += a;
	}
	void print() {
		cout << "Account No " << acc_number << endl;
		cout << "Balance " << balance << endl;
		cout << "Interest " << interest << " %" << endl;
	}
};

int main() {
	bankaccount* bank;
	int n;
	do {
		cout << "1. Checking Account" << endl;
		cout << "2. Savings Account" << endl;
		cout << "-1. Exit" << endl;
		cin >> n;
		switch (n) {
		case 1: {
			int a, c, d, e;
			double b;
			int n;
			cout << "Enter account No" << endl;
			cin >> a;
			cout << "Enter Balance" << endl;
			cin >> b;
			cout << "Enter Min Balance " << endl;
			cin >> c;
			cout << "Enter Interest " << endl;
			cin >> d;
			cout << "Enter Service Charge " << endl;
			cin >> e;
			checkingaccount check(a, b, c, d, e);
			bank = &check;
			do {
				cout << "1. Set Account No" << endl;
				cout << "2. Set balance" << endl;
				cout << "3. Set min balance" << endl;
				cout << "4. Set interest" << endl;
				cout << "5. withdraw Money" << endl;
				cout << "6. Print Details" << endl;
				cout << "-1. Exit" << endl;
				cin >> n;
				check.check();
				switch (n)
				{
				case 1: {
					bank = &check;
					bank->set_acc();
					break;
				}
				case 2: {
					bank->set_bal();
					check.check();
					break;
				}
				case 3: {
					check.set_bal();
					break;
				}
				case 4: {
					check.set_int();
					break;
				}
				case 5: {
					check.dmoney();
					break;
				}
				case 6: {
					bank->print();
				}
				}
			} while (n != -1);
			break;
		}
		case 2: {
			int a, c;
			double b;
			int n;
			cout << "Enter account No" << endl;
			cin >> a;
			cout << "Enter Balance" << endl;
			cin >> b;
			cout << "Enter Interest " << endl;
			cin >> c;
			savingsaccount check(a, b, c);
			bank = &check;
			do {
				cout << "1. Set Account No" << endl;
				cout << "2. Set balance" << endl;
				cout << "3. Set interest" << endl;
				cout << "4. Deposit Money" << endl;
				cout << "5. Print Details" << endl;
				cout << "-1. Exit" << endl;
				cin >> n;
				switch (n)
				{
				case 1: {
					bank = &check;
					bank->set_acc();
					break;
				}
				case 2: {
					bank->set_bal();
					break;
				}
				case 4: {
					check.dmoney();
					break;
				}
				case 3: {
					check.set_int();
					break;
				}
				case 5: {
					bank->print();
				}
				}
			} while (n != -1);
		}
		}
	} while (n != -1);
}