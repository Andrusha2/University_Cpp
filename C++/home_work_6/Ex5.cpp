#include <iostream>
#include <stack>

using namespace std;

int j() {
	stack<string> stack;
	cout << "How much letters in your word" << endl;
	int n;
	cin >> n;
	cout << "Spell your word" << endl;
	for (int i = 1; i <= n; i++) {
		string letter;
		cin >> letter;
		stack.push(letter);
	}
	int size;
	size = stack.size();
	for (int i = 1; i <= size; i++) {
		cout << stack.top();
		stack.pop();
	}

	return 0;
}