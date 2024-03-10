#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int index = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            index = 0;
            continue;
        }
        if(index % 2){
            s[i] = tolower(s[i]);
        }
        else
            s[i] = toupper(s[i]);
        index++;
    }
    return s;
}