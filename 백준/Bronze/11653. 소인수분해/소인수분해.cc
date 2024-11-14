#include<iostream>

using namespace std;

int main() {
	int num;
	cin >> num;
	
	int div = 2;
	while (true) {
		if (div > num) {
			break;
		}
		if (num % div == 0) {
			cout << div << "\n";
			num /= div;
			div = 2;
			continue;
		}
		div++;
	}
	return 0;
}