#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<string.h>

int main()
{
	char ary[1000000] = { 0 };
	scanf("%[^\n]s", ary);

	char *ptr = strtok(ary, " ");

	int cnt = 0;

	while (ptr != NULL)
	{
		cnt++;
		ptr = strtok(NULL, " ");
	}

	printf("%d", cnt);

	return 0;
 }
