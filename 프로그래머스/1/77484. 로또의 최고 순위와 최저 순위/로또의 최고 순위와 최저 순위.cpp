#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int cnt = 0;
    int zero = 0;
    for(int i = 0; i < lottos.size(); i++){
        if(lottos[i] == 0){
            zero += 1;
            }
        for(int j = 0; j < win_nums.size(); j++){
            if(lottos[i] == win_nums[j]){
                cnt += 1;
            }
        }
    }
    int max = cnt + zero;
    int min = cnt;
    if(max == 0)
        answer.push_back(6);
    else
        answer.push_back(7 - max);
    if(min < 2)
        answer.push_back(6);
    else
        answer.push_back(7 - min);
    return answer;
}