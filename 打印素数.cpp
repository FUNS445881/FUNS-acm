#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<windows.h>
int main()
{
	int a = 0, b = 0;
	int i = 0,j=0;
	int count = 0;
	printf("����������������2");
	scanf("%d%d", &a, &b);
	system("cls");
	for (i = a; i <= b; i++)
	{
		//շת�����
		//��Ϊż��������Ϊ������2���⣩
		//����������ĵ�һ����Ҫ��һ��Ϊ����ʱ����һ��for�ɼ�Ϊfor(i=a;i<=b;i+=2)
		//��ˣ����Լ򻯼����������
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
	printf("\n����Ϊ%d\n", count);
	return 0;
}
