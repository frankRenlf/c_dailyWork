#define _CRT_SECURE_NO_WARNINGS 

#include"head.h"

struct sd
{
	char name[20];
	char id[10];
	int age;
};

struct tc
{
	int a;
	int b;
	struct sd sd2;
};

void print(struct tc* pt)
{
	printf("%d %s %s %d %d\n", pt->sd2.age, pt->sd2.name, pt->sd2.id, pt->a, pt->b);
}

int main()
{
	struct sd sd1 = { "wjq","2020",21 };
	struct tc tc1 = { 1,2,{"rlf","2019",21} };
	printf("%d %s %s\n", sd1.age, sd1.id, tc1.sd2.id);
	struct sd* psd1 = &sd1;
	struct tc* ptc1 = &tc1;
	printf("%d %s %s\n", (*psd1).age, psd1->name, (*ptc1).sd2.name);
	printf("%d %s %s\n", psd1->age, psd1->name, ptc1->sd2.name);
	print(&tc1);
	return 0;
}