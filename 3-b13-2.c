/* 信02 2250748 王渝鹮 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a, b;
    int leap;
    int ret = 0;
    while (1) {
        printf("请输入年份(2000-2030)和月份(1-12) : ");

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
                printf("输入非法，请重新输入\n");

            }
        }
        else {
            printf("输入非法，请重新输入\n");
            while (getchar() != '\n');

        }


    }

    int c;

    while (1) {
        printf("请输入%d年%d月1日的星期(0-6表示星期日-星期六) : ",a,b);
        ret = scanf("%d", &c);
        if (ret) {
            if (c >= 0 && c <= 6)
                break;
            else if (c < 0 || c>6) {
                printf("输入非法，请重新输入\n");
                continue;
            }
        }
        else {
            printf("输入非法，请重新输入\n");
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
    printf("%d年%d月的月历为:\n",a,b);
    printf("星期日  星期一  星期二  星期三  星期四  星期五  星期六\n");
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