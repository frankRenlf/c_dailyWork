#define _CRT_SECURE_NO_WARNINGS 

#include"formula.h"

int main()
{
	int n;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			game();
			break;
		case 0:
			printf("Exit program\n");
			break;
		default:
			printf("Invaild input, select again\n");
			break;
		}
	} while (n);
	return 0;
}