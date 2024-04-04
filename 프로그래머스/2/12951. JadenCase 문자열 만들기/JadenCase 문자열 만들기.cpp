#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string s) {
    string answer = "";
    istringstream iss(s);
    string tmp;
    while(getline(iss, tmp, ' ')){
        if('a' <= tmp[0] && tmp[0] <= 'z'){
            tmp[0] -= 32;
        }
        for(int i = 1; i < tmp.size(); i++){
            if('A' <= tmp[i] && tmp[i] <= 'Z')
                tmp[i] += 32;
        }
        answer += tmp;
        answer += ' ';
    }
    if(s[s.size() - 1] == ' ')
        return answer;
    else
        answer.erase(answer.end() - 1); 
    return answer;
}