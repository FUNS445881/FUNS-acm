#define _CRT_SECURE_NO_WARNINGS

#include "ɨ��game.h"

void menu()
{
	printf("*********************\n");
	printf("*** 1.game 0.exit ***\n");
	printf("*********************\n");
}

void game()
{
	//�׵Ĳ��� ���
	//����Ĳ��� ���
	//ɨ�׵Ĳ��� 
	//�ж�ʤ��
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	initialboard(mine, ROWS, COLS, '0');
	initialboard(show, ROWS, COLS, '*');
	//displayboard(mine, ROW, COL);//��������
	displayboard(show, ROW, COL);
	setmine(mine, ROW, COL);
	displayboard(mine,ROW,COL);//��������
	findmine(mine, show, ROW, COL);
	//iswin();

}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
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
			printf("�����������������\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}