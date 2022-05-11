#include<iostream>
using namespace std;
class shapes {
protected:
	int length, width;
public:
	virtual int area() = 0;
	virtual void setter() = 0;
	virtual void getter() = 0;
	shapes() {}
	~shapes() {}
};
class two_d_shapes :public shapes {
public:
	two_d_shapes() {}
	~two_d_shapes() {}
	//virtual int area() = 0;
	void setter() {
		cout << "Length " << endl;
		cin >> length;
		cout << "Width" << endl;
		cin >> width;
	}
	virtual void getter() {
		cout << "Length " << length << endl;
		cout << "Width " << width << endl;
	}
};
class three_d_shapes :public shapes {
public:
	//virtual int area() = 0;
	virtual int volume() = 0;
	virtual void setter() {
		cout << "Length " << endl;
		cin >> length;
		cout << "Width" << endl;
		cin >> width;
	}
	virtual void getter() {
		cout << "Length " << length << endl;
		cout << "Width " << width << endl;
	}
};
class circle :public two_d_shapes {
protected:
	int radius;
	string color;
public:
	void setter() {
		two_d_shapes::setter();
		cout << "Radius" << endl;
		cin >> radius;
		cout << "Color" << endl;
		cin >> color;
	}
	void getter() {
		two_d_shapes::getter();
		cout << "Radius " << radius << endl;
		cout << "Color " << color << endl;
	}
	int area() {
		return (3 * radius * radius);
	}
};
class square :public two_d_shapes {
protected:
	int side;
	string color;
public:
	void setter() {
		two_d_shapes::setter();
		cout << "side" << endl;
		cin >> side;
		cout << "Color" << endl;
		cin >> color;
	}
	void getter() {
		two_d_shapes::getter();
		cout << "Side " << side << endl;
		cout << "Color " << color << endl;
	}
	int area() {
		return length * length;
	}
};
class cube :public three_d_shapes {
protected:
	int height;
public:
	int area() {
		return (6 * length * width);
	}
	int volume() {
		return (height * length * width);
	}
	void setter() {
		three_d_shapes::setter();
		cout << "Height" << endl;
		cin >> height;
	}
	void getter() {
		three_d_shapes::getter();
		cout << endl << "Height " << height;
	}
};
class pyramid :public three_d_shapes {
protected:
	int base;
	int height;
public:
	int area() {
		return (length * width);
	}
	int volume() {
		return (base * height / 3);
	}
	void setter() {
		three_d_shapes::setter();
		cout << "Height" << endl;
		cin >> height;
		cout << "Base" << endl;
		cin >> base;
	}
	void getter() {
		three_d_shapes::getter();
		cout << endl << "Base " << base << endl;
		cout << "Height " << height;
	}
};
int main() {
	shapes* a;
	int n;
	do {
		cout << "1. 2D shapes" << endl;
		cout << "2. 3D shapes" << endl;
		cout << "-1. Exit" << endl;
		cin >> n;
		switch (n) {
		case 1: {
			int d;
			do {
				cout << "4. circle " << endl;
				cout << "5. square " << endl;
				cout << "-1. Exit" << endl;
				cin >> d;
				switch (d)
				{
				case 4: {
					circle c;
					a = &c;
					a->setter();
					a->getter();
					cout << "Area" << a->area() << endl;
					break;
				}
				case 5: {
					square c;
					a = &c;
					a->setter();
					a->getter();
					cout << endl << "Area" << a->area() << endl;
					break;
				}
				}
			} while (d != -1);
			break;
		}
		case 2: {
			int d;
			do {
				cout << "4. cube " << endl;
				cout << "5. Pyramid " << endl;
				cout << "-1. Exit" << endl;
				cin >> d;
				switch (d)
				{
				case 4: {
					cube c;
					a = &c;
					a->setter();
					a->getter();
					cout << endl << "Area" << a->area() << endl;
					cout << endl << "Volume" << c.volume() << endl;
					break;
				}
				case 5: {
					pyramid c;
					a = &c;
					a->setter();
					a->getter();
					cout << endl << "Area" << a->area();
					cout << endl << "Volume" << c.volume() << endl;
					break;
				}
				}
			} while (d != -1);
			break;
		}
		}
	} while (n != -1);
}