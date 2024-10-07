#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int ary[10] = { 0 };
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &ary[i]);
    }

    int remain[10] = { 0 };
    for (int j = 0; j < 10; j++)
    {
        remain[j] = ary[j] % 42;
    }

    int allremain[42] = { 0 };
    for (int i = 0; i < 42; i++)
    {
        allremain[i] = i;
    }

    for (int i = 0; i < 10 ;i++)
    {
        for (int j = 0; j < 42; j++)
        {
            if (remain[i] == allremain[j])
                allremain[j] = 100;
        }
    }
    int count = 0;
    for (int i = 0; i < 42; i++)
    {
        if (allremain[i] == 100)
            count++;
    }
    printf("%d", count);
    return 0;
}
