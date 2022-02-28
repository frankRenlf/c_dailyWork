#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int is_perfect_num(int num) {
	int sum = 1; 
	for (int i = 2; i <= sqrt(num); i++) 
	{
		if (num % i == 0) 
		{
			//判断是否能够整除i，能整除则i和结果都是约数 
			sum += i; //与除数相加 
			if (i != sqrt(num))//防止除数和结果相同的情况下重复相加 
				sum += num / i; //与相除结果相加 
		} 
	}
	if (sum == num) return 1; 
	return 0; 
}


void reverse(char* e1, char* e2)
{
	char tmp = 0;
	while (e1 <= e2)
	{
		tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++;
		e2--;
	}
}

int main()
{
	char arr[10000] = {0};
	int start = 0;
	int x;
	int i = 0;
	gets(arr);
	reverse(arr, arr + strlen(arr) - 1);
	for (int i = 0; i < strlen(arr); i++)
	{
		if (arr[i] <= 47 && arr[i] >= 32 && i != 0)
		{
			arr[i] = ' ';
			reverse(arr + start, arr + i - 1);
			start = i + 1;

		}
		if (arr[i] == ' ')
		{
			reverse(arr + start, arr + i - 1);
			start = i + 1;
		}
	}

	printf("%s\n", arr);
	return 0;
}

//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int count = 0;
//		for (int i = 2; i <= n; i++)
//		{
//			if (is_perfect_num(i))
//			{
//				count++;
//			}
//		}
//		printf("%d\n", count);
//	}
//	return 0;
//}


int minNumberInRotateArray(int* rotateArray, int rotateArrayLen) {
	// write code here
	for (int i = 0; i < rotateArrayLen - 1; i++)
	{
		if (rotateArray[i] > rotateArray[i + 1])
		{
			return rotateArray[i + 1];
		}
	}
}


int GetNumberOfK(int* data, int dataLen, int k) {
	int ones = 0;
	int twos = 0;
	int l = -1, r = dataLen;
	while (l + 1 != r)
	{
		int mid = (l + r) / 2;
		if (data[mid] < k)
		{
			l = mid;
		}
		if (data[mid] >= k)
		{
			r = mid;
		}
	}
	ones = l;
	printf("%d\n", ones);
	l = -1, r = dataLen;
	while (l + 1 != r)
	{
		int mid = (l + r) / 2;
		if (data[mid] <= k)
		{
			l = mid;
		}
		if (data[mid] > k)
		{
			r = mid;
		}
	}
	twos = r;
	printf("%d\n", twos);
	return twos - ones - 1;
}

int convertInteger(int A, int B) {
	A ^= B;
	int ret = 0;
	for (int i = 0; i < 32; i++) {
		if ((A >> i) & 1 == 1) {
			ret++;
		}
	}
	return ret;
}


int dominantIndex(int* nums, int numsSize) {
	if (numsSize < 2)
	{
		return 0;
	}
	else
	{
		// qsort(nums,numsSize,sizeof(int),compare);
		int max = -1;
		int tmp = -1;
		int p = 0;
		for (int i = 0; i < numsSize; i++)
		{
			if (nums[i] > max)
			{
				tmp = max;
				max = nums[i];
				p = i;
			}
			else if (nums[i] > tmp)
			{
				tmp = nums[i];
			}
		}
		if (max >= 2 * tmp)
		{
			return p;
		}
		else
		{
			return -1;
		}
	}
}


//int main()
//{
//	int a = 10;
//	int b = 2;
//	printf("%d\n", a & b);
//	return 0;
//}


//int main()
//{
//    int arr[] = { 0,0,0,1 };
//    printf("%d\n", dominantIndex(arr, 4));
//    return 0;
//}


//int main()
//{
//    char arr[100];
//    char brr[100];
//    gets(arr);
//    brr[0] = arr[0];
//    int len = strlen(arr);
//    int k = 1;
//    for (int i = 0; i < len; i++)
//    {
//        int j = 0;
//        for (j = 0; j < k; j++)
//        {
//            if (brr[j] == arr[i])
//            {
//                break;
//            }
//        }
//        if (j == k)
//        {
//            brr[j] = arr[i];
//            k++;
//        }
//    }
//    printf("%d\n", k);
//    return 0;
//}
//int* productExceptSelf(int* nums, int numsSize, int* returnSize)
//{
//	int* ret = (int*)malloc(numsSize * sizeof(int)); *returnSize = numsSize; int left = 1, right = 1;
//	for (int i = 0; i < numsSize; i++) { ret[i] = left; left *= nums[i]; }
//	for (int i = numsSize - 1; i >= 0; i--) { ret[i] *= right; return ret; }

	//int main()
	//{
	//	int arr[] = { 1,2,3,4,4,5 };
	//	printf("%d\n", GetNumberOfK(arr, 6, 1));
	//	return 0;
	//}


	//int main()
	//{
	//	int n = 0; 
	//	scanf("%d", &n);
	//	int* p = (int*)malloc(sizeof(int) * 100);
	//	return 0;
	//}


	//int main()
	//{
	//	int arr[] = { 3,4,5,1,2 };
	//	printf("%d\n", minNumberInRotateArray(arr, 5));
	//	return 0;
	//}

	//int main()
	//{
	//	int n = 0;
	//	int i = 0;
	//	int total = 0;
	//	float sum = 0.0;
	//	int* arr = NULL;
	//	while (scanf("%d", &n) != EOF)
	//	{
	//		arr = (int*)malloc(sizeof(int) * n);
	//		for (i = 0; i < n; i++)
	//		{
	//			scanf("%d", &arr[i]);
	//			if (arr[i] < 0)
	//			{
	//				total++;
	//			}
	//			else
	//			{
	//				sum += arr[i];
	//			}
	//		}
	//		printf("%d %.1f", total, sum / (n - total));
	//	}
	//	return 0;
	//}

