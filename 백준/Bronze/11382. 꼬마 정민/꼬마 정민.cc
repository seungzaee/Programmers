#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	long long a = 0;
	long long b = 0;
	long long c = 0;

	scanf("%lld %lld %lld", &a, &b, &c);

	printf("%lld", a + b + c);

	return 0;
}