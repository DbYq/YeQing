#define _CRT_SECURE_NO_WARNINGS
//��ʶ����
//#include<stdio.h>            ��Ϊ���庯�������������
//int ADD(int x,int y)
//{
//	int z;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = ADD(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//�⺯��  ͨ����������ѧϰ
//��1
#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "***********";   //ע��˴�strcpy����bit��arr2ʱ��ʡ�Ե�\0Ҳ����ȥ�˶�\0��ʾ�������Խ�arr1������arr2
//	��ôarr1�е��ַ�����ȡ��arr2�е��ַ�
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//����
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);             Դͷ���ݱ��뱣֤��Ŀ�ĵؿռ�̻��߱�֤Ŀ�ĵؿռ��㹻�󣻷�������bug
//	printf("%s\n", arr);
//	return 0;
//}