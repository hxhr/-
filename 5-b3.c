/*2250748 信02 王渝鹮*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int run(int a) 
{
    if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) {
        return 1;
    }
    else {
        return -1;
    }
}

int plus(int run, int b, int c)
{
    int day1[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    int day2[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };//闰年

    int sum = 0;
    if (run > 0) {
        for (int i = 0; i < b - 1; i++) {
            sum = sum + day2[i];
        }
        sum = sum + c;
        return sum;
    }
    else {
        for (int i = 0; i < b - 1; i++) {
            sum = sum + day1[i];
        }
        sum = sum + c;
        return sum;
    }
}
int main()
{
    printf("请输入年，月，日\n");
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int day1[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    int day2[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };//闰年
    int leap = run(a);//记录是否为闰年
    if (b < 1 || b > 12) {
        printf("输入错误-月份不正确\n");
        return 0;
    }
    //判断非法后直接return0
    if (leap > 0) {
        if (day2[b - 1] < c) {
            printf("输入错误-日与月的关系非法\n");
            return 0;
        }
    }
    else {
        if (day1[b - 1] < c) {
            printf("输入错误-日与月的关系非法\n");
            return 0;
        }
    }
    int end = plus(leap, b, c);
    printf("%d-%d-%d是%d年的第%d天\n", a, b, c, a, end);

    return 0;
}