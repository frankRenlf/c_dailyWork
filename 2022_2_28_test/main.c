#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>


//int maxi(int a, int b, int n)
//{
//	if (n - a > b - n)
//	{
//		return b - n;
//	}
//	return n - a;
//	
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int p1 = 0;
//	int p2 = 1;
//	int tmp = 0;
//	int i = 0;
//	while (n > p2)
//	{
//		tmp = p2;
//		p2 = p1 + p2;
//		p1 = tmp;
//	}
//	printf("%d\n", maxi(p1, p2, n));
//	return 0;
//}

int main()
{
	char* p = (char*)malloc(sizeof(char) * 100);
	//char p[100];
	gets(p);
	//scanf("%s",p);
	assert(p);
	int l = strlen(p) - 1;
	int tmp = l;
	int lt = l;
	int max = 0;
	while (tmp)
	{
		if (p[tmp] == ' ')
		{
			l += 2;
			lt = l;
			max = lt;
			while (lt > tmp)
			{
				p[lt] = p[lt-2];
				lt--;
			}
			p[tmp] = '%';
			p[tmp + 1] = '2';
			p[tmp + 2] = '0';
		}
		tmp--;
	}
	p[max + 1] = '\0';
	printf("%s\n", p);
	return 0;
}