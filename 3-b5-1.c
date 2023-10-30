/*2250748 信02 王渝鹮*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    printf("请输入年，月，日\n");
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (b >= 1 && b <= 12) {
        int leap;
        if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) {
            leap = 1;
        }
        else {
            leap = 0;
        }
        switch (b) {
            case 1:
                if (c >= 1 && c <= 31) {
                    printf("%d-%d-%d是%d年的第%d天\n", a, b, c, a, c);
                }
                else {
                    printf("输入错误-日与月的关系非法\n");
                }
                break;

            case 2:
                if (leap) {
                    if (c >= 1 && c <= 29) {
                        printf("%d-%d-%d是%d年的第%d天\n", a, b, c, a, c + 31);
                    }
                    else {
                        printf("输入错误-日与月的关系非法\n");
                    }
                }
                else {
                    if (c >= 1 && c <= 28) {
                        printf("%d-%d-%d是%d年的第%d天\n", a, b, c, a, c + 31);
                    }
                    else {
                        printf("输入错误-日与月的关系非法\n");
                    }
                }
                break;


            case 3:
                if (c >= 1 && c <= 31) {
                    printf("%d-%d-%d是%d年的第%d天\n", a, b, c, a, c + 31 + 28 + leap);
                }
                else {
                    printf("输入错误-日与月的关系非法\n");
                }
                break;

            case 4:
                if (c >= 1 && c <= 30) {
                    printf("%d-%d-%d是%d年的第%d天\n", a, b, c, a, c + 31 * 2 + 28 + leap);
                }
                else {
                    printf("输入错误-日与月的关系非法\n");
                }
                break;
            case 5:
                if (c >= 1 && c <= 31) {
                    printf("%d-%d-%d是%d年的第%d天\n", a, b, c, a, c + 31 * 2 + 28 + leap);
                }
                else {
                    printf("输入错误-日与月的关系非法\n");
                }
                break;
            case 6:
                if (c >= 1 && c <= 30) {
                    printf("%d-%d-%d是%d年的第%d天\n", a, b, c, a, c + 31 * 2 + 28 + leap);
                }
                else {
                    printf("输入错误-日与月的关系非法\n");
                }
                break;


            case 7:
                if (c >= 1 && c <= 31) {
                    printf("%d-%d-%d是%d年的第%d天\n", a, b, c, a, c + 31 * 2 + 28 + leap);
                }
                else {
                    printf("输入错误-日与月的关系非法\n");
                }
                break;
            case 8:
                if (c >= 1 && c <= 31) {
                    printf("%d-%d-%d是%d年的第%d天\n", a, b, c, a, c + 31 * 4 + 30 * 2 + 28 + leap);
                }
                else {
                    printf("输入错误-日与月的关系非法\n");
                }
                break;
            case 9:
                if (c >= 1 && c <= 30) {
                    printf("%d-%d-%d是%d年的第%d天\n", a, b, c, a, c + 31 * 5 + 30 * 2 + 28 + leap);
                }
                else {
                    printf("输入错误-日与月的关系非法\n");
                }
                break;
            case 10:
                if (c >= 1 && c <= 31) {
                    printf("%d-%d-%d是%d年的第%d天\n", a, b, c, a, c + 31 * 5 + 30 * 3 + 28 + leap);
                }
                else {
                    printf("输入错误-日与月的关系非法\n");
                }
                break;
            case 11:
                if (c >= 1 && c <= 30) {
                    printf("%d-%d-%d是%d年的第%d天\n", a, b, c, a, c + 31 * 6 + 30 * 3 + 28 + leap);
                }
                else {
                    printf("输入错误-日与月的关系非法\n");
                }
                break;

            case 12:
                if (c >= 1 && c <= 31) {
                    printf("%d-%d-%d是%d年的第%d天\n", a, b, c, a, c + 31 * 6 + 30 * 4 + 28 + leap);
                }
                else {
                    printf("输入错误-日与月的关系非法\n");
                }
                break;
        }
    }
    else {
        printf("输入错误-月份不正确\n");
    }
    return 0;
}