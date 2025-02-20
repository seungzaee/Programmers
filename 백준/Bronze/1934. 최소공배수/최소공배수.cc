#include<iostream>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
#include<string>

using namespace std;

int gcd(int a, int b) {
	while (b != 0) {
		int temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		int num1, num2;
		cin >> num1 >> num2;
		int res = gcd(num1, num2);
		cout << (num1 * num2) / res << "\n";
	}

	return 0;
}