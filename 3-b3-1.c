/*2250748 ��02 �����q*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	double h;
	printf("������[0-100��)֮������֣�\n");
	scanf("%lf", &h);
	double s = h + 0.001;

	int b = (int)(s / 10);
	unsigned int d = (unsigned int)(s - 10 * b);
	unsigned int n = (unsigned int)((s - 10 * b - d) * 100);


	printf("ʮ��λ :  %d\n", b / 100000000 % 10);
	printf("��λ   :  %d\n", b / 10000000 % 10);
	printf("ǧ��λ :  %d\n", b / 1000000 % 10);
	printf("����λ :  %d\n", b / 100000 % 10);
	printf("ʮ��λ :  %d\n", b / 10000 % 10);
	printf("��λ   :  %d\n", b / 1000 % 10);
	printf("ǧλ   :  %d\n", b / 100 % 10);
	printf("��λ   :  %d\n", b / 10 % 10);
	printf("ʮλ   :  %d\n", b % 10);
	printf("Բ     :  %u\n", d);
	printf("��     :  %u\n", n / 10 % 10);
	printf("��     :  %u\n", n % 10);

	return 0;
}