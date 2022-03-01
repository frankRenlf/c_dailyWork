#define _CRT_SECURE_NO_WARNINGS 

#include "head.h"

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


int reverse(int x) {
	int tmp = 0;
	int y = 0;
	int arr[31] = { 0 };
	for (tmp = 0; x != 0; tmp++)
	{
		arr[tmp] = (x % 10);
		x /= 10;
	}
	for (int i = 0; i < tmp; i++)
	{
		if (y < INT_MIN / 10 || y > INT_MAX / 10) {
			return 0;
		}
		y = y * 10 + arr[i];

	}
	return y;
}

int reverse_2(int x) {
	int rev = 0;
	while (x != 0) {
		if (rev < INT_MIN / 10 || rev > INT_MAX / 10) {
			return 0;
		}
		int digit = x % 10;
		x /= 10;
		rev = rev * 10 + digit;
	}
	return rev;
}


int isPalindrome(int x) {
	char a[100];

	sprintf(a, "%d", x);//把整数x，转化为字符串存入a中

	int left = 0, right = 0;//从数组头尾两边向内判断嘛，定义两个左右索引
	right = strlen(a) - 1;//数组从0开始，减一位

	for (right, left; right > left; right--, left++)
		//你从头尾分别向内判断，头部索引++，尾部索引--，若是头的索引都大于尾部的索引，说明判断完成
	{
		if (a[right] != a[left])
		{
			return 0;
		}
	}
	return 1;
}


int maxArea(int* height, int heightSize) {
	int l = 0, r = heightSize - 1;
	int max = 0;
	while (l < r)
	{
		max = max > (height[l] > height[r] ? height[r] : height[l]) * (r - l) ? max : (height[l] > height[r] ? height[r] : height[l]) * (r - l);
		if (height[l] < height[r])
		{
			l++;
		}
		else if (height[l] > height[r])
		{
			r--;
		}
		else
		{
			l++;
			r--;
		}
	}
	return max;
}

const int values[] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
const char* symbols[] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };

char* intToRoman(int num) {
	char* roman = malloc(sizeof(char) * 16);
	roman[0] = '\0';
	for (int i = 0; i < 13; i++) {
		while (num >= values[i]) {
			num -= values[i];
			strcpy(roman + strlen(roman), symbols[i]);
		}
		if (num == 0) {
			break;
		}
	}
	return roman;
}


int is_space(char* str)
{
	if (*str == ' ')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int my_atoi(const char* arr)
{
	assert(arr);
	if (*arr == '\0')
	{
		return 0;
	}
	while (is_space(arr))
	{
		arr++;
	}
	int flag = 1;
	if (*arr == '+')
	{
		flag = 1;
		arr++;
	}
	else if (*arr == '-')
	{
		flag = -1;
		arr++;
	}

	long long sum = 0;
	while (isdigit(*arr))
	{
		sum = sum * 10 + (*arr - '0') * flag;
		if (sum > INT_MAX || sum < INT_MIN)
		{
			return 0;
		}
		arr++;
	}
	if (*arr == '\0')
	{
		status = VALID;
		return (int)sum;
	}
	return (int)sum;
}

int removeDuplicates(int* nums, int numsSize) {
	if (numsSize == 0)
	{
		return 0;
	}
	int quick = 1;
	int con = 1;
	while (quick < numsSize)
	{
		if (nums[quick - 1] != nums[quick])
		{
			nums[con] = nums[quick];
			con++;
		}
		quick++;
	}
	return con;
}
