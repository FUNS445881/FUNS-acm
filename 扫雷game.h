#pragma once
# define ROW 9
# define COL 9
#define ROWS ROW + 2
#define COLS COL + 2
#define Easycount 10

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initialboard(char board[ROWS][COLS], int rows, int cols, char set);
void setmine(char board [ROWS][COLS], int row , int col);
void displayboard(char board[ROWS][COLS], int row, int col);
void findmine(char board[ROWS][COLS],char show[ROWS][COLS], int row, int col);
void spreadmine(char board[ROWS][COLS], char show[ROWS][COLS], int row, int col,int x,int y);
int minecount(char board[ROWS][COLS], int row, int col);