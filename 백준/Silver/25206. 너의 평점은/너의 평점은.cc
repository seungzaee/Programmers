#include <iostream>
#include<sstream>
#include<vector>
#include <string>

using namespace std;

int main() {
	float score = 0;
	int sum = 0;

	vector<pair<string, float>> v;
	v.push_back(pair<string, float>("A+", 4.5));
	v.push_back(pair<string, float>("A0", 4.0));
	v.push_back(pair<string, float>("B+", 3.5));
	v.push_back(pair<string, float>("B0", 3.0));
	v.push_back(pair<string, float>("C+", 2.5));
	v.push_back(pair<string, float>("C0", 2.0));
	v.push_back(pair<string, float>("D+", 1.5));
	v.push_back(pair<string, float>("D0", 1.0));
	v.push_back(pair<string, float>("F", 0.0));

	for (int i = 0; i < 20; i++) {
		string str;
		getline(cin, str);

		stringstream ss(str);
		string sub;
		vector<string> vs;
		while (ss >> sub) {
			vs.push_back(sub);
		}

		for (int i = 0; i < v.size(); i++) {
			if (vs[2] == v[i].first) {
				float hakjum = stof(vs[1]);
				score += hakjum * v[i].second;
				sum += hakjum;
				break;
			}
		}
	}

	cout << score / sum;

	return 0;
}