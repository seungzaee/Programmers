#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for(int i = 0; i < s.size(); i++){
        if((int)'A' <= (int)s[i] && (int)'Z' >= (int)s[i]){
            if((int)s[i] + n > (int)'Z'){
                int tmp = (int)s[i] + n - (int)'Z';
                answer += (int)'A' + tmp - 1;
            }
            else
                answer += (int)s[i] + n;
        }
        else if((int)'a' <= (int)s[i] && (int)'z' >= (int)s[i]){
            if((int)s[i] + n > (int)'z'){
                int tmp = (int)s[i] + n - (int)'z';
                answer += (int)'a' + tmp - 1;
            }
            else
                answer += (int)s[i] + n;
        }
        else if(s[i] == ' ')
            answer += ' ';
    }
    return answer;
}