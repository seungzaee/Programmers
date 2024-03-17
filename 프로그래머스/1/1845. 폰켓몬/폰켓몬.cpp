#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    int max = nums.size() / 2;
    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
    int ponketmon = nums.size();
    if (ponketmon >= max)
        answer += max;
    else
        answer += ponketmon;
    return answer;
}