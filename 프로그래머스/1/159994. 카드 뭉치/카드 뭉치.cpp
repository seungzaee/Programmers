#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    int cnt1 = 0;
    int cnt2 = 0;
    for(int i = 0; i < goal.size(); i++){
        if(goal[i] == cards1[cnt1]){
            cnt1 += 1;
        }
        else if(goal[i] == cards2[cnt2]){
            cnt2 += 1;
        }
        else{
            return "No";
        }
    }
    return "Yes";
}