#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
#include<string>

using namespace std;

int main() {
	int cnt, num;
	cin >> cnt >> num;
	map <string, string> kname;
	map <string, string> knum;

	for (int i = 0; i < cnt; i++) {
		string str = "";
		cin >> str;
		kname.insert({str, to_string(i + 1)});
		knum.insert({ to_string(i + 1), str });
	}

	vector <string> v;

	for (int i = 0; i < num; i++) {
		string str = "";
		cin >> str;
		v.push_back(str);
	}

	for (int i = 0; i < num; i++) {
		if (kname.find(v[i]) != kname.end()) {
			cout << kname[v[i]] << "\n";
		}
		else
			cout << knum[v[i]] << "\n";
	}

	return 0;
}