#define _CRT_SECURE_NO_WARNINGS 
#include"head.h"


int my_strlen(const char* str)
{
	assert(str);
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest && src);
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

char* my_strcat(char* dest, const char* src)
{
	assert(dest && src);
	char* ptr = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
	return ptr;
}

int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	//if (*str1 > *str2)
	//{
	//	return 1;
	//}
	//else
	//{
	//	return -1;
	//}
	return *str1 - *str2;
}

char* my_strncpy(char* dest, const char* src, size_t num)
{
	char* ptr = dest;
	assert(dest && src);
	for (int i = 0; i < num; i++)
	{
		if (*src != '\0')
		{
			*dest++ = *src++;
		}
		else
		{
			*dest++ = '\0';
		}
	}

	return ptr;
}

char* my_strstr(const char* str, const char* substr)
{
	const char* s1 = str;
	const char* s2 = substr;
	char* current = str;
	assert(str && substr);
	if (*substr == '\0')
	{
		return str;
	}
	while (*current != '\0')
	{
		s1 = current;
		s2 = substr;
		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return current;
		}
		current++;
	}
	return NULL;
}

void* my_memcpy(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ptr = dest;
	while(num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ptr;
}

void* my_memmove(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ptr = dest;
	if ((char*)dest <= (char*)src)
	{
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return ptr;
}


void Next(char* T, int* next) {
	int i = 1;
	next[1] = 0;
	int j = 0;
	while (i < strlen(T)) {
		if (j == 0 || T[i - 1] == T[j - 1]) {
			i++;
			j++;
			next[i] = j;
		}
		else {
			j = next[j];
		}
	}
}
int KMP(char* S, char* T) {
	int next[10];
	Next(T, next);//根据模式串T,初始化next数组
	int i = 1;
	int j = 1;
	while (i <= strlen(S) && j <= strlen(T)) {
		//j==0:代表模式串的第一个字符就和当前测试的字符不相等；
		//S[i-1]==T[j-1],如果对应位置字符相等，两种情况下，指向当前测试的两个指针下标i和j都向后移
		if (j == 0 || S[i - 1] == T[j - 1]) {
			i++;
			j++;
		}
		else {
			j = next[j];//如果测试的两个字符不相等，i不动，j变为当前测试字符串的next值
		}
	}
	if (j > strlen(T)) {//如果条件为真，说明匹配成功
		return i - j;
	}
	return -1;
}

void myNext(const char* sub, int* next, int len_sub)
{
	next[0] = -1;
	if (len_sub == 1)
	{
		return;
	}
	next[1] = 0;
	int i = 2;
	int k = 0;
	while(i < len_sub)
	{
		if (k == -1 || sub[i - 1] == sub[k])
		{
			next[i] = k + 1; 
			i++;
			k++;
		}
		else
		{
			k = next[k];
		}
	}
}

void myNextval(const char* sub, int* nextval, int* next, int len_sub)
{
	nextval[0] = next[0];
	for (int i = 1; i < len_sub; i++)
	{
		if (sub[i] == sub[next[i]])
		{
			nextval[i] = nextval[next[i]];
		}
		else
		{
			nextval[i] = next[i];
		}
	}
}

int myKMP(const char* str, const char* sub, int pos)
{
	assert(str && sub);
	int len_str = strlen(str);
	int len_sub = strlen(sub);
	if (len_str == 0 || len_sub == 0)
	{
		return -1;
	}
	if (pos<0 || pos>len_str)
	{
		return -1;
	}
	
	int* next = (int*)malloc(sizeof(int) * len_sub);
	int* nextval = (int*)malloc(sizeof(int) * len_sub);
	assert(next && nextval);
	myNext(sub, next, len_sub);
	myNextval(sub, nextval, next, len_sub);

	int i = pos;
	int j = 0;
	
	while (i < len_str && j < len_sub)
	{
		if (j == -1 || str[i] == sub[j])
		{
			i++;
			j++;
		}
		else
		{
			j = nextval[j];
		}
	}
	free(next);
	free(nextval);
	if (j >= len_sub)
	{
		return i - j;
	}
	else
	{
		return -1;
	}
}


