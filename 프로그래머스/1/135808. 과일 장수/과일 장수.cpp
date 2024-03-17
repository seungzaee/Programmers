#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    int idx = score.size() - m;
    sort(score.begin(), score.end());
    for(int i = 0; i < score.size() / m; i++){
        answer += score[idx] * m;
        idx -= m;
    }
    return answer;
}