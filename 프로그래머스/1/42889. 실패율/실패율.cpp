#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, double> a, pair<int, double> b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.second > b.second;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<int, double>> fail;
    int users = stages.size();
    for(int i = 1; i <= N; i++){
        int cnt = 0;
        for(int j = 0; j < stages.size(); j++){
            if(i == stages[j]){
                cnt += 1;
            }
        }
        if(cnt == 0){
            fail.push_back({i, 0.0});
        }
        else{
            double per = (double) cnt / users;
            fail.push_back({i, per});
            users -= cnt;
        }
    }
    sort(fail.begin(), fail.end(), compare);
    
    for(int i = 0; i < fail.size(); i++){
        answer.push_back(fail[i].first);
    }
    
    return answer;
}