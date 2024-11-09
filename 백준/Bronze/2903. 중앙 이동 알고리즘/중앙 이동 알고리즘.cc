#include<iostream>

using namespace std;

int main() {
	int num;
	cin >> num;
	int side = 2;
	for (int i = 0; i < num; i++) {
		side = side * 2 - 1;
	}
	cout << side * side;
	return 0;
}