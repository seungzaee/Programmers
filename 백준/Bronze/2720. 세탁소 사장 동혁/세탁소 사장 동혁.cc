#include <iostream>
#include <vector>

using namespace std;

int main() {
	int q = 25;
	int d = 10;
	int n = 5;
	int p = 1;

	int cnt = 0;
	cin >> cnt;
	vector<int> v;

	for (int i = 0; i < cnt; i++) {
		int num = 0;
		cin >> num;
		v.push_back(num);
	}

	for (int i = 0; i < cnt; i++) {
		cout << v[i] / q << ' ';
		v[i] %= q;

		cout << v[i] / d << ' ';
		v[i] %= d;

		cout << v[i] / n << ' ';
		v[i] %= n;

		cout << v[i] / p << '\n';

	}

	return 0;
}