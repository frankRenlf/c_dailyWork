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

int lengthOfLongestSubstring(char* s) {
	int len = strlen(s);
	int map[127] = { 0 };
	int l = 0;//leftSide
	int r = 0;//rightSide
	int max = 0;
	while (r < len)
	{
		if (map[s[r]] == 0)
		{
			map[s[r++]]++;
		}
		else
		{
			map[s[l++]]--;
		}
		max = r - l > max ? r - l : max;
	}
	return max;
}

char* convert_success(char* s, int numRows) {
	if (numRows == 1) return s;

	int step = numRows * 2 - 2; // 间距
	int index = 0;// 记录s的下标
	int len = strlen(s);
	int add = 0; // 真实的间距
	char static ret[1000] = { 0 };
	int k = 0;
	for (int i = 0; i < numRows; i++) // i表示行号
	{
		index = i;
		add = i * 2;
		while (index < len)//超出字符串长度计算下一层
		{
			ret[k] = s[index]; // 当前行的第一个字母
			k++;
			add = step - add;// 第一次间距是step -2*i，第二次是2*i, 
			index += (i == 0 || i == numRows - 1) ? step : add; // 0行和最后一行使用step间距，其余使用add间距
		}
	}
	ret[k] = '\0';
	return ret;
}

char* convert_false(char* s, int numRows) {
	if (numRows == 1) return s;

	int step = numRows * 2 - 2; // 间距
	int index = 0;// 记录s的下标
	int len = strlen(s);
	int add = 0; // 真实的间距
	char* ret = (char*)malloc(sizeof(char) * len);
	int k = 0;
	for (int i = 0; i < numRows; i++) // i表示行号
	{
		index = i;
		add = i * 2;
		while (index < len)//超出字符串长度计算下一层
		{
			ret[k] = s[index]; // 当前行的第一个字母
			k++;
			add = step - add;// 第一次间距是step -2*i，第二次是2*i, 
			index += (i == 0 || i == numRows - 1) ? step : add; // 0行和最后一行使用step间距，其余使用add间距
		}
	}
	ret[k] = '\0';
	return ret;
}


int main()
{
	//test1();
	//test2();
	//test3();
	//test4();
	//char arr[] = "abcabcdabc";
	//printf("%d\n", lengthOfLongestSubstring(arr));
	char s[] = "Apalindromeisaword,phrase,number,orothersequenceofunitsthatcanbereadthesamewayineitherdirection,withgeneralallowancesforadjustmentstopunctuationandworddividers.";
	int numRows = 2;

	printf("%s\n", convert_success(s, numRows));
	printf("%s\n", convert_false(s, numRows));
	return 0;
}