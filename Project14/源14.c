//练习
//<1>计算n的阶乘
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int q = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		q = q * i;
//		printf("q=%d\n", q);
//	}
//	return 0;
//}

//<2>计算1！+2！+3！+.......+10！的和
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	int q = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		q = 1;
//		for (i = 1; i <= n; i++)
//		{
//			q = q * i;
//		}
//		sum = sum + q;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}
//化简:
int main()
{
	int i = 0;
	int ret = 1;
	int sum = 0;
	for (i = 1; i <= 10; i++)
	{
		ret = ret * i;
		sum = sum + ret;
	}
	printf("sum=%d\n", sum);
	return 0;
}