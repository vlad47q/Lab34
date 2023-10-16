// Lab34.cpp
// Скоропад Владислав
// Лабораторна робота № 3.
// Розгалуження, задане формулою: функція задана плоскою фігурою.
// Варіант 11


#include <iostream>

using namespace std;

int main() {
	
	double x, y, R;
	bool isTrue;

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	isTrue = ((x > 0 && y > 0 && x * x + y * y <= R * R) || (x < 0 && y < 0 && y >= -x - R));

	// розгалуження в повній формі
	if (isTrue) {
		cout << "yes" << endl;
	}
	else {
		cout << "no" << endl;
	}

	return 0;
}