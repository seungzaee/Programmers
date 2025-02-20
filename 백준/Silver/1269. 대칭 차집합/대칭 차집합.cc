#include<iostream>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	set <int> a;
	set <int> b;

	int res = n + m;

	for (int i = 0; i < n; i++) {
		int num = 0;
		cin >> num;
		a.insert(num);
	}

	for (int i = 0; i < m; i++) {
		int num = 0;
		cin >> num;
		if (a.find(num) != a.end()) {
			res -= 2;
		}
	}

	cout << res;

	return 0;
}