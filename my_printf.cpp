#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void my_printf(int n)
{
	if (n > 9)
	{
		my_printf(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	printf("ÇëÊäÈëÄãµÄÊı×Ö£º \n");
	unsigned int num = 0;
	scanf("%d", &num);
	my_printf(num);
	return 0;
}
