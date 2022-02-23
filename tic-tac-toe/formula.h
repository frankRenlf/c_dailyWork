#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 5
#define COL 5

void menu();
void game();
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col, int d);
void PlayerMove_2(char board[ROW][COL], int row, int col, int limit, int m);
int judge(char board[ROW][COL], char letter, int row, int col, int d);
