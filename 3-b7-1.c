/*2250748 ��02 �����q*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
    double a;
    printf("����������ֵ��\n");
    scanf("%lf", &a);

    double f = a + 0.001;
    unsigned int d = (unsigned int)(100 * f);

    int s = 0, n = 0, h = 0, x = 0, c = 0, g = 0, t = 0, b = 0, e = 0, j = 0;
    int num = 0;


    if (d >= 5000) {
        s = 1;
        d -= 5000;
        num += s;
    }
    if (d >= 2000) {
        n = n + (d / 2000);
        d = d - 2000 * (d / 2000);
        num += n;
    }
    if (d >= 1000) {
        h = h + 1;
        d = d - 1000;
        num += h;
    }
    if (d >= 500) {
        x = x + 1;
        d = d - 500;
        num += x;
    }
    if (d >= 100) {
        c = c + (d / 100);
        d = d - 100 * (d / 100);
        num += c;
    }
    if (d >= 50) {
        g = g + 1;
        d = d - 50;
        num += g;
    }
    if (d >= 10) {
        t = t + (d / 10);
        d = d - (d / 10) * 10;
        num = num + t;
    }
    if (d >= 5) {
        b = b + 1;
        d = d - 5;
        num = num + b;
    }

    if (d >= 2) {
        e = e + (d / 2);
        d = d - 2 * (d / 2);
        num = num + e;
    }
    j = d;
    num = num + j;
    
    printf("��%d�����㣬�������£�\n",num);
    if (s) {
        printf("50Ԫ : %d��\n", s);
    }
    if (n) {
        printf("20Ԫ : %d��\n", n);
    }
    if (h) {
        printf("10Ԫ : %d��\n", h);
    }
    if (x) {
        printf("5Ԫ  : %d��\n", x);
    }
    if (c) {
        printf("1Ԫ  : %d��\n", c);
    }
    if (g) {
        printf("5��  : %d��\n", g);
    }
    if (t) {
        printf("1��  : %d��\n", t);
    }
    if (b) {
        printf("5��  : %d��\n", b);
    }
    if (e) {
        printf("2��  : %d��\n", e);
    }
    if (j) {
        printf("1��  : %d��\n", j);
    }






    return 0;


}

