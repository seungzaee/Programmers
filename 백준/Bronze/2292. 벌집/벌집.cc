#include<iostream>

using namespace std;

int main() {
	int num;
	cin >> num;
	int start = 1;
	int cnt = 1;
	while (start < num) {
		start += 6 * cnt;
		cnt++;
	}
	cout << cnt;
	return 0;
}