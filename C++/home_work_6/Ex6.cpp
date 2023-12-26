#include <iostream>	
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main() {
	string word;
	cout << "Type your word here: ";
	cin >> word;
	transform(word.begin(), word.end(), word.begin(), ::toupper);
	int len;
	len = word.length();
	int num_of_vowels = 0;
	char vowels[5] = { 'A', 'E', 'I', 'O', 'U' };
	vector<char> word_l;
	for (auto i : word) {
		word_l.push_back(i);
	}
	for (int i = 0; i < len; i++) {
		for (auto j : vowels) {
			if (word_l[i] == j) {
				num_of_vowels++;
			}
		}
	}
	cout << num_of_vowels;
	
	return 0;
}