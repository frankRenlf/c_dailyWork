#define _CRT_SECURE_NO_WARNINGS 

#include"head.h"

//int main()
//{
//	int (*pl[])(int, int) = { 0,add,sub };
//	int input = 0;
//	scanf("%d", &input);
//	int a, b;
//	scanf("%d%d", &a, &b);
//	printf("%d\n", (*pl[input])(a, b));
//	return 0;
//}

//int main()
//{
//	void (*p)(char*) = &test;
//	return 0;
//}

//int main()
//{
//	int arr[20] = { 0 };
//	int sz = 0;
//	printf("Enter the size: ");
//	scanf("%d", &sz);
//	printf("Enter the number:\n");
//	for (int i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	bubble_sort(arr, sz);
//	print(arr, sz);
//	return 0;
//}

//int main()
//{
//	//test_int();
//	//test_structure();
//	//test_bubble_qsort();
//	//test_bubble_qsort_structure();
//
//	//int a[] = { 1,2,3,4 };
//	//printf("%d\n", sizeof(a));//16
//	//printf("%d\n", sizeof(a + 0));//4
//	//printf("%d\n", sizeof(*a));//4
//	//printf("%d\n", sizeof(a + 1));//4
//	//printf("%d\n", sizeof(a[1]));//4
//	//printf("%d\n", sizeof(&a));//4
//	//printf("%d\n", sizeof(*&a));//16
//	//printf("%d\n", sizeof(&a + 1));//4
//	//printf("%d\n", sizeof(&a[0]));//4
//	//printf("%d\n", sizeof(&a[0] + 1));//4
//
//	//char arr[] = { 'a','b','c','d','e','f' };
//	//printf("%d\n", sizeof(arr));
//	//printf("%d\n", sizeof(arr + 0));
//	//printf("%d\n", sizeof(*arr));
//	//printf("%d\n", sizeof(arr[1]));
//	//printf("%d\n", sizeof(&arr));
//	//printf("%d\n", sizeof(&arr + 1));
//	//printf("%d\n", sizeof(&arr[0] + 1));
//	//printf("%d\n", strlen(arr));
//	//printf("%d\n", strlen(arr + 0)); 
//	//printf("%d\n", strlen(*arr));
//	//printf("%d\n", strlen(arr[1]));
//	//printf("%d\n", strlen(&arr));
//	//printf("%d\n", strlen(&arr + 1));
//	//printf("%d\n", strlen(&arr[0] + 1));
//
//	//char arr[] = "abcdef";
//	//printf("%d\n", sizeof(arr));//7
//	//printf("%d\n", sizeof(arr + 0));//4
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//4
//	//printf("%d\n", sizeof(&arr + 1));//4
//	//printf("%d\n", sizeof(&arr[0] + 1));//4
//	//printf("%d\n", strlen(arr));//6
//	//printf("%d\n", strlen(arr + 0));//6
//	////printf("%d\n", strlen(*arr));//error
//	////printf("%d\n", strlen(arr[1]));//error
//	//printf("%d\n", strlen(&arr));//6
//	//printf("%d\n", strlen(&arr + 1));//random
//	//printf("%d\n", strlen(&arr[0] + 1));//5
//
//	//char* p = "abcdef";
//	//printf("%d\n", sizeof(p));//4
//	//printf("%d\n", sizeof(p + 1));//4
//	//printf("%d\n", sizeof(*p));//1
//	//printf("%d\n", sizeof(p[0]));//1
//	//printf("%d\n", sizeof(&p));//4
//	//printf("%d\n", sizeof(&p + 1));//4
//	//printf("%d\n", sizeof(&p[0] + 1));//4
//	//printf("%d\n", strlen(p));//6
//	//printf("%d\n", strlen(p + 1));//5
//	////printf("%d\n", strlen(*p));//error
//	////printf("%d\n", strlen(p[0]));//error
//	//printf("%d\n", strlen(&p));//random
//	//printf("%d\n", strlen(&p + 1));//random
//	//printf("%d\n", strlen(&p[0] + 1));//5
//
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16
//	printf("%d\n", sizeof(a[0] + 1));//4
//	printf("%d\n", sizeof(*(a[0] + 1)));//4
//	printf("%d\n", sizeof(a + 1));//4
//	printf("%d\n", sizeof(*(a + 1)));//16
//	printf("%d\n", sizeof(&a[0] + 1));//4
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	printf("%d\n", sizeof(*a));//16
//	printf("%d\n", sizeof(a[3]));//16
//
//	return 0;
//}

int main()
{
	//int a[5] = { 1, 2, 3, 4, 5 };
	//int* ptr = (&a + 1);
	//printf("%d,%d", *(a + 1), *(ptr - 1));
	
	//int a[4] = { 1, 2, 3, 4 };
	//int* ptr1 = (int*)(&a + 1);
	//int* ptr2 = (int*)((int)a + 1);
	//printf("%x,%x", ptr1[-1], *ptr2);

	//int a[3][2] = { (0, 1), (2, 3), (4, 5) };
	//int* p;
	//p = a[0];
	//printf("%d", p[0]); 

	//int a[5][5];
	//char b[2][2];
	//int(*p)[4];
	//p = a;
	//printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	//printf("%d\n",&b[1][1]-&b[1][2]);

	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; 
	int* ptr1 = (int*)(&aa + 1); 
	int* ptr2 = (int*)(*(aa + 1)); 
	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));

	return 0;
}