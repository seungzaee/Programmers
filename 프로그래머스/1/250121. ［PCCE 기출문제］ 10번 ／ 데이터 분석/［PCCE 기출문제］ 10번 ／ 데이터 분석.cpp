#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int sort_idx;
bool compare(vector<int> v1, vector<int> v2){
    return v1[sort_idx] < v2[sort_idx];
}
vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;
    vector<pair<string, int>> v = {{"code", 0}, {"date", 1}, {"maximum", 2}, {"remain", 3}};
    int idx;
    for(auto a : v){
        if(ext == a.first)
            idx = a.second;
    }
    for(int i = 0; i < data.size(); i++){
        if(data[i][idx] < val_ext)
            answer.push_back(data[i]);
    }
    for(auto a : v){
        if(sort_by == a.first)
            sort_idx = a.second;
    }
    sort(answer.begin(), answer.end(), compare);
    return answer;
}