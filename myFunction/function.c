#define _CRT_SECURE_NO_WARNINGS 
//Function definition

#include"formula.h"


//int add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//void print(int x)
//{
//	if (x > 10)
//	{
//		print(x / 10);
//	}
//	printf("%d ", x % 10);
//}
//
//int cal_len(char* str)
//{
//	if (*str != '\0')
//	{
//		str++;
//		return 1 + cal_len(str);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int cal(int n)
//{
//	if (n > 0)
//	{
//		return n * cal(n - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int fibe_re(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fibe_re(n - 2) + fibe_re(n - 1);
//	}
//}
//
//int fibe_l(int n)
//{
//	int a = 1;
//	int b = 1;
//	int x, y, an;
//	if (n > 2)
//	{
//		for (int i = 2; i < n; i++)
//		{
//			an = a + b;
//			a = b;
//			b = an;
//		}
//		return an;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//void reverse_string(char* arr)
//{
//	char mid = *arr;
//	int len = cal_len(arr);
//	*(arr) = *(arr + len - 1);
//	*(arr + len - 1) = '\0';
//	if (cal_len(arr + 1) >= 2)
//	{
//		reverse_string(arr + 1);
//	}
//	*(arr + cal_len(arr)) = mid;
//	 
//}
//
//int left = 0;
//int right = cal_len(arr) - 1;
//int mid;
//while (left < right)
//{
//	mid = arr[left];
//	arr[left] = arr[right];
//	arr[right] = mid;
//	left++;
//	right--;
//}
//if (left < right)
//{
//	mid = arr[left];
//	arr[left] = arr[right];
//	arr[right] = mid;
//	left++;
//	right--;
//	reverse_string(arr);
//}
//else
//{
//	return 0;
//}
//
//int digitsum(int n)
//{
//	if (n >= 10)
//	{
//		return n % 10 + digitsum(n / 10);
//	}
//	else
//	{
//		return n;
//	}
//}
//
//double nk(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * nk(n, k - 1);
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 1.0 / nk(n, -k);
//	}
//}
//
//int rank(int arr[])
//{
//	int max = arr[0];
//	int mid[10];
//	int i, j;
//	for (j = 0; j < strlen(arr); j++)
//	{
//		for (i = 0; i < strlen(arr); i++)
//		{
//			if (arr[i] > max)
//			{
//				max = arr[i];
//			}
//		}
//		mid[j] = i;
//	}
//	return mid;
//}
//
//void bubble_sort(int a[], int n)
//{
//	int mid;
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = 0; j < n - 1 - i; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				mid = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = mid;
//			}
//		}
//	}
//}
//
//
//void qst(int left, int right)
//{
//	if (left >= right)
//	{
//		return;
//	}
//	int i = left;
//	int j = right;
//	int key = left;
//	int mid;
//	while (i < j)
//	{
//		while (i < j && key <= a[j])
//		{
//			j--;
//		}
//		mid = a[i];
//		a[i] = a[j];
//		a[j] = mid;
//		while (i < j && key >= a[i])
//		{
//			i++;
//		}
//		mid = a[i];
//		a[i] = a[j];
//		a[j] = mid;
//	}
//	qst(left, i - 1);
//	qst(i + 1, right);
//}
void init(int a[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		a[i] = 0;
	}
}

void reverse(int a[], int sz)
{
	int mid = 0;
	for (int left = 0, right = sz - 1; left < right; left++, right--)
	{
		mid = a[left];
		a[left] = a[right];
		a[right] = mid;
	}
}

void printc(int a[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void exchange(int a[], int b[], int sz)
{
	int mid = 0;
	for (int i = 0; i < sz; i++)
	{
		mid = a[i];
		a[i] = b[i];
		b[i] = mid;
	}

}