#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//���ݽṹ���߼��ṹ��洢�ṹ
//�߼��ṹ�����ϣ����ԣ����Σ�ͼ��
//�洢�ṹ��˳��洢����ʽ�洢�������洢��ɢ�д洢

//�㷨��ʱ�临�Ӷȣ��ռ临�Ӷ�

int main()
{
	int a = 100, b = 200;
	int sum = a + b;
	printf("%d\n", sum);
	//ʱ�临�Ӷȣ�������

	int i = 0,c=0;
	for (i = 0; i <= 100; i++)
	{
		c += i;
	}
	printf("%d\n", c);
	//ʱ�临�Ӷȣ����Խ�

	return 0;
}
