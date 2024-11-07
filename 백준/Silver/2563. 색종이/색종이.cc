#include<iostream>

using namespace std;

int main() {
	int paper[100][100] = { 0 };

	int cnt = 0;
	cin >> cnt;
	
	int x, y;
	int result = 0;

	while (cnt--) {
		cin >> x >> y;
		for (int i = x - 1; i < x + 9; i++) {
			for (int j = y - 1; j < y + 9; j++) {
				if (paper[i][j] == 0) {
					paper[i][j] = 1;
					result++;
				}
			}
		}
	}
	cout << result;
	return 0;
}