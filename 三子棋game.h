#pragma once
#define ROW 3
#define COL 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//��������
void Initialboard(char board[ROW][COL], int row, int col);
void Displayboard(char board[ROW][COL], int row, int col);
void Playmove(char board[ROW][COL], int row, int col);
void Cpmove(char board[ROW][COL], int row, int col);
char Iswin(char board[ROW][COL], int row, int col);



//Iswin���� *ʱ�����Ӯ
//Iswin����#ʱ������Ӯ
// Iswin����Cʱ������
// Iswin����Eʱ,ƽ��