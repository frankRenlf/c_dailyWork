#define _CRT_SECURE_NO_WARNINGS 
#include"formula.h"

void menu()
{
	printf("1.start game\n0.exit game\n");
}

void Init(char mine[ROWS][COLS], char board[ROWS][COLS], int rows, int cols, int row, int col, int m)
{
	//initmine
	int x, y;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			mine[i][j] = '0';
		}
	}
	int a = 0;
	while (a < m)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (mine[x][y] != '1')
		{
			mine[x][y] = '1';
			a++;
		}
	}
	//initboard
	for (int i = 1; i < rows - 1; i++)
	{
		if (i == 1)
		{
			printf("   ");
			for (int j = 1; j < cols - 1; j++)
			{
				printf(" %d ", j);
			}
			printf("\n\n");
		}
		printf(" %d ", i);
		for (int j = 1; j < cols - 1; j++)
		{
			board[i][j] = '*';
			printf(" %c ", board[i][j]);
		}
		printf("\n\n");
	}
}

void Board(char board[ROWS][COLS], int rows, int cols, int x, int y)
{
	//int x, y;
	//scanf("%d %d", &x, &y);

	for (int i = 1; i < rows - 1; i++)
	{
		if (i == 1)
		{
			printf("   ");
			for (int j = 1; j < cols - 1; j++)
			{
				printf(" %d ", j);
			}
			printf("\n\n");
		}
		printf(" %d ", i);
		for (int j = 1; j < cols - 1; j++)
		{
			printf(" %c ", board[i][j]);
		}
		printf("\n\n");
	}
}

void confirm(char board[ROWS][COLS], int x, int y)
{
	board[x][y] = 'o';
}

void disconfirm(char board[ROWS][COLS], int x, int y)
{
	board[x][y] = '*';
}

int judge(char mine[ROWS][COLS], char board[ROWS][COLS], int rows, int cols, int x, int y, int m, int t)
{
	char count = '0';
	int d = 0;
	if (t == 1)
	{
		if (mine[x][y] == '1' && board[x][y] != 'o')
		{
			board[x][y] = 'B';
			return 0;
		}
		else
		{
			for (int i = x - 1; i <= x + 1; i++)
			{
				for (int j = y - 1; j <= y + 1; j++)
				{
					if (mine[i][j] == '1')
					{
						count++;
					}
				}
			}
			if (count == '0')
			{
				board[x][y] = ' ';
			}
			else
			{
				board[x][y] = count;
			}
			return 3;
		}
	}
	else if (t == 2)
	{
		for (int i = 1; i < rows - 1; i++)
		{
			for (int j = 1; j < cols - 1; j++)
			{
				if (mine[i][j] == '1' && board[i][j] == 'o')
				{
					d++;
				}
			}
		}
		if (d == m)
		{
			return 1;
		}
		return 3;
	}
	else
	{
		return 3;
	}

	/*if (mine[x][y] == '1' && board[x][y] != 'o')
	{
		board[x][y] = 'B';
		return 0;
	}
	else
	{
		for (int i = x - 1; i <= x + 1; i++)
		{
			for (int j = y - 1; j <= y + 1; j++)
			{
				if (mine[i][j] == '1')
				{
					count++;
				}
			}
		}
		if (count == '0')
		{
			board[x][y] = ' ';
		}
		else
		{
			board[x][y] = count;
		}
		for (int i = 1; i < rows - 1; i++)
		{
			for (int j = 1; j < cols - 1; j++)
			{
				if (mine[i][j] == '1' && board[i][j] == 'o')
				{
					d++;
				}
			}
		}
		if (d == m)
		{
			return 1;
		}
	}
	return 3;*/
}

void game()
{
	char board[ROWS][COLS];
	char mine[ROWS][COLS];
	int m, x, y, t;
	int c = 0;
	int d = 1;
	printf("Number of bombs: ");
	scanf("%d", &m);
	printf("InitBoard\n\n");
	Init(mine, board, ROWS, COLS, ROW, COL, m);
	while (d>0)
	{
		printf("1.clean the grid\n2.confirm the bomb\n3.disconfirm\nselect: ");
		scanf("%d", &t);
		switch (t)
		{
		case 1:
			printf("Enter the position: ");
			scanf("%d %d", &x, &y);
			if (x > 0 && x <= ROW && y > 0 && y <= COL)
			{
				if (board[x][y] != '*')
				{
					printf("The grid was selected before\n");
					continue;
				}
				else
				{
					c = judge(mine, board, ROWS, COLS, x, y, m, t);
					Board(board, ROWS, COLS, x, y);
				}
				switch (c)
				{
				case 1:
					printf("You win, all bombs were found\n");
					Board(board, ROWS, COLS, x, y);
					d = 0;
					break;
				case 0:
					printf("Bomb!You lose\n");
					Board(board, ROWS, COLS, x, y);
					d = 0;
					break;
				default:
					printf("continue>\n");
					break;
				}
			}
			else
			{
				printf("Out of board\n");
			}
			break;
		case 2:
			printf("Enter the position: ");
			scanf("%d %d", &x, &y);
			if (x > 0 && x <= ROW && y > 0 && y <= COL)
			{
				confirm(board, x, y);
				c = judge(mine, board, ROWS, COLS, x, y, m, t);
				if (c == 1)
				{
					printf("You win, all bombs were found\n");
					d = 0;
				}
				Board(board, ROWS, COLS, x, y);
			}
			else
			{
				printf("Out of board\n");
			}
			break;
		case 3:
			printf("Enter the position: ");
			scanf("%d %d", &x, &y);
			if (x > 0 && x <= ROW && y > 0 && y <= COL)
			{
				disconfirm(board, x, y);
				Board(board, ROWS, COLS, x, y);
			}
			else
			{
				printf("Out of board\n");
			}
			break;
		default:
			printf("Invaild input, enter again\n");
			break;
		}
	}
}