#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    int start_w, start_h;
    // 출발점 찾기
    for(int i = 0; i < park.size(); i++){
        for(int j = 0; j < park[i].size(); j++){
            if(park[i][j] == 'S'){
                start_w = i; // 출발점 행
                start_h = j; // 출발점 렬
                break;
            }
        }
    }
    cout << start_w << start_h << endl;
    for(int i = 0; i < routes.size(); i++){
        int cnt = routes[i][2] - '0'; // 이동 횟수
        if(routes[i][0] == 'E'){
            int mark_start_h = start_h;
            int check_E = 0;
            for(int j = 0; j < cnt; j++){
                mark_start_h += 1;
                cout<< mark_start_h << endl;
                if(mark_start_h == park[0].size())
                    break;
                if(park[start_w][mark_start_h] == 'X')
                    break;
                check_E += 1;
            }
            if(check_E == cnt)
                start_h = mark_start_h;
        }
        else if(routes[i][0] == 'W'){
            int mark_start_h = start_h;
            int check_W = 0;
            for(int j = 0; j < cnt; j++){
                mark_start_h -= 1;
                if(mark_start_h < 0)
                    break;
                if(park[start_w][mark_start_h] == 'X')
                    break;
                check_W += 1;
            }
            if(check_W == cnt)
                start_h = mark_start_h;
        }
        else if(routes[i][0] == 'S'){
            int mark_start_w = start_w;
            int check_S = 0;
            for(int j = 0; j < cnt; j++){
                mark_start_w += 1;
                if(mark_start_w == park.size())
                    break;
                if(park[mark_start_w][start_h] == 'X')
                    break;
                check_S += 1;
            }
            if(check_S == cnt)
                start_w = mark_start_w;
        }
        else if(routes[i][0] == 'N'){
            int mark_start_w = start_w;
            int check_N = 0;
            for(int j = 0; j < cnt; j++){
                mark_start_w -= 1;
                if(mark_start_w < 0)
                    break;
                if(park[mark_start_w][start_h] == 'X')
                    break;
                check_N += 1;
            }
            if(check_N == cnt)
                start_w = mark_start_w;
        }
        cout << start_w << ' ' << start_h << endl;
    }
    answer.push_back(start_w);
    answer.push_back(start_h);
    return answer;
}