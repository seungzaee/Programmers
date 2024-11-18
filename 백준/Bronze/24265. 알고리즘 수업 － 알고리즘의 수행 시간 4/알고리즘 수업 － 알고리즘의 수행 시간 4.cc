#include<iostream>

using namespace std;

int main() {
	long long num;
	cin >> num;
	/*nt sum = 0;
	for (int i = 0; i < num; i++) {
		sum += i;
	}
	cout << sum << "\n" << 2;*/
	cout << num * (num - 1) / 2 << "\n" << 2;
	return 0;
}