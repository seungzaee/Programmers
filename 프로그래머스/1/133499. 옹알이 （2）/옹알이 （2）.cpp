#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    for(auto str : babbling){
        int check = 0;
        for(int i = 0; i < str.size(); ){
            if(str.substr(i, 3) == "aya" && check != 1){
                i += 3;
                check = 1;
            }
            else if(str.substr(i, 2) == "ye" && check != 2){
                i += 2;
                check = 2;
            }
            else if(str.substr(i, 3) == "woo" && check != 3){
                i += 3;
                check = 3;
            }
            else if(str.substr(i, 2) == "ma" && check != 4){
                i += 2;
                check = 4;
            }
            else{
                check = 0;
                break;
            }
        }
        if(check)
            answer += 1;
    }
    return answer;
}