#include <iostream>

using namespace std;

int h() {
	int x, c = 0;
	cin >> x;
	for (int i = 1; i <= sqrt(x); i++) {
		if (x % i == 0){
			c += 2;
		}

	}
	if (c > 2) {
		cout << x << " is composite";
	}
	else {
		cout << x << " is prime";
	}

	return 0;
}