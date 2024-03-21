#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<bool> clothes(n, true);
    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());
    // 여유분 가져온 사람이 도난당하면 reserve, lost 둘 다에서 제외해야함
    for(int i = 0; i < lost.size(); i++){
        for(int j = 0; j < reserve.size(); j++){
            if(lost[i] == reserve[j]){
                lost[i] = -1;
                reserve[j] = -1;
            }
        }
    }
    for(int i = 0; i < lost.size(); i++){
        if(lost[i] == -1)
            continue;
        else
            clothes[lost[i] - 1] = false;
    }// 잃어버린 체육복 false로 변경
    for(int i = 0; i < reserve.size(); i++){
        reserve[i] -= 1; // reserve index로 맞춰줌
    }
    for(int i = 0; i < reserve.size(); i++){
        if(reserve[i] == -2){
            continue;
        }
        else if(reserve[i] == 0){
            if(clothes[reserve[i] + 1] == false){
                clothes[reserve[i] + 1] = true;
                continue;
            }
        }
        else if(clothes[reserve[i] - 1] == false){
            clothes[reserve[i] - 1] = true;
            continue;
        }
        else if(clothes[reserve[i] + 1] == false){
            clothes[reserve[i] + 1] = true;
            continue;
        }
        else if(reserve[i] == n - 1){
            if(clothes[reserve[i] - 1] == false){
                clothes[reserve[i] - 1] = true;
                continue;
            }
        }
    }
    for(int i = 0; i < clothes.size(); i++){
        if(clothes[i] == true)
            answer += 1;
    }
    return answer;
}