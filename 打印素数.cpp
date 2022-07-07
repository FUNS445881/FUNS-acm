#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<windows.h>
int main()
{
	int a = 0, b = 0;
	int i = 0,j=0;
	int count = 0;
	printf("填的两个数必须大于2");
	scanf("%d%d", &a, &b);
	system("cls");
	for (i = a; i <= b; i++)
	{
		//辗转相除法
		//因为偶数不可能为素数（2除外）
		//所以若所填的第一个数要求一定为奇数时，第一个for可简化为for(i=a;i<=b;i+=2)
		//如此，可以简化计算机计算量
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
				break;
		}
		if (j >sqrt(i)) {
			printf("%d ", i);
			count++;
		}
	}
	printf("\n数量为%d\n", count);
	return 0;
}
