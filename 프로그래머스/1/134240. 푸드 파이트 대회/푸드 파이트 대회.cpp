#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    
    for(int i = 1; i < food.size(); i++){
        int batch_food = food[i] / 2;
        for(int j = 0; j < batch_food; j++){
            answer += to_string(i);
        }
    }
    
    answer += "0";
    
    for(int i = food.size() - 1; i >= 1; i--){
        int batch_food = food[i] / 2;
        for(int j = 0; j < batch_food; j++){
            answer += to_string(i);
        }
    }
    return answer;
}