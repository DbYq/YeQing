//for循环使用建议：1.不可在for循环内部修改循环变量，防止for循环失去控制。
//2.建议for语句的循环控制变量的取值采用“前闭后开区间”的写法。
//for循环的初始化、调整、判断；都可以省略--但是for循环的判断部分被省略那么判断条件就是恒为正
//简单笔试题：
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int a = 0;
//	for (i = 0, a = 0; i = 0; i++, a++)//注意此处划线部分i=0是定义i为假所以不输出其后程序不执行
//		printf("hehe\n");
//	return 0;
//}


//do while()循环：
//表达式：
//do
//     {循环语句}；
//while（表达式）；表达式为真则再循环表达式为假则不循环
//如打印1`10;
#include<stdio.h>
int main()
{
	int i= 1;
	do
	{
		printf("%d ", i);
		i++;
	}
	while (i <= 10);
	return 0;
}