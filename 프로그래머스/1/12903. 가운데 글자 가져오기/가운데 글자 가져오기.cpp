#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int cnt = 0;
    cnt = s.size() / 2 - 1;
    if(s.size() % 2 == 0){
        answer.append(s.substr(cnt,2));
    }
    else{
        answer.append(s.substr(cnt+1,1));
    }
    return answer;
}