#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	int max_val = max({ a, b, c });
	int min_val = min({ a, b, c });
	int mid_val = a + b + c - max_val - min_val;

	if (max_val >= min_val + mid_val) {
		max_val = min_val + mid_val - 1;
		cout << min_val + mid_val + max_val;
	}
	else
		cout << min_val + mid_val + max_val;
	return 0;
}