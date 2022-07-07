#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//数据结构：逻辑结构与存储结构
//逻辑结构：集合，线性，树形，图形
//存储结构：顺序存储，链式存储，索引存储，散列存储

//算法：时间复杂度，空间复杂度

int main()
{
	int a = 100, b = 200;
	int sum = a + b;
	printf("%d\n", sum);
	//时间复杂度：常数阶

	int i = 0,c=0;
	for (i = 0; i <= 100; i++)
	{
		c += i;
	}
	printf("%d\n", c);
	//时间复杂度：线性阶

	return 0;
}
