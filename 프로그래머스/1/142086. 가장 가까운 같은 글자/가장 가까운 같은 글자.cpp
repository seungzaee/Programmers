#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<char> check;
    vector<int> answer;
    check.push_back(s[0]);
    answer.push_back(-1);
    for(int i = 1; i < s.size(); i++){
        int cnt = 0;
        for(int j = 0; j < check.size(); j++){
            if(check[j] == s[i]){
                cnt = i - j;
            }
        }
        check.push_back(s[i]);
        if(cnt != 0)
            answer.push_back(cnt);
        else
            answer.push_back(-1);
    }
    return answer;
}