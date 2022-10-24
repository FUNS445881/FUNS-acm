#define _CRT_SECURE_NO_WARNINGS

#include "ɨ��game.h"

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
	//�ж������Ƿ�Ϸ�
	while (1)
	{
		int x = 0;
		int y = 0;
		printf("��������ҵ����꣺");
		scanf("%d%d", &x, &y);
		if ((x >= 1) && (x <= row) && (y >= 1) && (y <= col))
		{
			//����Ϸ�
			//1.����
			if (mine[x][y] == '1')
			{
				printf("�ܱ�Ǹ���������.\n");
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
			printf("���겻�Ϸ�������������!\n");
	if (win == row * col - Easycount)
		{
			printf("��ϲ�㣬Ӯ��\n");
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
	//�������ǲ��õݹ�ķ�������Ҵ���ȥ����������botboard2, botboard, showboard, �ɺ����δ������ǿ���֪����ʵbotboard2��botboard��������ȫһ�������鵫�ǵ�ַ��һ����
		//ÿһ�εݹ�������ͨ��findmine�����ķ���ֵ�õ�ret��Ȼ�������ж�ret�Ƿ�Ϊ0������Χ�˸����Ƿ�û�е��ף� x > 0 && y > 0���ж��Ƿ񵽴�߽��ֹ�ݹ�Խ��9 * 9�߽磬board2[x][y] != �� '�ж��ַ����Ƿ�Ϊ�����Ѿ������ĵ㲻�ڽ���ݹ��Է���ѭ��������������������һ������ĸ�����ݹ飬��һ�����ұߵĵ������һ�εݹ飬�ڶ���ݹ��ĸ����� ����� �ĵݹ�ʵ�����ֻص��˵�һ��ݹ飬����board2[x][y] != �� �����ж��������������������������������жϵĵ�һ���¾��ǽ����Ǽ��ĵ���ɡ� ����Ȼ����õ�����������ĸ�����ݹ顣
		//botboard2 ���þ��ǽ��ݹ�ĵ���ɡ� '��ֹ��ѭ��
		//botboard ����������botboard2�ݹ���ĵ�ֵ���޸Ļᵼ��ret = findmine�޷��ж���Χ�˸����Ƿ�Ϊը��������Ҫһ��botboard2һģһ����������ר������findmine����
		//��������������������������������
		//��Ȩ����������ΪCSDN����������Ļ�鰡����ԭ�����£���ѭCC 4.0 BY - SA��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
		//ԭ�����ӣ�https ://blog.csdn.net/qq_51086532/article/details/116275697
	//
}

