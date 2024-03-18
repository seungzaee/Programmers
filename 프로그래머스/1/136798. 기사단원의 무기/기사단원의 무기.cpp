#include <string>
#include <vector>
#include <math.h>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    vector<int> yaksu;
    for(int i = 1; i <= number; i++){
        int cnt = 0;
        for(int j = 1; j <= sqrt(i); j++){
            if(i % j == 0){
                cnt += 1;
                if(j != i / j)
                    cnt += 1;
            }
        }
        yaksu.push_back(cnt);
    }
    for(int i = 0; i < yaksu.size(); i++){
        if(yaksu[i] > limit){
            answer += power;
        }
        else
            answer += yaksu[i];
    }
    return answer;
}