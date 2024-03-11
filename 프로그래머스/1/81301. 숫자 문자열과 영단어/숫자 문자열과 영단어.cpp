#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    vector<string> num = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    vector<string> alpha = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string str = "";
    string check = "";
    for(int i = 0; i < s.size(); i++){
        if((int)'a' <= (int)s[i] && (int)s[i] <= (int)'z'){
            check += s[i];
            for(int j = 0; j < 10; j++){
                if(alpha[j] == check){
                    str += num[j];
                    check = "";
                    break;
                    }
                }
        }
        else
            str += s[i];
    }
    answer = stoi(str);
    return answer;
}