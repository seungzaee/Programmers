#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int ary[9] = { 0 };

    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &ary[i]);

    }
    int MAX = 0;
    int index = 0;
    for (int i = 0; i < 9; i++)
    {
        if (MAX <= ary[i])
        {
            MAX = ary[i];
            index = i;
        }
    }
    printf("%d\n", MAX);
    printf("%d\n", index+1);

    return 0;
}
