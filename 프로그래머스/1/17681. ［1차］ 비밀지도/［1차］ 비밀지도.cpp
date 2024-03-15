#include <string>
#include <vector>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    for(int i = 0; i < arr1.size(); i++){
        vector<int> ejinsoo1;
        int cnt1 = 0;
        vector<int> ejinsoo2;
        int cnt2 = 0;
        while(arr1[i] != 0){
            if(arr1[i] % 2 == 1){
                ejinsoo1.push_back(1);
                cnt1 += 1;
            }
            else{
                ejinsoo1.push_back(0);
                cnt1 += 1;
            }
            arr1[i] /= 2;
        }
        
        if(cnt1 < n){
            for(int k = 0; k < n - cnt1; k++){
                ejinsoo1.push_back(0);
            }
        }
        
        while(arr2[i] != 0){
            if(arr2[i] % 2 == 1){
                ejinsoo2.push_back(1);
                cnt2 += 1;
            }
            else{
                ejinsoo2.push_back(0);
                cnt2 += 1;
            }
            arr2[i] /= 2;
        }
        
        if(cnt2 < n){
            for(int k = 0; k < n - cnt2; k++){
                ejinsoo2.push_back(0);
            }
        }
        
        string sharp = "";
        for(int i = n - 1; i >= 0; i--){
            if(ejinsoo1[i] != 0 || ejinsoo2[i] != 0)
                sharp += "#";
            else
                sharp += " ";
        }
        answer.push_back(sharp);
    }
    return answer;
}