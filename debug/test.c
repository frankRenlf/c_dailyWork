#define _CRT_SECURE_NO_WARNINGS 
#include"head.h"

//void str_copy(char* s1, char* s2)
//{
//	while (*s1 != '\0')
//	{
//		*(s2) = *(s1);
//		s2++;
//		s1++;
//	}
//	*s2 = '\0';
//}
void str_copy(const char* s1, char* s2)
{
	assert(s1 != NULL);
	assert(s2 != NULL);
	while (*s2++ = *s1++)
	{
		;
	}
}

int my_strlen(const char* src)
{
	assert(src != NULL);
	int i = 0;
	while (*src++ != '\0')
	{
		i++;
	}
	return i;
}

int count(unsigned int n)
{
	int c = 0;
	while (n)
	{
		if (n % 2 == 1)
		{
			c++;
		}
		n /= 2;
	}
	return c;
}

int count2( int n)
{
	int c = 0;
	for (int i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
		{
			c++;
		}
	}
	return c;
}

int compare(int n, int m)
{
	int count = 0;
	for (int i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
		{
			count++;
		}
	}
	return count;
}

int compute(int a, int b)
{
	int c = 0;
	for (int i = 1;; i++)
	{
		if (i * a % b == 0)
		{
			c = i * a;
			break;
		}
	}
	return c;
}

void reverse(char* left, char* right)
{
	int mid = 0;
	while (left < right)
	{
		mid = *left;
		*left = *right;
		*right = mid;
		left++;
		right--;
	}
}