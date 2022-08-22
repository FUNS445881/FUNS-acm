#pragma once
#define ROW 3
#define COL 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//函数声明
void Initialboard(char board[ROW][COL], int row, int col);
void Displayboard(char board[ROW][COL], int row, int col);
void Playmove(char board[ROW][COL], int row, int col);
void Cpmove(char board[ROW][COL], int row, int col);
char Iswin(char board[ROW][COL], int row, int col);



//Iswin返回 *时，玩家赢
//Iswin返回#时，电脑赢
// Iswin返回C时，继续
// Iswin返回E时,平局