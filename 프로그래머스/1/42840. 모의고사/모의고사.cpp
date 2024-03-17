#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> result;
    vector<int> supo1 = {1, 2, 3, 4, 5};
    int cnt1 = 0;
    int s1 = 0;
    vector<int> supo2 = {2, 1, 2, 3, 2, 4, 2, 5};
    int cnt2 = 0;
    int s2 = 0;
    vector<int> supo3 = {3, 3, 1, 1, 2 ,2, 4, 4, 5, 5};
    int cnt3 = 0;
    int s3 = 0;
    for(int i = 0; i < answers.size(); i++){
        if(answers[i] == supo1[s1]){
            cnt1 += 1;
        }
        s1 += 1;
        if(s1 > 4)
            s1 = 0;
        if(answers[i] == supo2[s2]){
            cnt2 += 1;
        }
        s2 += 1;
        if(s2 > 7)
            s2 = 0;
        if(answers[i] == supo3[s3]){
            cnt3 += 1;
        }
        s3 += 1;
        if(s3 > 9)
            s3 = 0;
    }
    if(cnt1 > cnt2 && cnt1 > cnt3)
        result.push_back(1);
    if(cnt2 > cnt1 && cnt2 > cnt3)
        result.push_back(2);
    if(cnt3 > cnt1 && cnt3 > cnt2)
        result.push_back(3);
    if(cnt1 == cnt2 && cnt1 > cnt3){
        result.push_back(1);
        result.push_back(2);
    }
    if(cnt2 == cnt3 && cnt2 > cnt1){
        result.push_back(2);
        result.push_back(3);
    }
    if(cnt1 == cnt3 && cnt1 > cnt2){
        result.push_back(1);
        result.push_back(3);
    }
    if(cnt1 == cnt2 && cnt2 == cnt3){
        result.push_back(1);
        result.push_back(2);
        result.push_back(3);
    }
    return result;
}