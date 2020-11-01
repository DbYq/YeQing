#include<stdio.h>
//练习1打印100到两百间的素数
//普通方法
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (0 == i % j)
//			{
//				break;
//			}
//		}
//			if (j >= i)
//			{
//				printf("%d ", i);
//			}
//	}
//	return 0;
//}

//函数法
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (0 == n % j)            //此处n要放与j前
//			return 0;
//	}
//		if (j == n)              
//			return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)                //规定is_prime()是用来计算素数的  当其=1时为素数 当其为0则不是素数
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//优化
//#include <math.h>                            //此处为开平方的引入头文件
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)         //sqrt(n)表示n的开平方
//	{
//		if (0 == n % j)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//写一个函数判断1000~2000年中的闰年
//普通方法
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (0 == year % 4 && 0 != year % 100)
//			printf("%d ", year);
//		if (0 == year % 400)
//			printf("%d ", year);
//	}
//	return 0;
//}
//函数法
//int is_leap_year(int y)
//{
//	if (0 == y % 4 && 0 != y % 100)
//		return 1;
//	if (0 == y % 400)
//		return 1;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}