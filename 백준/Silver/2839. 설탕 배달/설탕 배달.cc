#include<iostream>
#include<string>

using namespace std;

int main() {
	int num;
	cin >> num;
	int res = 0;
	for (int i = 0; i < 1001; i++) {
		for (int j = 0; j < 2000; j++) {
			int sum = 5 * i + 3 * j;
			if (sum > num) {
				break;
			}
			else if (sum == num)
				res = i + j;
		}
	}
	if (res == 0)
		cout << -1;
	else
		cout << res;
	return 0;
}