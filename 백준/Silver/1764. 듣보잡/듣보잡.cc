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

	set <string> nolis;
	set <string> res;

	for (int i = 0; i < n; i++) {
		string str = "";
		cin >> str;
		nolis.insert(str);
	}

	int cnt = 0;
	for (int i = 0; i < m; i++) {
		string str = "";
		cin >> str;
		if (nolis.find(str) != nolis.end()) {
			cnt++;
			res.insert(str);
		}
	}
	cout << cnt << "\n";
	for (auto i : res) {
		cout << i << "\n";
	}

	return 0;
}