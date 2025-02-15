#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	vector <pair<int, int>> v;
	int cnt = 0;
	cin >> cnt;
	for (int i = 0; i < cnt; i++) {
		int x = 0;
		int y = 0;
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < cnt; i++) {
		cout << v[i].first << " " << v[i].second << "\n";
	}
	return 0;
}