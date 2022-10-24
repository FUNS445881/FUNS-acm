#define _CRT_SECURE_NO_WARNINGS

#include "扫雷game.h"

void menu()
{
	printf("*********************\n");
	printf("*** 1.game 0.exit ***\n");
	printf("*********************\n");
}

void game()
{
	//雷的布置 完成
	//牌面的布局 完成
	//扫雷的布局 
	//判断胜利
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	initialboard(mine, ROWS, COLS, '0');
	initialboard(show, ROWS, COLS, '*');
	//displayboard(mine, ROW, COL);//仅供测试
	displayboard(show, ROW, COL);
	setmine(mine, ROW, COL);
	displayboard(mine,ROW,COL);//仅供测试
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
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误请重新输入\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}