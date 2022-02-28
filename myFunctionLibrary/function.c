#define _CRT_SECURE_NO_WARNINGS 

#include"head.h"

void addPeo(Peo* p)
{
	printf("Enter name: ");
	scanf("%s", p->data[p->sz].name);
	printf("Enter age: ");
	scanf("%d", &(p->data[p->sz].age));
	p->sz++;
}