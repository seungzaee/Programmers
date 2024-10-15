#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int n = 0, m = 0;
    scanf("%d %d", &n, &m);

    int ary[100] = { 0 };

    for (int i = 0; i < 100; i++)
    {
        ary[i] = i+1;
    }

    for (int j = 0; j < m; j++)
    {
        int a = 0, b = 0;
        scanf("%d %d", &a, &b);
        int change1 = ary[a - 1];
        int change2 = ary[b - 1];
        ary[a - 1] = change2;
        ary[b - 1] = change1;
    }

    for (int k = 0; k < n; k++)
    {
        printf("%d ", ary[k]);
    }
    return 0;
}
