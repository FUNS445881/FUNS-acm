#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[] = { 4,4,5,8,8,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sizeof(arr));
	printf("%p\n", *arr);
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr);	//��Ȼ�����1,2һ�£���1,2�໥�ȼۣ���&arrȡ����������������ĵ�ַ���������Ԫ�ص�ַ��ʼ
	//������Դ�����3�����뿴��,1,2������һ��Ԫ�صĵ�ַ����3�����������ַ֮��ĵ�ַ
	printf("*********\n");
	printf("%p\n", arr + 1);
	printf("%p\n", &arr[0] + 1);
	printf("%p\n", &arr+1);

	//��������ʵ��������Ԫ�صĵ�ַ�������������⣩
	//1��sizeof��������������ʱ����������ʾ�����������飬sizeof���������������Ĵ�С����λ���ֽڡ�
	//2��&������������������������飬&��������ȡ��������������ĵ�ַ
	return 0;
}
