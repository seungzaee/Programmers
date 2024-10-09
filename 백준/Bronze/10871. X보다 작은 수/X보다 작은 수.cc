#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);

	int ary[10000] = { 0 };

	for (int i = 0; i < a; i++)
	{
		scanf("%d", &ary[i]);
	}
	for (int i = 0; i < a; i++)
	{
		if (ary[i] <  b)
			printf("%d ", ary[i]);
	}
	return 0;
}