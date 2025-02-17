#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	vector <int> v;
	int cnt = 0;
	cin >> cnt;
	for (int i = 0; i < cnt; i++) {
		int num = 0;
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < cnt; i++) {
		cout << v[i] << "\n";
	}
	return 0;
}