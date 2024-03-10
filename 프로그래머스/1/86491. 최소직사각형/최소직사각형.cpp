#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) { 
    vector <int> garo;
    vector <int> sero;
    for(int i =0; i < sizes.size(); i++){
        if(sizes[i][0] > sizes[i][1]){
            garo.push_back(sizes[i][0]);
            sero.push_back(sizes[i][1]);
        }
        else{
            garo.push_back(sizes[i][1]);
            sero.push_back(sizes[i][0]);
        }
    }
    
    int garo_max = *max_element(garo.begin(), garo.end());
    int sero_max = *max_element(sero.begin(), sero.end());
    
    return garo_max * sero_max;
}