#define _CRT_SECURE_NO_WARNINGS 

#include"head.h"

//int main()
//{
//	//printf("%d\n", sizeof(struct A));
//	struct S s = { 0 };
//	s.a = 10; 
//	s.b = 12; 
//	s.c = 3; 
//	s.d = 4;
//	return 0;
//}

//int main()
//{ 
//	printf("%d\n", MALE);
//
//
//	return 0;
//}

//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//
//
//	return 0;
//}

//int main()
//{
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	return 0;
//}

//int main()
//{
//
//	//下面输出的结果是什么？
//	printf("%d\n", sizeof(union Un1));
//	printf("%d\n", sizeof(union Un2));
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (NULL == p)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	else
//	{
//		printf("Operation success\n");
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n", p[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)calloc(10,sizeof(int));
//	if (NULL == p)  
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	else
//	{
//		printf("Operation success\n");
//	}
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	*(p + i) = i;
//	//}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n", p[i]);
//	}
//
//	int* tmp = (int*)realloc(p, 80);;
//	if (NULL != p)
//	{
//		p = tmp;
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}



int compare(const void* e1, const void* e2)
{
    return (*(int*)e1 - *(int*)e2);
}

int main()
{
    int arr[50] = { 0 };
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int j = n; j < (m + n); j++)
    {
        scanf("%d", &arr[j]);
    }
    qsort(arr, (n + m), sizeof(arr[0]), compare);
    for (int z = 0; z < n + m; z++)
    {
        printf("%d ", arr[z]);
    }

    return 0;
}