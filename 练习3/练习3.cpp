//分数求和1/1-1/2+1/3......+1/99-1/100;
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	double num = 0.0;
//	int flage = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		num = flage*1.0 / i;
//		sum = num + sum;
//		flage = -flage;
//	}
//	printf("%lf", sum);
//	return 0;
//}
//2.求十个整数中的最大值;
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//此为求元素个数公式
//	for (i = 0; i < sz; i++)//在这个循环过程中i为每个元素的下标   《《《注意》》》此处i=0；所对应的函数为arr[0];所以最好
//		//将其变为i=1，当然i=0也未尝不可；
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}
//乘法口诀表；
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//二分法
int main()
{
	int k = 0;
	scanf("%d", &k);
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int left = 0;//左下标
	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
	int right = sz - 1;//右下标
	while (left <= right)//此处若无则会导致左右调换出现错误
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标是%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
	return 0;
}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d ", b);
//	return 0;
//}