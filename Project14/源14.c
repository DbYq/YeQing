//��ϰ
//<1>����n�Ľ׳�
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

//<2>����1��+2��+3��+.......+10���ĺ�
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
//����:
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