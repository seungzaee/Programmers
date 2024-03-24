#include <string>
#include <vector>

using namespace std;

// (h, w - 1), (h, w + 1), (h - 1, w), (h + 1, w)
int solution(vector<vector<string>> board, int h, int w) {
    int answer = 0;
    string find = board[h][w];
    int n = board.size();
    vector<int> h_mv = {0, 1, -1, 0};
    vector<int> w_mv = {1, 0, 0, -1};
    for(int i = 0; i < 4; i++){
        if(0 <= h + h_mv[i] && h + h_mv[i] < n && 0 <= w + w_mv[i] && w + w_mv[i] < n)
            if(find == board[h + h_mv[i]][w + w_mv[i]])
                answer += 1;
    }
    return answer;
}