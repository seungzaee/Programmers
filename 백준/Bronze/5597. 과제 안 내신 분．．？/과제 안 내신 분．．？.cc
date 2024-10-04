#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int ary[30] = { 0 };

    for (int i = 0; i < 30; i++)
    {
        ary[i] = i + 1;
    }

    int pass[30] = { 0 };
    for (int j = 0; j < 28; j++)
    {
        scanf("%d", &pass[j]);
        for (int k = 0; k < 30; k++)
        {
            if (ary[k] == pass[j])
                ary[k] = 0;
        }
    }

    for (int i = 0; i < 30; i++)
    {
        if (ary[i] != 0)
            printf("%d\n", ary[i]);
    }
    return 0;
}
