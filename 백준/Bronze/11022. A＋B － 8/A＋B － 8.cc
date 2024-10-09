#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	scanf("%d", &a);

	int b[100] = { 0 };
	int c[100] = { 0 };

	for (int i = 0; i < a; i++)
	{
		scanf("%d %d",&b[i], &c[i]);
	}

	for (int i = 0; i < a; i++)
	{
		printf("Case #%d: %d + %d = %d\n", i+1,b[i], c[i],  b[i] + c[i]);
	}

	return 0;
}