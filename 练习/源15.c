//���Ӵ�С�������������
#define _CRT_SECURE_NO_WARNINGS
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
//<��ӡ1~100�����ı�����
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
//��3���������������Լ����
//շת�����
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
//	printf("%d\n", b);//�˴���b����Ϊ��whileѭ���н�c��ֵ����b
//	return 0;
//}


//<4>��ӡ1000��2000�����ꣻ
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

//<5>.��ӡ100~200�������
//�Գ���
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//�Ż�    �ڰ˼���ʮ������

