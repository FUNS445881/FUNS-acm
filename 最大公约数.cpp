#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int m, n, r;
	int p = 0;
	scanf("%d%d", &m, &n);
	if (m < n)
	{
		p = m;
		m = n;
		n = p;
	}
		r = m % n;
	while (r = m%n)
	{
		m = n;
		n = r;
		r = m % n;
	}
	printf("%d\n", n);
	return 0;
}
