//��ϰ��1�ж�һ�����Ƿ�Ϊ����
//2���1~100֮�������
//�⡶1��
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main()
{
	int num = 0;
	scanf("%d", &num);
	if (num % 2 != 0)
		printf("�ú���Ϊ����");
		return 0;
}
//��2#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//��һ{
//    int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//		   printf("%d  ", i);
//		i++;
//	}
//	return 0;
//}
//����
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d  ", i);
//		i += 2;
//	}
//	return 0;
//}