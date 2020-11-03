#include<stdio.h>   //9集184分
#include<stdlib.h>
int main()
{
	int a = 2, b = 1, c = 3;
	--b&& ++b || a++;
	printf("%d %d %d\n", a, b, c);  //--b后b为0 为假所以--b&&++b为0；a++为3；输出a=3,b=0,c=3;
	--b& ++c || a++;
	printf("%d %d %d\n", a, b, c);//--b后b为-1为真++c后c为4；所以--b&++c为真a++无需计算a依旧为3；输出a=3,b=-1,c=4;
	!c || ++b && ++a;
	printf("%d %d %d\n", a, b, c); //c为4为真所以!c为假；++b后b为0为假；所以++a无需计算依旧为3；输出a=3,b=0,c=4;
	int sum = a++ + ++a + a++ + ++a;
	printf("%d %d\n", a, sum);     //前面a++调用时a为3但调用后a为4；++a调用时a为5；后面a++调用时a为5但调用后a为6；++a调用时a为7；所以a为7；
	//sum为调用时的数相加即3+5+5+7为20；输出a=7,sum=20;
	printf("%d %d %d %d\n", a++, a--, ++a,a++);  //从最后a++调用时a为7，调用后为8，所以++a调用时a为9，a--调用时a为9，调用后a为8，
	//所以a++调用时a为8，所以按从后往前分别为7998，再按从前往后为8997
	system("pause");
	return 0;
}
