//�򵥱Ƚ�����������С
//#include<stdio.h>
//int main()
//{
//	int x = 10;
//	int y = 20;
//	int z = 0;
//	if (x > y)
//		z = x;
//	else;
//	z = y;
//	printf("z=%d\n", z);
//	return 0;
//}

//����һ�������������ֵ
#include<stdio.h>
int MAX(int a, int b)
{
	if (a > b)
		return a;
	else;
	return b;
}
int main()
{
	int num1=10;
	int num2 = 20;
	int max = 0;
	max = MAX(num1, num2);
	printf("max=%d\n", max);
	return 0;
}