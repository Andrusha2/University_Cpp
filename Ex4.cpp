#include <iostream>

using namespace std;

int i() {
	int x;
	cin >> x;
	if ((x % 400 == 0) or (x % 4 == 0 and x % 100 != 0)) {
		cout << x << " is leap";
	}
	else {
		cout << x << " is not leap";
	}

	return 0;
}