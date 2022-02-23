#define _CRT_SECURE_NO_WARNINGS 
#include"head.h"

//int main()
//{
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	int ch = 0;
//	for (ch = 'a'; ch < 'z'; ch++)
//	{
//		fputc(ch, pf);
//	}
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fseek(pf, 5, SEEK_SET);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

int main()
{
	FILE* pf = fopen("text.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}

	int ch = fgetc(pf);
	printf("%c\n", ch);

	//fseek(pf, 5, SEEK_SET);

	ch = fgetc(pf);
	printf("%c\n", ch);

	int ret = ftell(pf);
	printf("%d\n", ret);

	fclose(pf);
	pf = NULL;

	return 0;
}


