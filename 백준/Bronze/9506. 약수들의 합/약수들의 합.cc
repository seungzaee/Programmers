#include<iostream>
#include<string>

using namespace std;

int main() {
	int num;
	while (true) {
		cin >> num;
		if (num == -1)
			break;
		int div = 1;
		int sum = 0;
		int idx = 0;
		string str;
		while (div != num) {
			if (num % div == 0) {
				sum += div;
				str = str + " " + to_string(div) + " +";
			}
			div++;
		}
		if (sum == num) {
			str.pop_back();
			cout << num << " =" << str;
		}
		else
			cout << num << " is NOT perfect.";
		cout << '\n';
	}
	return 0;
}