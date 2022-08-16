#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 1;
	int i = 1;
	int sum = 0;
	for (i = 1; i <= 10; i++) {
		a = a * i;
		sum = sum + a;
	}
	printf("%d\n", sum);
		//方法2 函数法
	//void fac2(int n)
	//{
	//    if(n<=1)
	//      return 1;
	//    else
	//      return n *fac2(n-1);
	//}
	return 0;
}
