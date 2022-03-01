#pragma once


#include<stdio.h>
#include<string.h>
#include<math.h>
#include<assert.h>
#include<ctype.h>
#include <stddef.h>

#define INT_MIN pow(-2,31)
#define INT_MAX pow(2,31)-1


int is_space(char* str);
int my_atoi(const char* arr);

enum State
{
	INVALID,
	VALID
};

enum State status;

struct S
{
	double a;
	char b;
	int c;
};

int removeDuplicates(int* nums, int numsSize);
