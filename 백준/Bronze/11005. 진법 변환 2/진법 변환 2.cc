#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main() {
	int num = 0;
	int target = 0;
	cin >> num >> target;
	int arr[100];
	int i = 0;
	do {
		arr[i] = num % target;
		num = num / target;
		i++;
	} while (num != 0);

	for (int j = i - 1; j >= 0; j--) {
		//cout << arr[j];
		if (arr[j] >= 10) {
			int out = arr[j] + 55;
			cout << (char)out;
		}
		else
			cout << arr[j];
	}
	return 0;
}