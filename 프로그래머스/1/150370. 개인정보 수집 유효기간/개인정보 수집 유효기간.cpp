#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    unordered_map<char, int> um;
    // 약관종류와 유효기간 입력
    for(auto s : terms){
        um.insert({s[0], stoi(s.substr(s.find(' ') + 1))});
    }
    int today_y = stoi(today.substr(0, 4));
    int today_m = stoi(today.substr(5, 7));
    int today_d = stoi(today.substr(8, 10));
    int total_today_d = today_y*12*28 + today_m*28 + today_d;
    for(int i = 0; i < privacies.size(); i++){
        int terms_month = um[privacies[i][privacies[i].size() - 1]]; // 해당 약관의 유효 기간
        int year = stoi(privacies[i].substr(0, 4));
        int month = stoi(privacies[i].substr(5, 7));
        int day = stoi(privacies[i].substr(8, 10));
        int total_day = year*12*28 + month*28 + day + terms_month*28;
        if(total_day <= total_today_d)
            answer.push_back(i + 1);
        cout << year << month << day << endl;
    }
    return answer;
}