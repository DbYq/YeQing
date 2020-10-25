//练习：<1>
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	if (a > b)
//		max = a;
//	else;
//	max = b;
//	printf("max = % d\n",max);
//	return 0;
//}
//<2>
//#include<stdio.h>
//int MAX(int x, int y)
//{
//	if (x > y)
//	return	 (x);
//	else;
//    return (y);
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = MAX(num1, num2);
//	printf("max=%d\n", max);
//	return 0;
//}

//循环语句《1》：
//#include<stdio.h>
//void test()
//{
//	int a = 1;
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//			i++;
//
//	}
//	return 0;
//}
//<2>加入static从而设定a为静态变量
//#include<stdio.h>
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i<5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//练习《1》
//#include<stdio.h>
//void test()
//{
//	int a = 1;
//	a++;
//	printf("a=%d\n", a);
//
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//练习2
#include<stdio.h>
void test()
{
	static int a = 1;
	a++;
	printf("a=%d\n", a);

}
int main()
{
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}
	return 0;
	
}

	


