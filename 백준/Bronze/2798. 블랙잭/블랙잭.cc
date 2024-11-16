#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> vec;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		vec.push_back(num);
	}

	int res = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				int sum = 0;
				sum = vec[i] + vec[j] + vec[k];
				if (sum > res && sum <= m)
					res = sum;
			}
		}
	}
	cout << res;
	return 0;
}