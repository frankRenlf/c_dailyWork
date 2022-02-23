#define _CRT_SECURE_NO_WARNINGS

#include"formula.h"

//int main()
//{
//	char arr = 43;
//	printf("%d", printf("%d", printf("%d", arr)));
//	return 0;
//}

//int ex(int x, int y)
//{
//	int i = x;
//	x = y;
//	y = i;
//	return x, y;
//}
//void ec(int* x, int* y)
//{
//	int i = *x;
//	*x = *y;
//	*y = i;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	ec(&a, &b);
//	printf("%d %d\n", a, b);
//	a, b = ex(a, b);
//	printf("%d %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	char arr[] = "Hello world";
//	memset(arr, '+', 5);
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	char arr[] = "123456";
//	char cpy[] = "#########";
//	strcpy(cpy, arr);
//	printf("%s\n", cpy);
//	return 0;
//}

//int main()
//{
//	char a[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("Notice: print 123456, or your computer will close\n> ");
//		scanf("%s", a);
//		if (strcmp(a, "123456") == 0)
//		{
//			system("shutdown -a");
//			printf("Plan stop\n");
//			break;
//		}
//	}
//	/*again:
//	printf("Notice: print 123456, or your computer will close\n> ");
//	scanf("%s", a);
//	if (strcmp(a, "123456") == 0)
//	{
//		system("shutdown -a");
//		printf("Plan stop\n");
//	}
//	else
//	{
//		goto again;
//	}*/
//	return 0;
//}

//int i = 0;
//void menu()
//{
//	printf("1.Play\n2.exit\nchoose: ");
//	scanf("%d", &i);
//}
//int random()
//{
//	int x = rand() % 100;
//	return x;
//}
//void game()
//{
//	switch (i)
//	{
//	case 1:
//		printf("Start the game\n");
//		int x = random();
//		int j;
//		while (1)
//		{
//			printf("guess: ");
//			scanf("%d", &j);
//			if (j > x)
//			{
//				printf("smaller\n");
//			}
//			else if (j < x)
//			{
//				printf("bigger\n");
//			}
//			else
//			{
//				printf("win\n");
//				break;
//			}
//		}
//		break;
//	case 2:
//		printf("Exit the game\n");
//		break;
//	default:
//		printf("invaild input\n");
//		break;
//	}
//}
//void structure()
//{
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		game(i);
//	} while (i != 2);
//}
//int main()
//{
//	structure();
//	return 0;
//}

//int main()
//{
//	double sum = 0;
//	int flag = 1;
//	for (int i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0/i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//int is_prime(int i)
//{
//	for (int j = 2; j <= sqrt(i); j++)
//	{
//		if (i % j == 0)
//		{
//			return 0;
//		}
//		if (j == sqrt(i))
//		{
//			return 1;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int x = 0;
//	for (int i = 101; i <= 200; i += 2)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d\n", i);
//			x++;
//		}
//	}
//	printf("%d\n", x);
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	int j;
//	for (int i = 101; i <= 200; i += 2)
//	{
//		int k = sqrt(i);
//		for (j = 2; j <= k; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//			if (j == k)
//			{
//				printf("%d\n", i);
//				x++;
//			}
//		}
//	}
//	printf("%d\n", x);
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	scanf("%d%d", &a, &b);
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	char arr[20] = { 0 };
//	for (int i = 0; i < 3; i++)
//	{
//		printf("Please enter password: ");
//		scanf("%s", arr);
//		if (strcmp(arr, "123456") == 0)
//		{
//			printf("Right\n");
//			break;
//		}
//		else
//		{
//			printf("False\n");
//		}
//	}
//	if (strcmp(arr, "123456") != 0)
//	{
//		printf("Program out");
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = "welcome to bit !!!!!";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//	char brr[] = "####################";
//	int left = 0;
//	int right = sz - 2;
//	int a = right / 2;
//	while (left <= right)
//	{
//		for (left, right; left <= (a + 1); left++, right--)
//		{
//			printf("%s\n", brr);
//			brr[left] = arr[left];
//			brr[right] = arr[right];
//			Sleep(1000);
//			system("cls");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6 };
//	char arr2[] = "abcdef";
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]) - 1;
//	int sz2 = strlen(arr2);
//	printf("%d\n%d", sz1, sz2);
//	return 0;
//}

//int main()
//{
//	int b = 1;
//	int n = 0;
//	int a;
//	scanf("%d", &a);
//	for (int i = 1; i <= a; i++)
//	{
//		b *= i;
//		n += b;
//	}
//	printf("%d\n", n);
//	return 0;
//}

//int find(int a[], int f ,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] > f)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < f)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int a[] = { 1,2,4,5,6,8,9 };
//	int f;
//	scanf("%d", &f);
//	int sz = sizeof(a) / sizeof(a[0]);
//	int d = find(a, f, sz);
//	if (d)
//	{
//		printf("Position: %d\n", d);
//	}
//	else
//	{
//		printf("There is no %d\n", f);
//	}
//	return 0;
//}

//int cal(int a)
//{
//	int b = 1;
//	for (int i = 1; i <= a; i++)
//	{
//		b *= i;
//	}
//	return b;
//}
//int main()
//{
//	int n;
//	int sum = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		sum += cal(i);
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	for (int i = 1; i <= 10; i++)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}

//int main()
//{
//	int x = 1;
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		x *= i;
//	}
//	printf("%d\n", x);
//	return 0;
//}



