#include<iostream>

using namespace std;

int main() {
	int num;
	cin >> num;
	int cnt = 0;
	int add = 1;
	int upper = 0;
	int undder = 1;
	while (cnt < num) {
		cnt += add;
		add++;
		upper++;
	}
	
	if (add % 2 == 1) {
		while (cnt != num) {
			cnt--;
			upper--;
			undder++;
		}
		cout << upper << "/" << undder;
	}
	else {
		while (cnt != num) {
			cnt--;
			upper--;
			undder++;
		}
		cout << undder << "/" << upper;
	}
	return 0;
}