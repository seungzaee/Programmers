#include<iostream>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
#include<string>

using namespace std;

int gcd(int a, int b) {
	while (b != 0) {
		int temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	vector <int> v;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		v.push_back(num);
	}

	vector <int> d;
	vector <int> dp;
	for (int i = 0; i < n - 1; i++) {
		d.push_back(v[i + 1] - v[i]);
		dp.push_back(v[i + 1] - v[i]);
	}

	int igcd = 0;

	for (int i = 0; i < n - 2; i++) {
		d[i + 1] = gcd(d[i], d[i + 1]);
		igcd = d[i + 1];
	}
	
	int res = 0;
	for (int i = 0; i < n - 1; i++) {
		res += dp[i] / igcd - 1;
	}

	cout << res;

	return 0;
}