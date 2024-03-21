#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    vector<char> num = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    sort(X.begin(), X.end(), greater<>());
    for(auto n : num){
        int cnt1 = 0;
        int cnt2 = 0;
        for(int i = 0; i < X.size(); i++){
            if(n == X[i]){
                cnt1 += 1;
            }
        }
        for(int i = 0; i < Y.size(); i++){
            if(n == Y[i]){
                cnt2 += 1;
            }
        }
        if(cnt1 > cnt2){
            for(int i = 0; i < cnt2; i++){
                answer += n;
            }
        }
        else{
            for(int i = 0; i < cnt1; i++){
                answer += n;
            }
        }
    }
    sort(answer.begin(), answer.end(), greater<>());
    
    if(answer.size() == 0)
        answer = "-1";
    if(answer[0] == '0')
        answer = "0";
    
    return answer;
}