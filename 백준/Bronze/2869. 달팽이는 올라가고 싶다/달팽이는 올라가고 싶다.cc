#include<iostream>
#include<string>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int up = a - b;
	if (c <= a) {
		cout << 1;
	}
	else if ((c - a) % up == 0)
		cout << (c - a) / up + 1;
	else
		cout << (c - a) / up + 2;
	return 0;
}