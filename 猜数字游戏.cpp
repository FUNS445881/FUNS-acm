#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
void menu()
{
	printf("************************\n");
	printf("*** 1.Play   0.Exit ****\n");
	printf("************************\n");
}

void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand()%100 +1;//ʹret��ΧΪ1-100��rand_max��СΪ32767
//	printf("%d\n", ret);����ret�Ƿ����ʹ��
	while (1)
	{
		printf("��������µ�����:>");
		scanf("%d", &guess);
		if (guess > ret)
			printf("�´���\n");
		else if (guess < ret)
			printf("��С��\n");
		else 
		{
			printf("�¶��ˣ�\n");
			break;
		}
	}
}

int main()
{
	//time ��long���壬Ҫǿ��ת��Ϊint��ʹ��unsigned int
	//NULL��ʾ��ָ�룬��Ϊ�������Ч����
	//srand���ڴ˴���Ϊ������srand�����ڵ����ֲ���һֱ�仯���Ӷ�ʵ��ÿ�β�ͬ��α�����������game����{}�ڵĻ���ᷢ�����������
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("������ѡ��:>\n");
		scanf("%d", & input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("�������������");
			break;
		}
	} while (input);
	return 0;
}
