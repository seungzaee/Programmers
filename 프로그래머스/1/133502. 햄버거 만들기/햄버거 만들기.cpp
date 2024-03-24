#include <string>
#include <vector>
#include <stack>
#include <iostream>
using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    vector<int> burger;
    for(int i = 0; i < ingredient.size(); i++){
        if(ingredient[i] == 1 && burger.size() >= 3){
            int idx = burger.size();
            if(burger[idx - 1] == 3 && burger[idx - 2] == 2 && burger[idx - 3] == 1){
                answer += 1;
                burger.pop_back();
                burger.pop_back();
                burger.pop_back();
            }
            else
                burger.push_back(ingredient[i]);
        }
        else
            burger.push_back(ingredient[i]);
    }
    return answer;
}