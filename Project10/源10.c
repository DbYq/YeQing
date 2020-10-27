//练习：1判断一个数是否为奇数
//2输出1~100之间的奇数
//解《1》
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main()
{
	int num = 0;
	scanf("%d", &num);
	if (num % 2 != 0)
		printf("该函数为奇数");
		return 0;
}
//解2#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//法一{
//    int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//		   printf("%d  ", i);
//		i++;
//	}
//	return 0;
//}
//法二
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d  ", i);
//		i += 2;
//	}
//	return 0;
//}