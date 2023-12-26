#include <iostream>	

using namespace std;

int f() {
	int x;
	cout << "Choose a number from 1 to 9";
	cin >> x;
	for (int i = 1; i < 10; ++i) {
		cout << x << '*' << i << '=' << x * i << endl;
	}

	return 0;
}