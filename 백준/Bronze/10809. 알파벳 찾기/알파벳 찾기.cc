#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ASCII code 알파벳 소문자는 97~122이다.
int main()
{
	char ary[1000] = { 0 };
	scanf("%s", ary);

	for (int i = 97; i < 123; i++)
	{
		for (int j = 0; j <= 100; j++)
		{
			if (i == ary[j])
			{
				printf("%d ", j);
				break;
			}
			if (j == 100)
			{
				printf("-1 ");
			}
		}
	}
	return 0;
 }
