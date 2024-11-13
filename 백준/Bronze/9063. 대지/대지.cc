#include<iostream>

using namespace std;

int main() {
	int num;
	cin >> num;
	if (num == 1) {
		cout << 0;
		return 0;
	}
	int max_x = -10000, max_y = -10000, min_x = 10000, min_y = 10000;
	for (int i = 0; i < num; i++) {
		int x, y;
		cin >> x >> y;
		if (x > max_x)
			max_x = x;
		if (x < min_x)
			min_x = x;
		if (y > max_y)
			max_y = y;
		if (y < min_y)
			min_y = y;
	}
	if (max_y == min_y || max_x == min_x) {
		cout << 0;
		return 0;
	}

	cout << (max_x - min_x) * (max_y - min_y);
	return 0;
}