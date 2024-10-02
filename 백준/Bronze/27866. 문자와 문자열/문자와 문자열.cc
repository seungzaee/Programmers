#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char ary[1000];
	scanf("%s", &ary);

	int a = 0;
	scanf("%d", &a);

	printf("%c", ary[a-1]);
	return 0;
 }
