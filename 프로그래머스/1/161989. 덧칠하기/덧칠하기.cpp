#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    vector<bool> wall(n, true);
    for(int i = 0; i < section.size(); i++){
        wall[section[i] - 1] = false;
    }
    for(int i = 0; i < wall.size(); i++){
        if(wall[i] == false){
            answer += 1;
            for(int j = i; j < i + m; j++){
                wall[j] = true;
                if(j == n - 1)
                    break;
            }
        }
    }
    return answer;
}