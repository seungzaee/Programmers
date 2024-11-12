#include<iostream>
#include<string>

using namespace std;

int main() {
	int a1, b1, a2, b2, a3, b3;
	cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
	if (a1 == a2)
		cout << a3 << " ";
	else if (a2 == a3)
		cout << a1 << " ";
	else
		cout << a2 << " ";
	if (b1 == b2)
		cout << b3;
	else if (b2 == b3)
		cout << b1;
	else
		cout << b2;
	return 0;
}