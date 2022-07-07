#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int m, n, r;
	int p = 0;
	scanf("%d%d", &m, &n);
	//经过测试，无需比较大小，原理为若m<n,则在第一次循环中进行r=m，m=n后mn的关系为m>n.
	//if (m < n)
	//{
	//	p = m;
	//	m = n;
	//	n = p;
	//}
	r = m % n;
	while (r = m % n)
	{
		m = n;
		n = r;
		r = m % n;
	}
	printf("%d\n", n);
	return 0;
}
