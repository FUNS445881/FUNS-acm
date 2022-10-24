#define _CRT_SECURE_NO_WARNINGS

#include "扫雷game.h"

void initialboard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void displayboard(char board[ROWS][COLS], int rows, int cols)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= rows; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= rows; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= cols; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void setmine(char board[ROWS][COLS], int row, int col)
{
	int count = Easycount;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int minecount(char mine[ROWS][COLS], int x, int y)
{
	int a = x - 1;
	int b = y - 1;
	int count = 0;
	for (; a <= x + 1; a++)
	{
		for (; b <= y + 1; b++)
		{
			count += mine[a][b] - '0';
		}
	}
	return count;
}

void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int win = 0;
	//判断坐标是否合法
	while (1)
	{
		int x = 0;
		int y = 0;
		printf("请输入查找的坐标：");
		scanf("%d%d", &x, &y);
		if ((x >= 1) && (x <= row) && (y >= 1) && (y <= col))
		{
			//坐标合法
			//1.踩雷
			if (mine[x][y] == '1')
			{
				printf("很抱歉，你踩雷了.\n");
				displayboard(mine, row, col);
				break;
			}
			else
			{
				int count = 0;
				count = minecount(mine, x, y);
				show[x][y] ='0' +count;
				displayboard(show, row, col);
				win++;
			}
		}
		else
			printf("坐标不合法，请重新输入!\n");
	if (win == row * col - Easycount)
		{
			printf("恭喜你，赢了\n");
		}
	}
	//void fun(char board2[ROWS][COLS],char board1[ROWS][COLS],char board[ROWS][COLS], int x, int y)                 
	//{
	//	int ret = findMine(board, x, y);
	//	if (ret == 0 && x > 0 && y > 0 && board2[x][y] != ' ')
	//	{
	//		board2[x][y] = ' ';
	//		fun(board2, board1, board, x - 1, y);
	//		fun(board2, board1, board, x + 1, y);
	//		fun(board2, board1, board, x, y + 1);
	//		fun(board2, board1, board, x, y - 1);
	//	}
	//	board1[x][y] = ret + '0';
	//}
	//void copy(char board[ROWS][COLS], char board1[ROWS][COLS], int col, int row)
	//{
	//	int i = 0, j = 0;
	//	for (i = 0; i < row; i++)
	//	{
	//		for (j = 0; j < col; j++)
	//		{
	//			board[i][j] = board1[i][j];
	//		}
	//	}
	//}
	//这里我们采用递归的方法这边我传进去了三个数组botboard2, botboard, showboard, 由后两段代码我们可以知道其实botboard2和botboard是两个完全一样的数组但是地址不一样。
		//每一次递归我们先通过findmine函数的返回值得到ret，然后我们判断ret是否为0（即周围八个点是否都没有地雷） x > 0 && y > 0是判断是否到达边界防止递归越过9 * 9边界，board2[x][y] != ’ '判断字符串是否为我们已经检查过的点不在进入递归以防死循环（比如由于我们是向一个点的四个方向递归，第一个点右边的点进入下一次递归，第二层递归四个方向 向左边 的递归实际上又回到了第一层递归，但是board2[x][y] != ’ ‘的判断条件可以免除这种情况发生）。进入判断的第一件事就是将我们检查的点设成’ ‘，然后向该点的左右上下四个方向递归。
		//botboard2 作用就是将递归的点设成’ '防止死循环
		//botboard 作用是由于botboard2递归过的点值被修改会导致ret = findmine无法判断周围八个点是否为炸弹，故需要一个botboard2一模一样的数组来专门输入findmine函数
		//————————————————
		//版权声明：本文为CSDN博主「正义的伙伴啊」的原创文章，遵循CC 4.0 BY - SA版权协议，转载请附上原文出处链接及本声明。
		//原文链接：https ://blog.csdn.net/qq_51086532/article/details/116275697
	//
}

