#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>;
void Swap(int* pa, int* pb,int* pd)
{
	int c = 0;
	c = *pa;
	*pa = *pb;
	*pb = c;
	(* pd)++;
	//++���ŵ����ȶȸ߻�������pd������*�ţ�Ҫ��������������ʾ����
}
int main()
{
	int num = 0;
	int a = 445;
	int b = 881;
	Swap(&a, &b, &num);
	printf("a=%d, b=%d, num=%d\n", a, b, num);
	Swap(&a, &b, &num);
	printf("a=%d, b=%d, num=%d\n", a, b, num);
	return 0;
}
