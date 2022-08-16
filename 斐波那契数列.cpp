#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int fib1(int a)
{
	if (a <= 2)
	{
		return 1;
	}
	else
		return fib1(a - 1) + fib1(a - 2);
	//问题存在：不断的往前推移，会导致出现重复计算同一个值得情况，且越小的fib（n）计算次数越多。耗费大量算力
}

int fib2(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;//为了能够在n为1,2时也可以返回正确结果
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;//为了能够跳出循环
	}
	return c;
}

int main()
{
	int a = 0;
	int n = 0;
	scanf("%d", &a);
	//n = fib1(a);
	n = fib2(a);
	printf("计算结果为：%d\n", n);
	return 0;
}
