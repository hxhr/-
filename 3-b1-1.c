/*2250748 ��02 �����q*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>



int main()
{
    double r, h;
    const double Pi = 3.14159;

    printf("������뾶�͸߶�\n");
    scanf("%lf %lf", &r, &h);

    double c = 2 * Pi * r;
    double s = Pi * r * r;

    printf("Բ�ܳ�     : %.2lf\n", c);
    printf("Բ���     : %.2lf\n", s);

    double S = 4 * Pi * r * r;
    double V = 4.0 / 3.0 * Pi * r * r * r;
    printf("Բ������ : %.2lf\n", S);
    printf("Բ�����   : %.2lf\n", V);

    double V_c = s * h;
    printf("Բ�����   : %.2lf\n", V_c);
     
    return 0;

}

