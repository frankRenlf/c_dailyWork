#define _CRT_SECURE_NO_WARNINGS 
#include"formula.h"

int main()
{
	int n;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("select: ");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			printf("game start\n");
			game();
			break;
		case 0:
			printf("game exit\n");
			break;
		default:
			printf("invaild input, enter again\n");
			break;
		}
	} while (n);
	return 0;
}