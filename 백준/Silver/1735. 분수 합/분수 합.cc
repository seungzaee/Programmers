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

	int num1, num2;
	int num3, num4;

	cin >> num1 >> num2;
	cin >> num3 >> num4;

	int bunja, bunmo;

	bunmo = (num2 * num4) / gcd(num2, num4);
	bunja = bunmo / num2 * num1 + bunmo / num4 * num3;

	int res1, res2;

	res1 = bunja / gcd(bunja, bunmo);
	res2 = bunmo / gcd(bunja, bunmo);

	cout << res1 << " " << res2;

	return 0;
}