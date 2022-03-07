#pragma once


#include<stdio.h>
#include<stdlib.h>
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
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size);
int compare_int(const void* a, const void* b);

void test(int* a, int* b);

double findMedianSortedArrays_success(int* nums1, int nums1Size, int* nums2, int nums2Size);
int addDigits(int num);
int addDigits_process(int num);

int comp(const void* a, const void* b);
int threeSumClosest(int* nums, int numsSize, int target);

char* convertToBase7(int num);