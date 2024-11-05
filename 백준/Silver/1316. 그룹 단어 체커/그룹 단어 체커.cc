#include <iostream>
#include <string>

using namespace std;

int checker = 0;

int check(string str, int size) {

	for (int j = 1; j < size; j++) {
		for (int k = 0; k < j; k++) {
			if (str[j] != str[j - 1] && str[j] == str[k]) {
				return 0;
			}
		}
	}
	return 1;
}

int main() {

	int cnt = 0;
	cin >> cnt;

	string str;

	for (int i = 0; i < cnt; i++) {
		cin >> str;
		int size = str.length();
		checker += check(str, size);
	}

	cout << checker;

	return 0;
}