/* ��02 2250748 �����q */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a, b;
    int leap;
    int ret = 0;
    while (1) {
        printf("���������(2000-2030)���·�(1-12) : ");

        ret = scanf("%d %d", &a, &b);
        if (ret) {
            if (b >= 1 && b <= 12 && a >= 2000 && a <= 2030) {

                if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) {
                    leap = 1;
                }
                else {
                    leap = 0;
                }
                break;
            }
            else {
                printf("����Ƿ�������������\n");

            }
        }
        else {
            printf("����Ƿ�������������\n");
            while (getchar() != '\n');

        }


    }

    int c;

    while (1) {
        printf("������%d��%d��1�յ�����(0-6��ʾ������-������) : ",a,b);
        ret = scanf("%d", &c);
        if (ret) {
            if (c >= 0 && c <= 6)
                break;
            else if (c < 0 || c>6) {
                printf("����Ƿ�������������\n");
                continue;
            }
        }
        else {
            printf("����Ƿ�������������\n");
            while (getchar() != '\n');
        }


    }
    int m = 0;
    if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12) {
        m = 31;
    }
    else if (b == 2) {
        if (leap) {
            m = 29;
        }
        else {
            m = 28;
        }
    }
    else {
        m = 30;
    }
    printf("\n");
    printf("%d��%d�µ�����Ϊ:\n",a,b);
    printf("������  ����һ  ���ڶ�  ������  ������  ������  ������\n");
    int d = c;
    for (int i = 0; i < 8 * c; i++) {
        printf(" ");
    }
    for (int j = 1; j <= m; d++) {
        printf("%4d", j);
        j++;
        
        printf("    ");
        
        if (d == 6) {
            d = -1;
            printf("\n");
        }
    }






    return 0;
}