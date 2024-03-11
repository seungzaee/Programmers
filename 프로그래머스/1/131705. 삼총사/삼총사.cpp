#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    for(int i = 0; i < number.size() - 2; i++){
        for(int j = i + 1; j < number.size() - 1; j++){
            for(int k = j + 1; k < number.size(); k++){
                vector<int> sum;
                sum.push_back(number[i]);
                sum.push_back(number[j]);
                sum.push_back(number[k]);
                int res = sum[0] + sum[1] + sum[2];
                if(res == 0)
                    answer += 1;
                sum.clear();
            }
        }
    }
    return answer;
}