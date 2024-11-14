#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	bool arr[10001] = { false };
	
	arr[0] = true;
	arr[1] = true;

	for (int i = 2; i * i < 10001; i++) {
		if (!arr[i]) {
			for (int j = i * i; j < 10001; j += i) {
				arr[j] = true;
			}
		}
	}

	int a, b;
	cin >> a >> b;
	int sum = 0;
	int min = 0;
	for (int i = a; i < b + 1; i++) {
		if (!arr[i]) {
			sum += i;
		}
	}

	if (sum == 0) {
		cout << -1;
		return 0;
	}
	else
		cout << sum << "\n";

	while (true) {
		if (!arr[a]) {
			cout << a;
			break;
		}
		a++;
	}
	return 0;
}