#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    int sum = 0;
    vector<int> day = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<string> yoil = {"THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED"};
    if(a == 1)
        sum = b;
    else{
        for(int i = 0; i < a - 1; i++){
            sum += day[i];
        }
        sum += b;
    }
    int tmp = sum % 7;
    answer += yoil[tmp];
    return answer;
}