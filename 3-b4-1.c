/*2250748 ��02 �����q*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#define Pi 3.14159

int main()
{
	int a, b, c;
	printf("�����������ε����߼���нǣ��Ƕȣ�\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	float s = (float)(0.5 * a * b * sin(c * Pi / 180));

	printf("���������Ϊ : %.3f\n", s);
	return 0;

}