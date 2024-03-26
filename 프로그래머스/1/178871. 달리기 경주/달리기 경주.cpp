#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    unordered_map<string, int> m;
    for(int i = 0; i < players.size(); i++)
        m.insert({players[i], i}); // 이름과 순위
    for(int i = 0; i < callings.size(); i++){
        string call = callings[i]; // 순위 상승 선수 이름
        int rank = m[call]; // 상승 선수 현재 순위
        string down = players[rank - 1]; // 순위 하락 선수 이름
        players[rank - 1] = call; // 순위 상승 선수 이름 대입
        players[rank] = down; // 순위 하락 선수 이름 대입
        
        m[call] = rank - 1; // map 순위 바꿔줌
        m[down] = rank; // map 순위 바꿔줌
    }
    return players;
}