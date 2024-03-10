#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int t_size = t.size();
    int p_size = p.size();
    for(int i = 0; i < t_size - p_size + 1; i++){
        string check;
        if(p_size == 1)
            check = t[i];
        else if(p_size == t_size)
            check = t.substr(i);
        else
            check = t.substr(i, p_size);
        long long t_tmp = stoll(check);
        long long p_tmp = stoll(p);
        if(t_tmp <= p_tmp){
            answer += 1;
        }
    }
    return answer;
}