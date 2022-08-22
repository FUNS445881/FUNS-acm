#define _CRT_SECURE_NO_WARNINGS

#include "三子棋game.h"

void Initialboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//展示效果因为
//   |   |   
//---|---|---
//   |   |   
//---|---|---
//   |   |   
void Displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;//为了遍历所有的数组，必须在这里初始化j
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);//printf在这里也同样是为了遍历i行的所有数字
			if (j < col - 1)
				printf("|");
			//打印有数据的行
		}
		printf("\n");//换行，以打印分割行
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)//bug1：if语句后加入；导致下面的printf未能发挥应有作用。
				printf("|");
			}
			printf("\n");
		}

	}
}

void Playmove(char board[ROW][COL], int row, int col)
{
	printf("玩家走: >\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入要下的坐标:>");
		scanf("%d%d", &x, &y);
		//判断坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标已被占用，请重新输入");
			}
		}
		else
		{
			printf("坐标非法，请重新输入！\n");
		}
	}
	
}

void Cpmove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走:>\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

// 0 表示没有满
// 1 表示已经满了
int isFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

//该方法仅适用于三子棋，因为斜三列的判断 其他函数适用于多个不同的row和col
char Iswin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[2][i] == board[1][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		{
			return board[1][1];
		}
		if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		{
			return board[1][1];
		}
		//判断是否是平局
		if (1 == isFull(board, ROW, COL))
		{
			return 'E';
		}
		return 'C';//如果if全都不满足，则继续，返回C
}