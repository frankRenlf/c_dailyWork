#define _CRT_SECURE_NO_WARNINGS 
#include"head.h"

//void test2()
//{
//    printf("123\n");
//}
//void test()
//{
//    test2();
//}

//int main()
//{
//    test();
//    //int i = 0;
//    //int n = 0;
//    //int s = 1;
//    //while (scanf("%d", &i))
//    //{
//    //    s = 1;
//    //    while (i--)
//    //    {
//    //        scanf("%d", &n);
//    //        s *= n;
//    //    }
//    //    printf("%d\n", s);
//    //}
//    return 0;
//}

//int main()
//{
//    int i = 0;
//    int sum = 0;//保存最终结果
//    int n = 0;
//    int ret = 1;//保存n的阶乘
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        int j = 0;
//        for (j = 1; j <= i; j++)
//        {
//            ret *= j;
//        }
//        sum += ret;
//        ret = 1;
//    }
//    printf("%d\n", sum);
//    return 0;
//}

//int main()
//{
//    int i = 0;
//    int arr[10] = { 0 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hehe\n");
//    }
//    return 0;
//}



//int main()
//{
//    char arr1[] = "abc";
//    char arr2[10] = "xxxxxxxx";
//    //str_copy(arr1, arr2);
//    //printf("%s\n", arr2);
//    printf("%d\n", my_strlen(arr1));
//    return 0; 
//}

//int main()
//{
//	const int num = 10;
//	int n = 30;
//	const int* p = &num;
//	p = &n;
//
//	printf("%d\n", *p);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", count2(n));
//	return 0;
//}

//int main()
//{
//	int n, m, ret;
//	scanf("%d %d", &n, &m);
//	ret = n ^ m;
//	printf("%d\n", count2(ret));
//	//printf("%d\n", compare(n, m));
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d\n", compute(a, b));
//	return 0;
//}

int main()
{
	char arr[20] = { 0 };
	gets(arr);
	int len = strlen(arr);
	reverse(arr, arr + len - 1);
	char* start = arr;
	char* end = start;
	while (*start)
	{
		end = start;
		while (*end != ' '&&*end != '\0')
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end == ' ')
		{
			start = end + 1;
		}
		else
		{
			start = end;
		}
	}
	printf("%s", arr);
	return 0;
}