//switch语句
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)          此处（）内只能填整形表达式
//	{
//	case 1:               case后只能填整型且为常量表达式
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
//	return 0;
//}
//化简：
//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("双休日\n");
//		break;
//	}
//	return 0;
//}



int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:m++;    //此时switch以n为入口而n=1所以从case 1开始执行
	case 2:n++;
		switch (n)
		{
		case 1:n++;
		case 2:m++;     //此时switch以n为入口而n=2所以从case 2开始执行
			n++;
			break;
		}
	case 4:m++;
		break;
	default:
		break;
	}
	printf("n=%d,m=%d",n,m);
	return 0;

}