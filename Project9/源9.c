//��֧����ѭ�����(��һ���ֺŸ����ľ������)
//��֧���(ѡ��ṹ�� if switch
//ѭ����� while for do while
//#include<stdio.h>
//int main()
//{
//	int age = 10;
//	if (age < 18)
//		printf("δ����\n");
//	else if (age > 18 && age <= 28)
//		printf("����\n");
//	else if (age > 28 && age <= 50)
//		printf("׳��\n");
//	else if (age > 50)
//		printf("����\n");
//	return 0;
//}
//��ٵı�ʾ
/*#include <stdio.h>
int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
		if (b == 2)
			printf("hh\n");
		else
			printf("uu\n");
	return 0;
}*///ע��elseֻ������������δƥ���if�������
//���˴�if (b == 2)
//printf("hh\n");
//		else
//			printf("uu\n");Ϊ
//				if (a == 1)�ġ�����˴���
//					if (a == 1)Ϊ��������������У����Բ����
//���ϴ���Ϊ�ٲ����
#include<stdio.h>
//int main() {
//	int num = 4;
//	if (num = 5)
//	{
//		printf("hh\n");
//	}
//	return 0;
//}ע��˴�num=5��Ϊ=�ű�ʾ��ֵ�����ж�������Դ�ӡhh

//�����Ժ������д��ʾΪ
/*int main()
{
	int num = 4;
	if (5 = num)
	{
		printf("hh\n");
	}
	return 0;
}*///�˴�5=numΪ������������д���벻���׳���bug
