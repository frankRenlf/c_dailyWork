#define _CRT_SECURE_NO_WARNINGS 
#include"head.h"

//int main()
//{
//	//char* a[] = { "work","at","alibaba" }; 
//	//char** pa = a; 
//	//pa++; 
//	//printf("%s\n", *pa);
//
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//
//	return 0;
//}

//int main()
//{
//	//int len = my_strlen("abcdef");
//	//printf("%d\n", len);
//	//char arr1[] = "abcdef";
//	//char arr2[20] = { 0 };
//	//my_strcpy(arr2, arr1);
//	//printf("%s\n", arr2);
//	//char arr1[20] = "hello";
//	//char arr2[] = "world";
//	//my_strcat(arr1, arr2);
//	//printf("%s\n", arr1);
//	//char arr1[] = "abc";
//	//char arr2[] = "abc";
//	//int ret = my_strcmp(arr1, arr2);
//	//printf("%d\n", ret);
//	//char arr1[] = "xxxxxxxxxxxx";
//	//char arr2[] = "hello world";
//	//my_strncpy(arr1, arr2, 6);
//	//printf("%s\n", arr1);
//	//char arr1[] = "hello world abc";
//	//char arr2[] = " world";
//	//char* ret = my_strstr(arr1, arr2);
//	//if (NULL == ret)
//	//{
//	//	printf("no\n");
//	//}
//	//else
//	//{
//	//	printf("%s\n", ret);
//	//}
//
//
//
//	return 0;
//}

int main()
{
    //int i = KMP("ababcabcacbab", "abcac");
    //printf("%d", i);
    int i = myKMP("ababcabcdabcde", "abcd", 6);
    int j = myKMP("ababcabcdabcde", "abcdf", 0);
    int k = myKMP("ababcabcdabcde", "ab", 0);
    printf("%d %d %d\n", i, j, k);
    return 0;
}

//int main()
//{
//	const char* p = ".@";
//	char arr[] = "sc19lr@leeds.ac.uk";
//	char buf[50] = { 0 };
//	strcpy(buf, arr);
//	char* str = NULL;
//	for (str = strtok(buf, p); str != NULL; str = strtok(NULL, p))
//	{
//		printf("%s\n", str);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%s\n", strerror(i));
//	}
//	return 0;
//}

//当库函数有错,会把errno这个全局错误变量设为本次的错误码
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (NULL == pf)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//printf("%d\n", isspace('  '));
//	//char ch = 'w';
//	//char ch = '0';
//	//if (ch >= '0' && ch <= '9')
//	//{
//
//	//}
//	//if (isdigit(ch))
//	//{
//
//	//}
//	char ch = 0;
//	ch = getchar();
//	if (islower(ch))
//	{
//		ch = toupper(ch);
//	}
//	else
//	{
//		ch = tolower(ch);
//	}
//	printf("%c\n", ch);
//	return 0;
//}

//int main()
//{
//	//char arr1[] = "abcdef";
//	//char arr2[20] = { 0 };
//	//strcpy(arr2, arr1);
//	int arr3[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr4[5] = { 0 };
//	//my_memcpy(arr3+2, arr3, 5 * sizeof(arr3[0]));
//	my_memmove(arr3 + 2, arr3, 5 * sizeof(arr3[0]));
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr3[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,7,4,5 };
//	int arr2[] = { 1,2,3,4,5 };
//	int ret = memcmp(arr1, arr2, 9);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	//char arr[20] = { 0 };
//	//memset(arr, 'x', 10);
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	memset(arr, 0, 10);
//
//	return 0;
//}