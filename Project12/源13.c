//ѭ����� whileѭ��
//��ӡ1~10��
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//<1>.int main()
//{
//	int i = 0;
//	while (i <10)
//	{
//		i++;
//		printf("%d\n", i);
//	}
//	
//	return 0;
//}
//<2>.
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("���������룺>");
//	scanf("%s", password);//�������벢�����password��
//	while ((ch = getchar() != '\n'))//ʹ��ch=getchar()ѭ����ȡ����password��δ����ȡ��ʣ���ַ�
//		//ֱ������س��������ص�'\n'Ϊֹ
//	{
//		;
//	}
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}

//forѭ��(����ѭ����
//�﷨��for(���ʽ1;���ʽ2;���ʽ3��---ע�ͣ����ʽ1Ϊ��ʼ�����֣����ڳ�ʼ��ѭ��������int a;
//���ʽ2Ϊ�����жϲ��������ж�ѭ��ʱ����ֹ��a<10���жϣ����ʽ3Ϊ������������ѭ�������ĵ�����
//a++
//ѭ�����;
//��ӡ1~10
#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (5 == i)
			//break;��ʱ��i=5ʱbreakʹ��֮�������ȫ����Ч����5��֮��Ľ�����������
			continue;//��ʱ��i=5ʱcontinueʹ��֮���������Ч�����·���i++��һ������5�����
		printf("%d ", i);
	}
	return 0;
}