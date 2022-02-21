#define _CRT_SECURE_NO_WARNINGS 

#include"head.h"

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

void test(char* str)
{
	
}

void print(int* arr, int sz)
{
	printf("Result:\n");
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}



void bubble_sort(int* arr, int sz)
{
	int tmp = 0;
	for (int j = 0; j < sz - 1; j++)
	{
		for (int i = 0; i < sz - j - 1; i++)
		{
			if (arr[i] >= arr[i + 1])
			{
				tmp = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = tmp;
			}
		}
	}
}

int cmp_int(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}

void test_int()
{
	int arr[20] = { 0 };
	int sz = 0;
	printf("Enter the size: ");
	scanf("%d", &sz);
	printf("Enter the number:\n");
	for (int i = 0; i < sz; i++)
	{
		scanf("%d", &arr[i]);
	}
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print(arr, sz);
}

void test_structure()
{
	struct stu ls[] = { {"zhangsan",50},{"lisi",60},{"wangwu",40} };
	int sz = sizeof(ls) / sizeof(ls[0]);
	//qsort(ls, sz, sizeof(ls[0]), cmp_structure_age);
	qsort(ls, sz, sizeof(ls[0]), cmp_structure_name);
}

int cmp_structure_age(const void* e1, const void* e2)
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}

int cmp_structure_name(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}

void bubble_qsort(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
{
	for (int j = 0; j < sz - 1; j++)
	{
		for (int i = 0; i < sz - j - 1; i++)
		{
			if (cmp( (char*)base + i * width, (char*)base + (i + 1) * width ) > 0)
			{
				swap((char*)base + i * width, (char*)base + (i + 1) * width, width);
			}
		}
	}
}

void swap(char* e1, char* e2, int width)
{
	char tmp = 0;
	for (int i = 0; i < width; i++)
	{
		tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++;
		e2++;
	}
}

void test_bubble_qsort()
{
	int arr[20] = { 0 };
	int sz = 0;
	printf("Enter the size: ");
	scanf("%d", &sz);
	printf("Enter the number:\n");
	for (int i = 0; i < sz; i++)
	{
		scanf("%d", &arr[i]);
	}
	bubble_qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print(arr, sz);
}

void test_bubble_qsort_structure()
{
	struct stu ls[] = { {"zhangsan",50},{"lisi",60},{"wangwu",40} };
	int sz = sizeof(ls) / sizeof(ls[0]);
	//bubble_qsort(ls, sz, sizeof(ls[0]), cmp_structure_age);
	bubble_qsort(ls, sz, sizeof(ls[0]), cmp_structure_name);
}
