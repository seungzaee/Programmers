#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    vector <char> personality = {'R', 'T', 'C', 'F', 'J', 'M', 'A', 'N'}; // 성격 종류
    unordered_map<char, int> um;
    for(auto c : personality)
        um.insert({c, 0});
    for(int i = 0; i < choices.size(); i++){
        if(1 <= choices[i] && choices[i] <= 3){
            char per = survey[i][0];
            int point = abs(choices[i] - 4);
            um[per] += point;  
        }
        else if(choices[i] == 4){
            continue;
        }
        else{
            char per = survey[i][1];
            int point = abs(choices[i] - 4);
            um[per] += point; 
        }
    }
    for(auto s : um){
        cout << s.first << ' ' << s.second << endl;
    }
    answer += (um['R'] >= um['T']) ? 'R' : 'T';
    answer += (um['C'] >= um['F']) ? 'C' : 'F';
    answer += (um['J'] >= um['M']) ? 'J' : 'M';
    answer += (um['A'] >= um['N']) ? 'A' : 'N';
    return answer;
}