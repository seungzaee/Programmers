#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int arr[1000] = {};
	int n, k;
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n);

	cout << arr[n - k];

	return 0;
}