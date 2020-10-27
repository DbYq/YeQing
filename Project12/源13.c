//循环语句 while循环
//打印1~10，
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
//	printf("请输入密码：>");
//	scanf("%s", password);//输入密码并存放在password中
//	while ((ch = getchar() != '\n'))//使用ch=getchar()循环读取密码password中未被读取的剩余字符
//		//直到读完回车键所隐藏的'\n'为止
//	{
//		;
//	}
//	printf("请确认(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}

//for循环(优势循环）
//语法：for(表达式1;表达式2;表达式3）---注释：表达式1为初始化部分，用于初始化循环变量如int a;
//表达式2为条件判断部分用于判断循环时候终止如a<10的判断；表达式3为调整部分用于循环条件的调整如
//a++
//循环语句;
//打印1~10
#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (5 == i)
			//break;此时当i=5时break使其之后的运算全部无效所以5及之后的结果都不能输出
			continue;//此时当i=5时continue使其之后的运算无效且重新返回i++这一步所以5无输出
		printf("%d ", i);
	}
	return 0;
}