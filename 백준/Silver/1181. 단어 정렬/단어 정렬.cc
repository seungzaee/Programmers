#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

// string 길이 기준으로 정렬
bool cmp(string a, string b) {
	if (a.size() == b.size()) {
		return a < b;
	}
	else
		return a.size() < b.size();
}

int main() {
	vector <string> v;
	int cnt = 0;
	cin >> cnt;
	for (int i = 0; i < cnt; i++) {
		string str = "";
		cin >> str;
		v.push_back(str);
	}

	sort(v.begin(), v.end(), cmp);
	v.erase(unique(v.begin(), v.end()), v.end());

	for (auto i : v) {
		cout << i << "\n";
	}
	return 0;
}