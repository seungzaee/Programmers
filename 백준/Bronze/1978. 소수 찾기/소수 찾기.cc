#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	bool arr[1001] = { false };
	
	arr[0] = true;
	arr[1] = true;

	for (int i = 2; i * i < 1001; i++) {
		if (!arr[i]) {
			for (int j = i * i; j < 1001; j += i) {
				arr[j] = true;
			}
		}
	}

	int cnt = 0;
	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		int idx;
		cin >> idx;
		if (!arr[idx])
			cnt++;
	}
	cout << cnt;
	return 0;
}