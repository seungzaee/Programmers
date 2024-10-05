#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 올바른 개수 킹 1, 퀸 1, 룩 2, 비숍 2, 나이트 2, 폰 8

int main()
{
	int a = 0;
	scanf("%d", &a);
	int space = a-1;
	int star = 1;
	int rspace = 1;
	int rstar = a*2 -3;

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < space; j++)
		{
			printf(" ");
		}
		space--;
		for (int k = 0; k < star; k++)
		{
			printf("*");
		}
		star = star + 2;
		printf("\n");
	}

	for (int i = 0; i < a - 1; i++)
	{
		for (int j = 0; j < rspace; j++)
		{
			printf(" ");
			if (rspace == a)
				break;
		}
		rspace++;
		for (int k = 0; k < rstar; k++)
		{
			printf("*");
		}
		rstar = rstar - 2;
		printf("\n");
	}
	return 0;
 }
