#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[] = { 4,4,5,8,8,1,1};
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//����1-�������
	for (i = 0; i < sz; i++)
	{
		int count = 0;//���������������������˼���
		int j = 0;//important��jÿһ�ζ�Ҫ��ʼ��Ϊ0�ſ���
		for (j = 0; j < sz; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}		
		}
		if (count == 1)
		{
		printf("ֻ����һ�ε���Ϊ��%d", arr[i]);
			break;
		}
	}
	return 0;
}
