//<1>由双引号引起的一串字符统称字符串，而单引号中存放单字符
#include<stdio.h>
int main()
{
	char arr1[] = "a,b,c";//char表示数组意思，字符串可存放数组
    char arr2[] = { 'a', 'b', 'c' };//此处不加{}则错误
	printf("%s\n", arr1);//%s表示打印字符
	printf("%s\n", arr2);
	return 0;
}//字符串后隐藏\0表示字符串的结束标志，对字符串至关重要

//<2>  \是用来转义的字符
