//比较两个数的大小
//#include<stdio.h>
//int main()
//{
//	int x = 10;
//	int y = 20;
//	int z;
//	if (x > y)z = x;
//	else;
//	z = y;
//	printf("%d\n", z);
//	return 0;
//}

//创建函数比较大小
#include<stdio.h>
int Max(int a, int b)
{
	if (a > b)
		return a;
	else;
	return b;

}
int main()
{
	int num1 = 10;
	int num2 = 20;
	int max = 0;
		max = Max(num1, num2);
	printf("max=%d\n", max);
	return 0;
}
