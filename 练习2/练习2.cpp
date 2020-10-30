#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int q = a;
//		a = b;
//		b = q;
//	}
//	if (a < c)
//	{
//		int q = a;
//		a = c;
//		c = q;
//	}
//	if (b < c)
//	{
//		int q = b;
//		b = c;
//		c = q;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if(i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}
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
//	printf("%d\n",b);
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (0 == year % 4 && 0 != year % 100)
//			printf("%d ", year);
//		else if (0 == year % 400)
//			printf("%d ", year);
//	}
//	return 0;
//}
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j <= i; j++)
		{
			if (0 == i % j)
				break;
		}
		if (j == i)
			printf("%d ", i);
	}
	return 0;
}