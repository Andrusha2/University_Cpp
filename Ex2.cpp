#include <iostream>

using namespace std;

int g() {
	long double x, y = 1;
	cin >> x;
	for (int i = 1; i <= x; i++) {
		y *= i;
	}
	cout << y;

	return 0;
}