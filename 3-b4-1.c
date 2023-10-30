/*2250748 信02 王渝鹮*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#define Pi 3.14159

int main()
{
	int a, b, c;
	printf("请输入三角形的两边及其夹角（角度）\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	float s = (float)(0.5 * a * b * sin(c * Pi / 180));

	printf("三角形面积为 : %.3f\n", s);
	return 0;

}