#include<iostream>
#include<string>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b + c == 180) {
		if (a == b && b == c) {
			cout << "Equilateral";
		}
		else if (a != b && b != c && a != c) {
			cout << "Scalene";
		}
		else
			cout << "Isosceles";
	}
	else
		cout << "Error";
	return 0;
}