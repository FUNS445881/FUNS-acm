#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//����4����
void swap(int* pa, int* pb)
{
	int tep = 0;
	tep = *pa;
	*pa = *pb;
	*pb = tep;
}

int main()
{
	int a = 445;
	int b = 881;
//��һ���������޵���������������a��b
//a = a + b;
//b = a - b;
//a = a - b;
//��������:���
//int - 4���ֽ�-32bitλ-���ֵ��2157583647��a+b��������ֵ������ִ�г�����
//�ڶ�����������(������)λ�����ͬΪ0������Ϊ1��ȱ�㣺�ɶ��Բִ��Ч�ʽϵ�
//a = a ^ b;
//b = a ^ b;
//a = a ^ b;
//���õ����������Ļ����ɶ���ǿ��ִ��Ч�ʸ�
//c = a;
//a = b;
//b = c;
//��4��������ȡ��ַ����
	swap(&a , &b);
printf("������, a=%d ,b=%d", a, b);
	return 0;
}

