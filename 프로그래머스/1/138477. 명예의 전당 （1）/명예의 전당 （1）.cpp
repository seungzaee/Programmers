#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> jeondang;
    for(int i = 0; i < score.size(); i++){
        if(jeondang.size() < k)
            jeondang.push_back(score[i]);
        else{
            int min1 = *min_element(jeondang.begin(), jeondang.end());
            for(int j = 0; j < k; j++){
                if(min1 < score[i]){
                    jeondang.erase(min_element(jeondang.begin(), jeondang.end()));
                    jeondang.push_back(score[i]);
                    break;
                }
            }
        }
        int min2 = *min_element(jeondang.begin(), jeondang.end());
        answer.push_back(min2);
    }
    return answer;
}