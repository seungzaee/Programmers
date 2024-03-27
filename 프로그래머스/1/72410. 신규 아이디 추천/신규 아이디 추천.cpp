#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {
    string answer = "";
    for(int i = 0; i < new_id.size(); i++){
        if('a' <= new_id[i] && new_id[i] <= 'z')
            continue; // 소문자인 경우 그냥 진행
        else if(isdigit(new_id[i]))
            continue; // 숫자인 경우 그냥 진행
        else if('A' <= new_id[i] && new_id[i] <= 'Z')
            new_id[i] = new_id[i] + 32; // 대문자인 경우 소문자로 변환
        else if(new_id[i] != '.' && new_id[i] != '_' && new_id[i] != '-'){
            new_id.erase(new_id.begin() + i); // 기호 제거
            i--; // 인덱스 하나 앞으로 당겨줌
        }
    }
    
    for(int i = 0; i < new_id.size(); i++){
        if(new_id[i] == '.' && new_id[i + 1] == '.'){
            new_id.erase(new_id.begin() + i); // .. 제거
            i--; // 인덱스 하나 앞으로 당겨줌
        }
    }
    
    if(new_id[0] == '.') // 시작이 .인 경우 제거
        while(new_id[0] == '.')
            new_id.erase(new_id.begin()); 
    if(new_id[new_id.size() - 1] == '.') // 마지막이 .인 경우 제거
        while(new_id[new_id.size() - 1] == '.')
            new_id.erase(new_id.end() - 1);
    if(new_id.size() == 0) // 크기가 0인 경우 a추가
        new_id += 'a';
    if(new_id.size() >= 16){ // 크기가 16 이상인 경우
        new_id.erase(new_id.begin() + 15, new_id.end());
        if(new_id[new_id.size() - 1] == '.') // 마지막이 .인 경우 제거
            while(new_id[new_id.size() - 1] == '.')
                new_id.erase(new_id.end() - 1);
    }
    if(new_id.size() <= 2){
        while(new_id.size() != 3)
            new_id += new_id[new_id.size() - 1];
    }
    return new_id;
}