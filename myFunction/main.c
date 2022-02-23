#define _CRT_SECURE_NO_WARNINGS 

#include"formula.h"

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}

//int main()
//{
//	char arr[] = "bit";
//	int len = cal_len(arr);
//	printf("%d\n", len);
//}

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d\n", cal(n));
//	return 0;
//}

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d\n", fibe_l(n));
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,'\0'};
//	char arr2[] = "abc";
//	char arr3[] = { 'a','b','c','\0'};
//	printf("%d %d %d\n", sizeof(arr1),sizeof(arr2), sizeof(arr3));
//	printf("%d %d %d\n", strlen(arr1), strlen(arr2), strlen(arr3));
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d\n", digitsum(n));
//	return 0;
//}

//int main()
//{
//	int n, k;
//	scanf("%d %d", &n, &k);
//	printf("%lf\n", nk(n, k));
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3 };
//	int arr1[] = { 1,2,3 };
//	int* str0 = arr;
//	str0 += 1;
//	int* str1 = &arr[1];
//	printf("%d %p %d\n", *str0, *str1, sizeof(arr));
//	printf("%d\n", sizeof(arr1));
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,3,5,3,23,5,7,3 };
//	printf("%d\n", rank(arr));
//	return 0;
//}

//void test(int a)
//{
//	printf("%d\n", sizeof(a));
//}
//int main()
//{
//	int a[10];
//	test(&a);
//	printf("%p\n", a);
//	printf("%p\n", a+1);
//	printf("%p\n", &a);
//	printf("%p\n", &a+1);
//}

//int main()
//{
//	int a[100];
//	int n;
//	printf("请输入要排序的数字个数:\n");
//	scanf("%d", &n);
//	printf("请输入%d个数字:\n", n);
//	for (int ii = 0; ii < n; ii++)
//		scanf("%d", &a[ii]);
//	bubble_sort(a, n);
//	for (int ii = 0; ii < n; ii++)
//		printf("%d ", a[ii]);
//	return 0;
//}

//int main()
//{
//	int i, n; 
//	int a[100];
//	printf("请输入要排序的数字个数:\n");
//	scanf("%d", &n);
//	printf("请输入%d个数字:\n", n);
//	for (int ii = 0; ii < n; ii++)
//		scanf("%d", &a[ii]);
//	/*qst(0, n - 1);*/    //引用函数 
//	printf("结果：\n");
//	for (i = 0; i < n; i++)      //循环输出 
//		printf("%d ", a[i]);
//	return 0;
//}

//int main()
//{
//	int arr[3][4];
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printc(arr, sz);
//	reverse(arr, sz);
//	printc(arr, sz);
//	init(arr, sz);
//	printc(arr, sz);
//	return 0;
//}

int main()
{
	int arr[5] = { 0,1,2,3,4 };
	int brr[5] = { 5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	exchange(arr, brr, sz);
	printc(arr, sz);
	printc(brr, sz);
	return 0;
}