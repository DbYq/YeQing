#include<stdio.h>
enum Color
{
	RED,
    YELLOW,
	BLUE
};
int main()
{
	enum Color color = BLUE;//此处color可以令其为三者中任意一个
	printf("color=%d", color);
	return 0;
}
//常量：意思为生活中不变的常量，例如:字面常量-1，2；const(常属性）修饰的常变量；
//#define定义的标识符常量；枚举常量-enum例题如上