#define _CRT_SECURE_NO_WARNINGS 

#include"head.h"




//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	//char arr[] = "abcabcdabc";
//	//printf("%d\n", lengthOfLongestSubstring(arr));
//	/*char s[] = "Apalindromeisaword,phrase,number,orothersequenceofunitsthatcanbereadthesamewayineitherdirection,withgeneralallowancesforadjustmentstopunctuationandworddividers.";
//	int numRows = 2;
//	printf("%s\n", convert_success(s, numRows));
//	printf("%s\n", convert_false(s, numRows));*/
//
//	//printf("%d\n", reverse(123));
//	//printf("%d\n", isPalindrome(121));
//	int height[] = { 1,8,6,2,5,4,8,3,7 };
//	int s = sizeof(height) / sizeof(height[0]);
//	printf("%d\n", maxArea(height, s));
//	return 0;
//}




//status = INVALID;
//
//int main()
//{
//	char arr[] = "   -123";
//	int n = my_atoi(arr);
//	if (status == VALID)
//	{
//		printf("%d\n", n);
//	}
//	else
//	{
//		printf("INVALID");
//	}
//	return 0;
//}

//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", offsetof(struct S, a));
//	printf("%d\n", offsetof(struct S, b));
//	printf("%d\n", offsetof(struct S, c));
//
//	return 0;
//}

int main()
{
	int arr[] = { 1,2,3,3,4,5 };
	int n = removeDuplicates(arr, 6);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}