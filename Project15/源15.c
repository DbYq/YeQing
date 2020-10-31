#define _CRT_SECURE_NO_WARNINGS
//初识函数
//#include<stdio.h>            此为定义函数求两个数相加
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

//库函数  通过查找文献学习
//例1
#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "***********";   //注意此处strcpy拷贝bit到arr2时将省略的\0也带进去了而\0表示结束所以将arr1拷贝进arr2
//	那么arr1中的字符串将取代arr2中的字符
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//例二
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);             源头数据必须保证比目的地空间短或者保证目的地空间足够大；否则会出现bug
//	printf("%s\n", arr);
//	return 0;
//}