#include<stdio.h>
enum Color
{
	RED,
    YELLOW,
	BLUE
};
int main()
{
	enum Color color = BLUE;//�˴�color��������Ϊ����������һ��
	printf("color=%d", color);
	return 0;
}
//��������˼Ϊ�����в���ĳ���������:���泣��-1��2��const(�����ԣ����εĳ�������
//#define����ı�ʶ��������ö�ٳ���-enum��������