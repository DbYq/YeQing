//switch���
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)          �˴�������ֻ�������α��ʽ
//	{
//	case 1:               case��ֻ����������Ϊ�������ʽ
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//	return 0;
//}
//����
//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("˫����\n");
//		break;
//	}
//	return 0;
//}



int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:m++;    //��ʱswitch��nΪ��ڶ�n=1���Դ�case 1��ʼִ��
	case 2:n++;
		switch (n)
		{
		case 1:n++;
		case 2:m++;     //��ʱswitch��nΪ��ڶ�n=2���Դ�case 2��ʼִ��
			n++;
			break;
		}
	case 4:m++;
		break;
	default:
		break;
	}
	printf("n=%d,m=%d",n,m);
	return 0;

}