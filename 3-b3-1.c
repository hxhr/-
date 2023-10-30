/*2250748 信02 王渝鹮*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	double h;
	printf("请输入[0-100亿)之间的数字：\n");
	scanf("%lf", &h);
	double s = h + 0.001;

	int b = (int)(s / 10);
	unsigned int d = (unsigned int)(s - 10 * b);
	unsigned int n = (unsigned int)((s - 10 * b - d) * 100);


	printf("十亿位 :  %d\n", b / 100000000 % 10);
	printf("亿位   :  %d\n", b / 10000000 % 10);
	printf("千万位 :  %d\n", b / 1000000 % 10);
	printf("百万位 :  %d\n", b / 100000 % 10);
	printf("十万位 :  %d\n", b / 10000 % 10);
	printf("万位   :  %d\n", b / 1000 % 10);
	printf("千位   :  %d\n", b / 100 % 10);
	printf("百位   :  %d\n", b / 10 % 10);
	printf("十位   :  %d\n", b % 10);
	printf("圆     :  %u\n", d);
	printf("角     :  %u\n", n / 10 % 10);
	printf("分     :  %u\n", n % 10);

	return 0;
}