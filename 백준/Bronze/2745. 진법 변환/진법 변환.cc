#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main() {
	string str;
	int num;
	cin >> str >> num;
	char arr[100];
	for (int i = 0; i < str.size(); i++) {
		arr[i] = str[i];
	}
	// 알파벳 - 55
	int res = 0;
	int n = 0;
	int a = 0;
	for (int i = str.size() - 1; i >= 0; i--) {
		if (arr[i] > 63) {
			a = arr[i] - 55;
		}
		else
			a = arr[i] - 48;
		res += a * pow(num, n);
		n++;
	}
	cout << res;
	return 0;
}