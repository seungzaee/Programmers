#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<bool> num(n + 1, true);
    
    for(int i = 2; i * i <= n; i++){
        if(num[i]){
            for(int j = i * i; j <= n ; j += i){
                num[j] = false;
            }
        }
    }
    for(int i = 2; i < num.size(); i++){
        if(num[i])
            answer += 1;
    }
    return answer;
}