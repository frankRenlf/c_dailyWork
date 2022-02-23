#define _CRT_SECURE_NO_WARNINGS
#include"formula.h"

//int main()
//{
//	char ch = 'a';
//	int b = 20;
//	float f = 5.0;
//	double d = 3.14;
//	printf("Hello %c = %d, float = %f\n", ch, b, f);
//	printf("double = %lf\n", d);
//	printf("char = %d\n", sizeof(char));
//	printf("short = %d\n", sizeof(short));
//	printf("int = %d\n", sizeof(int));
//	printf("long = %d\n", sizeof(long));
//	printf("long long = %d\n", sizeof(long long));
//	printf("float = %d\n", sizeof(float));
//	printf("double = %d\n", sizeof(double));
//	return 0;
//}

//void try()
//{
//	int x = 15;
//	printf("%d\n", x);
//}
//int main()
//{
//	const int a = 10;
//	int b[10] = { 0 };
//	extern int x;
//	x = 11;
//	printf("%d\n", x);
//	try();
//	return 0;
//}

//enum Color
//{
//	RED,
//	BLUE,
//	YELLOW
//};
//int main()
//{
//	enum Color color = RED;
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c', '\0'};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	printf("%c\n", '\'');
//	return 0;
//}

//int main()
//{
//	printf("%d\n", strlen("1\3\238\4"));
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	while (line < 20000)
//	{
//		printf("Write No.%d line of code\n", line);
//		line++;
//	}
//	printf("obtain a good offer\n");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++;
//	int c = ++a;
//	printf("qianzhi++: %d, houzhi++: %d\n", b, c);
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int b = 5;
//	int c = a | b;
//	int d = a & b;
//	printf("%d,%d\n", c, d);
//	return 0;
//
//}

//int main()
//{
//	int arr[10] = { 1 };
//	int a = arr[0];
//	printf("%d", a);
//	return 0;
//}

//void test()
//{
//	static int a = 0;
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	extern add;
//	while (add < 5)
//	{
//		test();
//		add++;
//	}
//	return 0;
//}

//extern int sum(int, int);
//int main()
//{
//	int a = 10;
//	int b = 2;
//	int c = sum(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//#define MAX(x,y) (x>y?x:y)
//int main()
//{
//	int a = 10;
//	int b = 15;
//	int c = MAX(a, b);
//	printf("%d", c);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	printf("%d\n", *p);
//	*p = 20;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* p = &ch;
//	int c = sizeof(p);
//	printf("%d\n", c);
//	printf("%c, %p\n", *p, p);
//	return 0;
//}

//struct book
//{
//	char name[20];
//	int price;
//};
//int main()
//{
//	struct book book1 = {
//		"C programming",
//		20
//	};
//	struct book* p = &book1;
//	printf("%s: $%d\n", book1.name, book1.price);
//	strcpy(book1.name, "C++");
//	//printf("position: %p\ncontent: %s, %d\n", p, (*p).name, (*p).price);
//	printf("position: %p\ncontent: %s, %d\n", p, p->name, p->price);
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	printf("age: ");
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		if (age >= 18 && age < 28)
//		{
//			printf("adult\n");
//		}
//	}
//	else
//	{
//		printf("old\n");
//	}
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	printf("Enter a number: ");
//	scanf("%d", &num);
//	if (num % 2 == 1)
//	{
//		printf("num is an odd\n");
//	}
//	else
//	{
//		printf("num is an even\n");
//	}
//	printf("A list of number between 0-100:\n");
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	char a = 0;  //int is ok
//	scanf("%c", a);
//	switch (a)
//	{
//	case 'a':
//		printf("100\n");
//		break;
//	case 'b':
//		printf("400\n");
//		break;
//	default:
//		printf("0");
//		break;
//	}
//    return 0;
//}

//int main(void)
//{
//	char str[10];  //str是string的缩写, 即字符串
//	printf("请输入字符串：");
//	scanf("%s", str);  //输入参数是已经定义好的字符数组名
//	printf("输出结果：%s\n", str);
//	return 0;
//}

//int main()
//{
//	int i;
//	while ((i = getchar()) != EOF)
//	{
//		printf("%c", i);
//	}
//	return 0;
//}

//int main()
//{
//	int n;
//	char arr[20];
//	printf("Password: ");
//	scanf("%s", arr);
//	while (getchar() != '\n');
//	printf("请确认(Y/N): ");
//	n = getchar();
//	if (n == 'Y')
//	{
//		printf("确认\n");
//	}
//	else
//	{
//		printf("取消\n");
//	}
//	printf("Password: %s", arr);
//	return 0;
//}

//int main()
//{
//	int ch;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//		{
//			continue;
//		}
//		putchar(ch);
//	}
//	return 0;
//}
