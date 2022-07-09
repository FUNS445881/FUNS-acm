#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	double sum = 0.0;
	int ch = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += ch * (1.0 / i);
		ch = -ch;
	}
	printf("%lf\n", sum);
	return 0;
}
