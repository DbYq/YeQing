//��һ��
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 3 == 0 && n % 5 == 0)
//	{
//		printf("�������Ա�3��5����\n");
//	}
//	else
//	{
//		printf("�����ܱ�����\n");
//	}
//	return 0;
//}
//�ڶ���
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//������
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int z = 0;
//	scanf("%d %d", &m, &n);
//	while (z=m % n)
//	{
//		m = n;
//		n = z;
//	}
//	printf("%d\n", n);
//	return 0;
//}
//������
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + i;
//	}
//	printf("%d", sum);
//	return 0;
//}
//������
int main()
{
	int i = 0;
	for (i = 1900; i <= 2000; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || (i % 100 == 0 && i % 400 == 0))
		{
			printf("%d ", i);
		}
	}
	return 0;
}