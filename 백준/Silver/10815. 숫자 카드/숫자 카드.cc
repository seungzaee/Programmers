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
	
	set <int> s;

	for (int i = 0; i < n; i++) {
		int num = 0;
		cin >> num;
		s.insert(num);
	}

	cin >> m;
	for (int i = 0; i < m; i++) {
		int num = 0;
		cin >> num;
		if (s.find(num) != s.end())
			cout << 1 << " ";
		else
			cout << 0 << " ";
	}
	return 0;
}