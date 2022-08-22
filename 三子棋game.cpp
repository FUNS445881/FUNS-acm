#define _CRT_SECURE_NO_WARNINGS

#include "������game.h"

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

//չʾЧ����Ϊ
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
		int j = 0;//Ϊ�˱������е����飬�����������ʼ��j
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);//printf������Ҳͬ����Ϊ�˱���i�е���������
			if (j < col - 1)
				printf("|");
			//��ӡ�����ݵ���
		}
		printf("\n");//���У��Դ�ӡ�ָ���
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)//bug1��if������룻���������printfδ�ܷ���Ӧ�����á�
				printf("|");
			}
			printf("\n");
		}

	}
}

void Playmove(char board[ROW][COL], int row, int col)
{
	printf("�����: >\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("������Ҫ�µ�����:>");
		scanf("%d%d", &x, &y);
		//�ж�����ĺϷ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�����ѱ�ռ�ã�����������");
			}
		}
		else
		{
			printf("����Ƿ������������룡\n");
		}
	}
	
}

void Cpmove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("������:>\n");
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

// 0 ��ʾû����
// 1 ��ʾ�Ѿ�����
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

//�÷����������������壬��Ϊб���е��ж� �������������ڶ����ͬ��row��col
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
		//�ж��Ƿ���ƽ��
		if (1 == isFull(board, ROW, COL))
		{
			return 'E';
		}
		return 'C';//���ifȫ�������㣬�����������C
}