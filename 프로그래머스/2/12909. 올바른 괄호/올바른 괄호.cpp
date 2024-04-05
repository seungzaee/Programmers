#include<string>
#include <iostream>

using namespace std;

bool solution(string s){
    bool answer = true;
    int cnt1 = 0;
    int cnt2 = 0;
    if(s[0] == ')' || s[s.size() - 1] == '(')
        return false;
    for(int i = 0; i < s.size(); i++){
        (s[i] == '(') ? (cnt1 += 1) : (cnt2 += 1);
        if(cnt1 < cnt2)
            return false;
    }
    if(cnt1 > cnt2)
        return false;
    return answer;
}