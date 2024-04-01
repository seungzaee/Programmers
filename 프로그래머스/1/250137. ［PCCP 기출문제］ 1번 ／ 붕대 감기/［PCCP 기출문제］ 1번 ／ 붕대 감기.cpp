#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

// bandage 기술 시전 시간, 1초당 회복량, 추가 회복량
// 종료 조건 health <= 0, attacks 시간까지 버티기
int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int answer = 0;
    unordered_map<int, int> atk;
    for(auto a : attacks)
        atk.insert({a[0], a[1]});
    int skill_time = bandage[0]; // 스킬 시전 시간
    int heal_per_s = bandage[1]; // 초당 회복량
    int heal_plus = bandage[2]; // 추가 회복량
    int max_health = health;
    int time = attacks[attacks.size() - 1][0]; // 몬스터 마지막 공격 시간
    int con_time = 0; // 기술 시전 시간
    for(int i = 1; i <= time; i++){
        if(atk[i]){ // 공격받는 경우
            health -= atk[i];
            con_time = 0;
        }
        else{ // 회복하는 경우
            con_time += 1;
            // 체력이 최대인 경우
            if(health == max_health){
                cout<< health << ' ' <<con_time << endl;
                continue;
            }
            // 연속 시전 성공시
            else if(con_time == skill_time){
                con_time = 0;
                // 최대 체력보다 많이 회복하는 경우
                if(health + heal_per_s + heal_plus >= max_health){
                    health = max_health;
                }
                // 추가 회복량
                else{
                    health += heal_per_s + heal_plus;
                }
            }
            else if(health + heal_per_s >= max_health){
                health = max_health;
            }
            else{ // 초당 회복하는 경우
                health += heal_per_s;
            }
        }
        if(health <= 0)
            return -1;
        cout<< health << ' ' <<con_time << endl;
    }
    return health;
}