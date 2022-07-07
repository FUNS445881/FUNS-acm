#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
int main()
{
	int a = 0, b = 0, i = 0,count=0;
	printf("请输入起始年份:");
	scanf("%d", &a);
	system("cls");
	printf("请输入结束年份:");
	scanf("%d", &b);
	system("cls");
	for (i = a; i <= b; i++)
	{
		if (i % 4 == 0 && i % 100 != 0) {
			printf("%d ", i);
			count++;
		}
		if (i % 400 == 0) {
			printf("%d ", i);
			count++;
		}
	}
		printf("\n数量为%d\n", count);
	return 0;
}
