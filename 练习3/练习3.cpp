//�������1/1-1/2+1/3......+1/99-1/100;
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	double num = 0.0;
//	int flage = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		num = flage*1.0 / i;
//		sum = num + sum;
//		flage = -flage;
//	}
//	printf("%lf", sum);
//	return 0;
//}
//2.��ʮ�������е����ֵ;
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//��Ϊ��Ԫ�ظ�����ʽ
//	for (i = 0; i < sz; i++)//�����ѭ��������iΪÿ��Ԫ�ص��±�   ������ע�⡷�����˴�i=0������Ӧ�ĺ���Ϊarr[0];�������
//		//�����Ϊi=1����Ȼi=0Ҳδ�����ɣ�
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}
//�˷��ھ���
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//���ַ�
int main()
{
	int k = 0;
	scanf("%d", &k);
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int left = 0;//���±�
	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
	int right = sz - 1;//���±�
	while (left <= right)//�˴�������ᵼ�����ҵ������ִ���
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("�ҵ��ˣ��±���%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}
	return 0;
}


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
//	printf("%d ", b);
//	return 0;
//}