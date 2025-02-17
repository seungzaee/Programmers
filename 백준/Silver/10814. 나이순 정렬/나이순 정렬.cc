#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


bool cmp(pair<int, pair<string, int>> a, pair<int, pair<string, int>> b) {
	if (a.first == b.first) {
		return a.second.second < b.second.second;
	}
	else
		return a.first < b.first;
}

int main() {
	vector <pair<int, pair<string, int>>> v; // 나이 이름 가입순서
	int cnt = 0;
	cin >> cnt;
	for (int i = 0; i < cnt; i++) {
		int age = 0;
		string name = "";
		int num = i;
		cin >> age >> name;
		v.push_back(make_pair(age, make_pair(name, num)));
	}
	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < cnt; i++) {
		cout << v[i].first << " " << v[i].second.first << "\n";
	}
	return 0;
}