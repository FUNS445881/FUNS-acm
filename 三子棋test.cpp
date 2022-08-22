#define _CRT_SECURE_NO_WARNINGS

#include "三子棋game.h"


//菜单
void menu()
{
	printf("************************\n");
	printf("**** 1.play  0.exit ****\n");
	printf("************************\n");
}

//游戏的实现
void game()
{
	char ret = 0;
	printf("游戏开始\n");
	char board[ROW][COL] = { 0 };
	Initialboard (board, ROW, COL);//初始化为空格
	Displayboard(board, ROW, COL);//展示棋盘
	while (1)
	{
		Playmove(board, ROW, COL);//玩家操作
		Displayboard(board, ROW, COL);
		//判断玩家是否赢
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		Cpmove(board, ROW, COL);//电脑操作
		Displayboard(board, ROW, COL);
		//判断电脑是否赢
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == 'E')
	{
		printf("平局\n");
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	if (ret == '#')
	{
		printf("电脑赢\n");
	}
}

//测试
void test()
{		
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:> ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入!\n");
		}
	} 
	while (input);
}

int main()
{
	test();
	return 0;
}
