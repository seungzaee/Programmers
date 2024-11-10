#include<iostream>
#include<string>

using namespace std;

int main() {
	int num1;
	int num2;
	cin >> num1 >> num2;
	int cnt = 0;
	int div = 1;
	int res = 0;
	while (cnt != num2) {
		if (num1 % div == 0) {
			cnt++;
			res = div;
		}
		div++;
		if (div > num1 + 1) {
			res = 0;
			break;
		}
	}
	cout << res;
	return 0;
}