#define _CRT_SECURE_NO_WARNINGS

#include "������game.h"


//�˵�
void menu()
{
	printf("************************\n");
	printf("**** 1.play  0.exit ****\n");
	printf("************************\n");
}

//��Ϸ��ʵ��
void game()
{
	char ret = 0;
	printf("��Ϸ��ʼ\n");
	char board[ROW][COL] = { 0 };
	Initialboard (board, ROW, COL);//��ʼ��Ϊ�ո�
	Displayboard(board, ROW, COL);//չʾ����
	while (1)
	{
		Playmove(board, ROW, COL);//��Ҳ���
		Displayboard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		Cpmove(board, ROW, COL);//���Բ���
		Displayboard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == 'E')
	{
		printf("ƽ��\n");
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	if (ret == '#')
	{
		printf("����Ӯ\n");
	}
}

//����
void test()
{		
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:> ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������!\n");
		}
	} 
	while (input);
}

int main()
{
	test();
	return 0;
}
