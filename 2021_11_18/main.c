#define _CRT_SECURE_NO_WARNINGS 

#include"head.h"

struct S {
	int data[1000];
	int num;
};
struct S s = { {1,2,3,4}, 1000 };
//结构体传参
void print1(struct S s) {
	printf("%d\n", s.num);
}
//结构体地址传参
void print2(struct S* ps) {
	printf("%d\n", ps->num);
}
int main()
{
	print1(s);
	print2(&s);
	return 0;
}