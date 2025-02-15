#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

// pair seocond 기준 오름차순 정렬
bool cmp(pair<int, int>a, pair<int, int>b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}
	else
		return a.second < b.second;
}

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
	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < cnt; i++) {
		cout << v[i].first << " " << v[i].second << "\n";
	}
	return 0;
}