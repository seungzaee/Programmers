#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int cnt_p = 0;
    int cnt_y = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'p' || s[i] == 'P') {
            cnt_p += 1;
        }
        if (s[i] == 'y' || s[i] == 'Y') {
            cnt_y += 1;
        }
    }
    if (cnt_p != cnt_y) {
        answer = false;
        return answer;
    }

    return answer;
}