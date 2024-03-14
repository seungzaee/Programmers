#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for(int i = 0; i < commands.size(); i++){
        int start = commands[i][0];
        int end = commands[i][1];
        int cnt = commands[i][2];
        
        vector<int> chuchul;
        
        for(int j = start - 1; j < end; j++){
            chuchul.push_back(array[j]);
        }
        
        sort(chuchul.begin(), chuchul.end());
        
        answer.push_back(chuchul[cnt - 1]);
        
        chuchul.clear();
    }
    return answer;
}