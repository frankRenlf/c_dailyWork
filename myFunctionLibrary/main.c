#define _CRT_SECURE_NO_WARNINGS 

#include"head.h"

//int main()
//{
//	FILE* pf = fopen("C:\\Users\\11195\\source\\repos\\myFunctionLibrary\\text.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	//fputc('a', pf);
//	//fputc('b', pf);
//	// 
//	//int ch = 0;
//	//while ((ch = fgetc(pf)) != EOF)
//	//{
//	//	printf("%c\n", ch);
//	//}
//
//	//char arr[] = "helloworld\n";
//	//fputs(arr, pf);
//	//fputs("bcd", pf);
//
//	char buf[100] = { 0 };
//	fgets(buf, 100, pf);
//	printf("%s\n", buf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pr = fopen("data.txt", "r");
//	if (pr == NULL)
//	{
//		printf("Open for reading: %s\n", strerror(errno));
//		return 0;
//	}
//
//	FILE* pw = fopen("data2.txt", "w");
//	if (pw == NULL)
//	{
//		printf("Open for writing: %s\n", strerror(errno));
//		fclose(pr);
//		pr = NULL;
//		return 0;
//	}
//
//	int ch = 0;
//	while ((ch = fgetc(pr)) != EOF)
//	{
//		fputc(ch, pw);
//	}
//
//	fclose(pr);
//	pr = NULL;
//
//	fclose(pw);
//	pw = NULL;
//
//	return 0;
//}

//int main()
//{
//	struct Stu s = { "frank",12,95.5 };
//	FILE* pw = fopen("data3.txt", "w");
//	if (pw == NULL)
//	{
//		printf("Open for writing: %s\n", strerror(errno));
//		return 0;
//	}
//
//	fprintf(pw, "%s %d %lf", s.name, s.age, s.d);
//
//	fclose(pw);
//	pw = NULL;
//
//	return 0;
//}


//int main()
//{
//	struct Stu s[2] = { 0 };
//	FILE* pw = fopen("data3.txt", "rb");
//	if (pw == NULL)
//	{
//		printf("Open for writing: %s\n", strerror(errno));
//		return 0;
//	}
//
//	fread(&s, sizeof(struct Stu), 2, pw);
//
//
//	fclose(pw);
//	pw = NULL;
//
//	return 0;
//}

//int main()
//{
//
//	printf("%d %d %d\n", sizeof(int), sizeof(int*), sizeof(int**));
//}

int main()
{
	int a = 0;
	Peo* p = (Peo*)malloc(sizeof(Peo) * 10);
	p->sz = 0;
	addPeo(p);
	return 0;
}