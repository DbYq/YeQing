//题目1
#include<stdio.h>
int main()
{
	float length=0;
	float proportion=0;
	int days = 0;
	printf("请输入绳子的长度和每次剪完剩下绳子占原来长度的比重：");
	scanf_s("%f %f", &length, &proportion);
	while (length >= 1)
	{
		if (length == 1)
		{
			printf("%d次后绳子变成了1cm！", days);//continue;
		}
		else
		{
			length = length * proportion;
			days++;
		}
	}
	printf("绳子无法剪成1cm长！此时长度为: %lf", length);
	return 0;
}