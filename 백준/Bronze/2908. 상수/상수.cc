#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<string.h>

int main()
{
	char a[30] = { 0 };
	char b[30] = { 0 };

	scanf("%s %s", a, b);

	for (int i = 2; i >= 0 ; i--)
	{
		if (a[i] > b[i])
		{
			for (int j = 2; j >= 0; j--)
			{
				printf("%c", a[j]);
			}
			break;
		}
		else if (a[i] < b[i])
		{
			for (int j = 2; j >= 0; j--)
			{
				printf("%c", b[j]);
			}
			break;
		}
	}

	return 0;
 }
