#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 4
#define COL 4

#define ROWS ROW+2//to not excced the border,add 2 grid to the limit
#define COLS COL+2

void menu();
void Init(char mine[ROWS][COLS], char board[ROWS][COLS], int rows, int cols, int row, int col, int m);
void Board(char board[ROWS][COLS], int rows, int cols, int x, int y);
void confirm(char board[ROWS][COLS], int x, int y);
void disconfirm(char board[ROWS][COLS], int x, int y);
int judge(char mine[ROWS][COLS], char board[ROWS][COLS], int rows, int cols, int x, int y, int m, int t);
void game();