/* 信02 2250748 王渝鹮 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int zeller(int a, int b, int c) {
	if (b == 1) {
		b = 13;
		a = a - 1;
	}
	if (b == 2) {
		b = 14;
		a = a - 1;
	}
	int cen = a / 100;
	int year = a - cen * 100;
	int mon = b;
	int day = c;
	int w = year + year / 4 + cen / 4 - 2 * cen + 13 * (mon + 1) / 5 + day - 1;
	while (w < 0) {
		w = w + 7;
	}
	int s = w % 7;
	return s;
}


int main()
{
	int a, b, c;
	int leap;
	int ret;

	while (1) {
		
		printf("请输入年[1900-2100]、月、日：\n");
	
		ret=scanf("%d %d %d", &a, &b, &c);
		if (ret) {

			if (a < 1900 || a>2100) {
				printf("年份不正确，请重新输入\n");
				while (getchar() != '\n');
				continue;
			}
			else {
				if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) {
					leap = 1;
				}
				else {
					leap = 0;
				}


			}
			if (b < 1 || b>12) {
				printf("月份不正确，请重新输入\n");
				while (getchar() != '\n');
				continue;
			}
			else if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12) {
				if (c < 1 || c>31) {
					printf("日不正确，请重新输入\n");
					while (getchar() != '\n');
					continue;
				}
				break;
			}
			else if (b == 4 || b == 6 || b == 9 || b == 11) {
				if (c < 1 || c>30) {
					printf("日不正确，请重新输入\n");
					while (getchar() != '\n');
					continue;
				}
				break;
			}
			else {
				if (leap) {
					if (c < 1 || c>29) {
						printf("日不正确，请重新输入\n");
						while (getchar() != '\n');
						continue;
					}
					break;
				}
				else {
					if (c < 1 || c>28) {
					
						printf("日不正确，请重新输入\n");
						while (getchar() != '\n');
						continue;
					}
					break;
				}
			}
		}
		else {
			printf("输入错误，请重新输入\n");
			while (getchar() != '\n');
		}


	}

	int w = zeller(a, b, c);
	switch (w) {
		case 0:
			printf("星期日\n");
			break;
		case 1:
			printf("星期一\n");
			break;
		case 2:
			printf("星期二\n");
			break;
		case 3:
			printf("星期三\n");
			break;
		case 4:
			printf("星期四\n");
			break;
		case 5:
			printf("星期五\n");
			break;
		case 6:
			printf("星期六\n");
			break;
	}

	return 0;
}