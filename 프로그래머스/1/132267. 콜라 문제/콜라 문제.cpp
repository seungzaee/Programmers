#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    while (n >= a){
        int cola = n / a * b;
        n = n / a * b + n % a;
        answer += cola;
    }
    return answer;
}