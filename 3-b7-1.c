/*2250748 信02 王渝鹮*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
    double a;
    printf("请输入找零值：\n");
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
    
    printf("共%d张找零，具体如下：\n",num);
    if (s) {
        printf("50元 : %d张\n", s);
    }
    if (n) {
        printf("20元 : %d张\n", n);
    }
    if (h) {
        printf("10元 : %d张\n", h);
    }
    if (x) {
        printf("5元  : %d张\n", x);
    }
    if (c) {
        printf("1元  : %d张\n", c);
    }
    if (g) {
        printf("5角  : %d张\n", g);
    }
    if (t) {
        printf("1角  : %d张\n", t);
    }
    if (b) {
        printf("5分  : %d张\n", b);
    }
    if (e) {
        printf("2分  : %d张\n", e);
    }
    if (j) {
        printf("1分  : %d张\n", j);
    }






    return 0;


}

