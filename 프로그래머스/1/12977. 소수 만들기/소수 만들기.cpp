#include <vector>
#include <iostream>
#include <math.h>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    vector<int> check;
    for(int i = 0; i < nums.size() - 2; i++){
        for(int j = i + 1; j < nums.size() - 1; j++){
            for(int k = j + 1; k < nums.size(); k++){
                int sum = nums[i] + nums[j] + nums[k];
                check.push_back(sum);
                //cout << sum << endl;
            }
        }
    }
    
    for(int i = 0; i < check.size(); i++){
        int cnt = 0;
        for(int j = 1; j <= sqrt(check[i]); j++){
            if(check[i] % j == 0){
                cnt += 1;
                if(j != check[i] / j)
                    cnt += 1;
            }
        }
        if(cnt == 2){
            answer += 1;
            //cout<<check[i]<<endl;
        }
    }
    return answer;
}