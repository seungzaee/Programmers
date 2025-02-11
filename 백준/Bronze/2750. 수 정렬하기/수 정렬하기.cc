#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int cnt;
	cin >> cnt;

	int arr[1000] = {};

	for (int i = 0; i < cnt; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + cnt);

	for (int i = 0; i < cnt; i++) {
		cout << arr[i] << "\n";
	}

	return 0;
}