//��ʶ�ṹ��---��渴�Ӷ����顷-����+����+������+����
//����1��
#include<stdio.h>
//����һ���ṹ������
struct Book
{
	char name[20];
	char writer[10];
	char press[10];
	short price;
};
int main()
{
	//���ýṹ�����ʹ���һ���ṹ�����
	struct Book b1={"C���Գ������","̷��ǿ","�廪������",55 };
	printf("������%s\n", b1.name);
	printf("���ߣ�%s\n", b1.writer);
	printf("�����磺%s\n", b1.press);
	printf("�۸�%d\n", b1.price);
	b1.price = 15;
	printf("�޸ĺ�ļ۸�%d\n", b1.price);
	return 0;
}