#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    vector<int> w; // 행
    vector<int> h; // 렬
    for(int i = 0; i < wallpaper.size(); i++){
        for(int j = 0; j <wallpaper[i].size(); j++){
            if(wallpaper[i][j] == '#'){
                w.push_back(i);
                h.push_back(j);
            }
        }
    }
    sort(w.begin(), w.end());
    sort(h.begin(), h.end());
    answer.push_back(w[0]);
    answer.push_back(h[0]);
    answer.push_back(w[w.size() - 1] + 1);
    answer.push_back(h[h.size() - 1] + 1);
    return answer;
}