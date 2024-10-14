#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int all = 0;
	scanf("%d", &all);

	int count = 0;
	scanf("%d", &count);

	int a[100] = { 0 };
	int b[100] = { 0 };

	for (int i = 0; i < count; i++)
	{
		scanf("%d %d", &a[i], &b[i]);
	}

	int sum = 0;

	for (int i = 0; i < count; i++)
	{
		sum += a[i] * b[i];
	}

	if (all == sum)
		printf("Yes");
	else
		printf("No");
	return 0;
}