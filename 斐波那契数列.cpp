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
	//������ڣ����ϵ���ǰ���ƣ��ᵼ�³����ظ�����ͬһ��ֵ���������ԽС��fib��n���������Խ�ࡣ�ķѴ�������
}

int fib2(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;//Ϊ���ܹ���nΪ1,2ʱҲ���Է�����ȷ���
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;//Ϊ���ܹ�����ѭ��
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
	printf("������Ϊ��%d\n", n);
	return 0;
}
