#include<stdio.h>
//��ϰ1��ӡ100�����ټ������
//��ͨ����
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

//������
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (0 == n % j)            //�˴�nҪ����jǰ
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
//		if (is_prime(i) == 1)                //�涨is_prime()����������������  ����=1ʱΪ���� ����Ϊ0��������
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//�Ż�
//#include <math.h>                            //�˴�Ϊ��ƽ��������ͷ�ļ�
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)         //sqrt(n)��ʾn�Ŀ�ƽ��
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
//дһ�������ж�1000~2000���е�����
//��ͨ����
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
//������
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