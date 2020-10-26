//初识结构体---描绘复杂对象《书》-名字+作者+出版社+定价
//例《1》
#include<stdio.h>
//创建一个结构体类型
struct Book
{
	char name[20];
	char writer[10];
	char press[10];
	short price;
};
int main()
{
	//利用结构体类型创建一个结构体变量
	struct Book b1={"C语言程序设计","谭浩强","清华出版社",55 };
	printf("书名：%s\n", b1.name);
	printf("作者：%s\n", b1.writer);
	printf("出版社：%s\n", b1.press);
	printf("价格：%d\n", b1.price);
	b1.price = 15;
	printf("修改后的价格：%d\n", b1.price);
	return 0;
}