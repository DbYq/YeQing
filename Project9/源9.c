//分支语句和循环语句(由一个分号隔开的就是语句)
//分支语句(选择结构） if switch
//循环语句 while for do while
//#include<stdio.h>
//int main()
//{
//	int age = 10;
//	if (age < 18)
//		printf("未成年\n");
//	else if (age > 18 && age <= 28)
//		printf("成年\n");
//	else if (age > 28 && age <= 50)
//		printf("壮年\n");
//	else if (age > 50)
//		printf("老年\n");
//	return 0;
//}
//真假的表示
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
}*///注意else只与其离得最近的未匹配的if进行配对
//而此处if (b == 2)
//printf("hh\n");
//		else
//			printf("uu\n");为
//				if (a == 1)的“子项”此处的
//					if (a == 1)为假则其子项不能运行，所以不输出
//综上代码为假不输出
#include<stdio.h>
//int main() {
//	int num = 4;
//	if (num = 5)
//	{
//		printf("hh\n");
//	}
//	return 0;
//}注意此处num=5中为=号表示赋值而非判断相等所以打印hh

//所以以后代码书写表示为
/*int main()
{
	int num = 4;
	if (5 = num)
	{
		printf("hh\n");
	}
	return 0;
}*///此处5=num为错误，所以这样写代码不容易出现bug
