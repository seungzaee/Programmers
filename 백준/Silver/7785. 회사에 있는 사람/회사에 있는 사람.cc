#include<iostream>
#include<algorithm>
#include<map>
#include<set>

using namespace std;

int main() {
	map <string, string, greater<string>> m;
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string name, status;
		cin >> name >> status;
		m[name] = status;
	}

	set <string, greater<string>> s;

	for (auto i : m) {
		if (i.second == "enter") {
			s.insert(i.first);
			cout << i.first << "\n";
		}
	}
	return 0;
}