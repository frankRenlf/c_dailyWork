#define _CRT_SECURE_NO_WARNINGS 
#include"formula.h"

//int main()
//{
//	/*double a = 6.0 / 5;
//	printf("%lf\n", a);*/
//	//int a = -1;
//	//printf("%d", a >> 3);
//	//int a = 3;
//	//int b = 5;
//	////printf("%d\n%d\n%d\n", a & b, a | b, a ^ b);
//	//a = a ^ b;
//	//b = a ^ b;
//	//a = a ^ b;
//	//printf("%d %d", a, b);
//	/*int a = 13;
//	int count = 0;
//	for (int i = 0; i < 31; i++)
//	{
//		if ((a & 1) == 1)
//		{
//			count++;
//		}
//		a >>= 1;
//	}
//	printf("%d\n", count);*/
//	int flag = 0;
//	printf("%d\n%d\n", flag, !flag);
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	char arr[10] = { 0 };
//	printf("%d %d\n", sizeof(a), sizeof(int));
//	printf("%d %d\n", sizeof(arr), sizeof(char));
//	return 0;
//}

//int main()
//{
//	short int a = 4;
//	int b = 5;
//	printf("%d\n", sizeof(a += b));
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	a = ~a;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = (++a) + (++a);
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	//i = a++||++b||d++;
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	int d = (a = 5, b = 1, b++, c = 1);
//	printf("%d %d %d %d\n", a, b, c, d);
//	return 0;
//}

//struct book 
//{
//	char name[20];
//	char id[10];
//	double price;
//};
//int main()
//{
//	struct book a = { "C programming","2019",20 };
//	struct book* p = &a;
//	printf("%s %s %lf\n", p->name, (*p).id, a.price);
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(-c));
//	printf("%u\n", sizeof(!c));
//	return 0;
//}

//int main()
//{
//	int c = 3;
//	int a = c + --c;
//	printf("%d\n", a);
//	return 0;
//}

int fun()
{
	static int count = 1;
	return ++count;
}
int main()
{
	int answer;
	answer = (fun() - fun()) * fun();
	printf("%d\n", answer);// ‰≥ˆ∂‡…Ÿ£ø
	return 0;
}