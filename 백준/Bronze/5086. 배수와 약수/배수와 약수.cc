#include<iostream>
#include<string>

using namespace std;

int main() {
	int num1;
	int num2;
	while (true) {
		cin >> num1 >> num2;
		if (num1 == 0 && num2 == 0)
			break;
		if (num2 % num1 == 0)
			cout << "factor" << "\n";
		else if (num1 % num2 == 0)
			cout << "multiple" << "\n";
		else
			cout << "neither" << "\n";
	}
	return 0;
}