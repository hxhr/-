/*2250748 ��02 �����q*/
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
    int day2[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };//����

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
    printf("�������꣬�£���\n");
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int day1[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    int day2[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };//����
    int leap = run(a);//��¼�Ƿ�Ϊ����
    if (b < 1 || b > 12) {
        printf("�������-�·ݲ���ȷ\n");
        return 0;
    }
    //�жϷǷ���ֱ��return0
    if (leap > 0) {
        if (day2[b - 1] < c) {
            printf("�������-�����µĹ�ϵ�Ƿ�\n");
            return 0;
        }
    }
    else {
        if (day1[b - 1] < c) {
            printf("�������-�����µĹ�ϵ�Ƿ�\n");
            return 0;
        }
    }
    int end = plus(leap, b, c);
    printf("%d-%d-%d��%d��ĵ�%d��\n", a, b, c, a, end);

    return 0;
}