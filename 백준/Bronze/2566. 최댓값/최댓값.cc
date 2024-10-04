#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int** arr1 = (int**)malloc(sizeof(int*) * 9);
	for (int i = 0; i < 9; i++)
	{
		arr1[i] = (int*)malloc(sizeof(int*) * 9);
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			scanf("%d", &arr1[i][j]);
		}
	}

	int result = 0;
	result = arr1[0][0];
	int rows, cols;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (result <= arr1[i][j])
			{
				result = arr1[i][j];
				rows = i;
				cols = j;
			}
		}
	}

	printf("%d\n", result);
	printf("%d %d", rows+1, cols+1);
	return 0;
}