#define _CRT_SECURE_NO_WARNINGS 

#include"formula.h"

void menu()
{
	printf("1.Start program\n0.Exit program\nPlease select> ");
}

void InitBoard(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		if (i == 0)
		{
			printf("   ");
			for (int j = 0; j < col; j++)
			{
				printf(" %d  ", j);
			}
			printf("\n\n");
		}
		for (int j = 0; j < col; j++)
		{
			if (j == 0)
			{
				printf(" %d ", i);
			}
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			printf("   ");
			for (int j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}

void PlayerMove(char board[ROW][COL], int row, int col, int limit)
{
	int x, y;
	while (1)
	{
		printf("Player1 [0-%d] (x): ", limit);
		scanf("%d%d", &x, &y);
		if (x < row && x >= 0 && y < col && y >= 0)
		{
			if (board[x][y] == ' ')
			{
				board[x][y] = 'x';
				break;
			}
			else
			{
				printf("The grid is full\nselect another one: ");
			}
		}
		else
		{
			printf("Out of board, enter again\n");
		}
	}
}

void PlayerMove_2(char board[ROW][COL], int row, int col, int limit, int m)
{
	int x, y;
	switch (m)
	{
	case 1:
		while (1)
		{
			x = rand() % row;
			y = rand() % col;
			printf("Player2 [0-%d] (o): ", limit);
			printf("%d %d\n\n", x, y);
			if (board[x][y] == ' ')
			{
				board[x][y] = 'o';
				break;
			}
			else
			{
				printf("The grid is full\nselect another one: ");
			}
			//if (x < row && x >= 0 && y < col && y >= 0)
			//{
			//	
			//}
			//else
			//{
			//	printf("Out of board, enter again\n");
			//}
		}
		break;
	case 2:
		while (1)
		{
			printf("Player2 [0-%d] (o): ", limit);
			scanf("%d%d", &x, &y);
			printf("\n");
			if (x < row && x >= 0 && y < col && y >= 0)
			{
				if (board[x][y] == ' ')
				{
					board[x][y] = 'o';
					break;
				}
				else
				{
					printf("The grid is full\nselect another one: ");
				}
			}
			else
			{
				printf("Out of board, enter again\n");
			}
		}
		break;
	default:
		break;
	}
}



int judge(char board[ROW][COL], char letter, int row, int col, int d)
{
	int count = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (board[i][j] == letter)
			{
				count++;
			}
			else
			{
				count = 0;
			}
			if (count == d)
			{
				return 1;
			}
		}
		count = 0;
	}
	count = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (board[j][i] == letter)
			{
				count++;
			}
			else
			{
				count = 0;
			}
			if (count == d)
			{
				return 1;
			}
		}
		count = 0;
	}
	count = 0;
	for (int i = 0; i < row; i++)
	{
		int a = i;
		int b = 0;
		while (a < row)
		{
			if (board[a][b] == letter)
			{
				count++;
			}
			else
			{
				count = 0;
			}
			if (count == d)
			{
				return 1;
			}
			a++;
			b++;
		}
		count = 0;
		a = i;
		b = 0;
		while (a >= 0)
		{
			if (board[a][b] == letter)
			{
				count++;
			}
			else
			{
				count = 0;
			}
			if (count == d)
			{
				return 1;
			}
			a--;
			b++;
		}
		count = 0;
	}
	count = 0;
	for (int i = 0; i < row; i++)
	{
		int a = i;
		int b = col;
		while (a < row)
		{
			if (board[a][b] == letter)
			{
				count++;
			}
			else
			{
				count = 0;
			}
			if (count == d)
			{
				return 1;
			}
			a++;
			b--;
		}
		count = 0;
		a = i;
		b = col;
		while (a >= 0)
		{
			if (board[a][b] == letter)
			{
				count++;
			}
			else
			{
				count = 0;
			}
			if (count == d)
			{
				return 1;
			}
			a--;
			b--;
		}
		count = 0;
	}
	return 0;
}



void game()
{
	char board[ROW][COL];
	int d = 100;
	int m;
	int count = 1;
	printf("1.PVE\n2.PVP\nselect> ");
	scanf("%d", &m);
	while (m > 2 || m < 1)
	{
		printf("1.PVE\n2.PVP\nselect> ");
		scanf("%d", &m);
		printf("Invaild input, select again\n");
	}
	while (1)
	{
		printf("Victory condition: ");
		scanf("%d", &d);
		if (d > ROW)
		{
			printf("Cross the border\nPlease enter again\n");
		}
		else
		{
			break;
		}
	}
	printf("Game interface generation\n\n");
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		printf("Turn %d ", count);
		PlayerMove(board, ROW, COL, ROW - 1);
		DisplayBoard(board, ROW, COL, d);
		if (judge(board, 'x', ROW, COL, d) == 1)
		{
			printf("Player1 win !!!\n\n");
			break;
		}
		if (2 * count - 1 == ROW * COL)
		{
			printf("draw\n");
			break;
		}
		printf("Turn %d ", count);
		PlayerMove_2(board, ROW, COL, ROW - 1, m);
		count++;
		DisplayBoard(board, ROW, COL);
		if (judge(board, 'o', ROW, COL, d) == 1)
		{
			printf("Player2 win !!!\n\n");
			break;
		}
	}
}