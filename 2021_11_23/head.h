#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int add(int a, int b);
int sub(int a, int b);
void print(int* arr, int sz);
void test(char* str);


int cmp_int(const void* e1, const void* e2);
int cmp_structure_age(const void* e1, const void* e2);
int cmp_structure_name(const void* e1, const void* e2);

struct stu
{
	char name[20];
	int age;
};

void test_int();
void test_structure();
void test_bubble_qsort();
void test_bubble_qsort_structure();

void bubble_sort(int* arr, int sz);
void bubble_qsort(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2));

void swap(char* e1, char* e2, int width);