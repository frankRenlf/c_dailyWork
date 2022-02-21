#define _CRT_SECURE_NO_WARNINGS 

#include"head.h"

void GetMemory(char** p) 
{
	*p = (char*)malloc(100);
}

void Test() 
{
	char* str = NULL;
	GetMemory(&str);
	strcpy(str, "hello world");
	printf(str);

	free(str);
	str = NULL;
}
