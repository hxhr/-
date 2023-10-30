/*2250748 信02 王渝鹮*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>



int main()
{
    double r, h;
    const double Pi = 3.14159;

    printf("请输入半径和高度\n");
    scanf("%lf %lf", &r, &h);

    double c = 2 * Pi * r;
    double s = Pi * r * r;

    printf("圆周长     : %.2lf\n", c);
    printf("圆面积     : %.2lf\n", s);

    double S = 4 * Pi * r * r;
    double V = 4.0 / 3.0 * Pi * r * r * r;
    printf("圆球表面积 : %.2lf\n", S);
    printf("圆球体积   : %.2lf\n", V);

    double V_c = s * h;
    printf("圆柱体积   : %.2lf\n", V_c);
     
    return 0;

}

