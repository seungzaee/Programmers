#include <iostream>

using namespace std;

long long int facto(int a);

int main() {
	int a;
	cin >> a;
	cout << facto(a);
	return 0;
}

long long int facto(int a) {
	if (a > 0)
		return a * facto(a - 1);
	else
		return 1;
}