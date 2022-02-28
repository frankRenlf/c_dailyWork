#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>


struct Stu
{
	char name[20];
	int age;
};

typedef struct sl
{
	struct Stu* data;
	int sz;
}Peo;

void addPeo(Peo* p);