#define _CRT_SECURE_NO_WARNINGS 

#include"head.h"

void menu()
{
	printf("1.Play\n0.Exit\n");
}

void game()
{
	int input = 0;
	do {
		menu();
		printf("Select> ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			play();
			break;
		case 0:
			printf("exit\n");
			break;
		default:
			printf("Wrong select, enter again\n");
			break;
		}
	} while (input);
}

void play()
{
	initboard(ROW, COL);
	displayboard(ROW, COL);

}

void initboard(int row,int col)
{
	char arr[][10] = " ";
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = " ";
		}
	}
}

void displayboard(int row, int col)
{


}
