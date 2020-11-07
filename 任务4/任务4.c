#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//2.二分法
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	int k = 0;
//	scanf("%d", &k);
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标为%d\n", mid);
//			return 0;
//		}
//	}
//	if (left > right)
//		printf("找不到这个数\n");
//	return 0;
//}

int main()
{
	char A[60];
	printf("输入一个整数字符串A：\n");
	scanf("%s", A);
	int i = 0;
	char B[20];
	int sz = sizeof(B) / sizeof(B[0]);
	while (sz >= 3)
	{
		for (i = 1; i < sz - 1; i++)
		{
			int a = 0;
			if ((a > i && a < sz) || (a >= 0 && a < i))
				B[a] > B[i];
			else if (a == i)
				B[a] = B[i];
			else
				break;
		}
		printf("最长谷底是%c", B[0]);
		printf("\n");
		printf("长度为%d", strlen(B));
		break;
	}
	return 0;
}