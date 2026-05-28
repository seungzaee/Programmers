#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    int long long temp = n;
    int len = 0;
    while (temp > 0) {
        temp /= 10;
        len++;
    }
    
    int* answer = (int*)malloc(sizeof(int) * len);
    int idx = 0;
    
    while (n > 0) {
        int res = n % 10;
        answer[idx] = res;
        idx++;
        n = n / 10;
    }
    return answer;
}