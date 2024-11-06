#include <iostream>
#include<vector>
#include <string>

using namespace std;

int main() {
	string arr[5][15];
	for (int i = 0; i < 5; i++) {
		string str;
		cin >> str;
		for (int j = 0; j < str.size(); j++) {
			arr[i][j] = str[j];
		}
	}

	for (int k = 0; k < 15; k++) {
		for (int h = 0; h < 5; h++) {
			cout << arr[h][k];
		}
	}
	return 0;
}