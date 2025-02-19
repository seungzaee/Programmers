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
	cin >> n;

	map <int, int> ma;

	for (int i = 0; i < n; i++) {
		int num = 0;
		cin >> num;
		if (ma.find(num) != ma.end()) {
			ma[num]++;
		}
		else
			ma.insert({ num, 1 });
	}

	cin >> m;
	vector <int> v;

	for (int i = 0; i < m; i++) {
		int num = 0;
		cin >> num;
		v.push_back(num);
	}

	for (int i = 0; i < m; i++) {
		cout << ma[v[i]] << " ";
	}

	return 0;
}