//《从大到小输出三个数》。
#include<stdio.h>
//int main()
//{
//	int a;
//	int b;
//	int c;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int z = a;
//		a = b;
//		b = z;
//	}
//	if (a < c)
//	{
//		int z = a;
//		a = c;
//		c = z;
//
//	}
//	if (b < c)
//	{
//		int z = b;
//		b = c;
//		c = z;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//<打印1~100中三的倍数》
//int main()
//{
//	int a=0;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a % 3 == 0)
//		{
//			printf("%d ", a);
//		}
//	}
//	return 0;
//}
//《3》求两个数的最大公约数。
//辗转相除法
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	while (c=a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);//此处的b是因为在while循环中将c赋值给了b
//	return 0;
//}


//<4>打印1000到2000的闰年；
//int main()
//{
//	int year = 0;
//	int u = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (0 == year % 4 && 0 != year % 100)
//			printf("%d ", year);
//		else if (year % 400 == 0)
//			printf("%d", year);
//	}
//	return 0;
//}

//<5>.打印100~200间的素数
//试除法
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
//优化    第八集五十三分钟

//九集145：38