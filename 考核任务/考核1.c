//��Ŀ1
#include<stdio.h>
int main()
{
	float length=0;
	float proportion=0;
	int days = 0;
	printf("���������ӵĳ��Ⱥ�ÿ�μ���ʣ������ռԭ�����ȵı��أ�");
	scanf_s("%f %f", &length, &proportion);
	while (length >= 1)
	{
		if (length == 1)
		{
			printf("%d�κ����ӱ����1cm��", days);//continue;
		}
		else
		{
			length = length * proportion;
			days++;
		}
	}
	printf("�����޷�����1cm������ʱ����Ϊ: %lf", length);
	return 0;
}