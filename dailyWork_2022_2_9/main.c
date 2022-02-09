#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
#include<string.h>

void test1()
{
	int n = 0;
	while (~scanf("%d", &n))
	{
		int answer = 0;
		int tmp = 0;
		while (n--)
		{
			scanf("%d", &tmp);
			answer ^= tmp;
		}
		printf("%d\n", answer);
	}
}


int findPeakElement(int* nums, int numsLen) {
	// write code here
	int i = numsLen;
	while (numsLen)
	{
		if (nums[numsLen - 2] > nums[numsLen - 1] && nums[numsLen - 2] > nums[numsLen - 3])
		{
			return numsLen - 2;
		}
		else if (nums[numsLen - 2] < nums[numsLen - 1] && numsLen - 1 == i - 1)
		{
			return numsLen - 1;
		}
		else if (nums[numsLen - 3] > nums[numsLen - 2] && numsLen - 3 == 0)
		{
			return numsLen - 3;
		}
		else if (nums[numsLen - 2] < nums[numsLen - 3])
		{
			numsLen--;
			continue;
		}
		else if (nums[numsLen - 2] > nums[numsLen - 3])
		{
			numsLen -= 2;
			continue;
		}
	}
	return 0;
}

void test2()
{
	int arr[] = { 2,4,1,2,9,8,7 };
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("%d", findPeakElement(arr, len));
}


void test3()
{
	long n = 0, k = 0;
	while (~scanf("%ld %ld", &n, &k))
	{
		if (k == 0)
		{
			printf("%ld\n", n * n);
			continue;
		}
		long count = 0;
		for (long y = k + 1; y <= n; y++)
		{
			count += ((n / y) * (y - k)) + ((n % y < k) ? 0 : (n % y - k + 1));
		}
		printf("%ld\n", count);
	}
}

void test4()
{
	char arr[100];
	int k = 0;
	while (scanf("%s", arr) != EOF)
	{
		scanf("%d", &k);
		arr[k] = '\0';
		printf("%s\n", arr);
	}
}

int main()
{
	//test1();
	//test2();
	//test3();
	test4();
	return 0;
}