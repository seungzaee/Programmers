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

	string str = "";
	cin >> str;

	set <string> s;

	int len = str.length();

	for (int i = 1; i <= len; i++) {
		for (int j = 0; j + i <= len; j++) {
			s.insert(str.substr(j, i));
		}
	}
	cout << s.size();
	return 0;
}