#include<iostream>
#include<string>

using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int arr[4];
	arr[0] = a;
	arr[1] = b;
	arr[2] = c - a;
	arr[3] = d - b;
	int res = arr[0];
	for (int i = 0; i < 4; i++) {
		if (res > arr[i])
			res = arr[i];
	}
	cout << res;
	return 0;
}