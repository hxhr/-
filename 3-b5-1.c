/*2250748 ��02 �����q*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    printf("�������꣬�£���\n");
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
                    printf("%d-%d-%d��%d��ĵ�%d��\n", a, b, c, a, c);
                }
                else {
                    printf("�������-�����µĹ�ϵ�Ƿ�\n");
                }
                break;

            case 2:
                if (leap) {
                    if (c >= 1 && c <= 29) {
                        printf("%d-%d-%d��%d��ĵ�%d��\n", a, b, c, a, c + 31);
                    }
                    else {
                        printf("�������-�����µĹ�ϵ�Ƿ�\n");
                    }
                }
                else {
                    if (c >= 1 && c <= 28) {
                        printf("%d-%d-%d��%d��ĵ�%d��\n", a, b, c, a, c + 31);
                    }
                    else {
                        printf("�������-�����µĹ�ϵ�Ƿ�\n");
                    }
                }
                break;


            case 3:
                if (c >= 1 && c <= 31) {
                    printf("%d-%d-%d��%d��ĵ�%d��\n", a, b, c, a, c + 31 + 28 + leap);
                }
                else {
                    printf("�������-�����µĹ�ϵ�Ƿ�\n");
                }
                break;

            case 4:
                if (c >= 1 && c <= 30) {
                    printf("%d-%d-%d��%d��ĵ�%d��\n", a, b, c, a, c + 31 * 2 + 28 + leap);
                }
                else {
                    printf("�������-�����µĹ�ϵ�Ƿ�\n");
                }
                break;
            case 5:
                if (c >= 1 && c <= 31) {
                    printf("%d-%d-%d��%d��ĵ�%d��\n", a, b, c, a, c + 31 * 2 + 28 + leap);
                }
                else {
                    printf("�������-�����µĹ�ϵ�Ƿ�\n");
                }
                break;
            case 6:
                if (c >= 1 && c <= 30) {
                    printf("%d-%d-%d��%d��ĵ�%d��\n", a, b, c, a, c + 31 * 2 + 28 + leap);
                }
                else {
                    printf("�������-�����µĹ�ϵ�Ƿ�\n");
                }
                break;


            case 7:
                if (c >= 1 && c <= 31) {
                    printf("%d-%d-%d��%d��ĵ�%d��\n", a, b, c, a, c + 31 * 2 + 28 + leap);
                }
                else {
                    printf("�������-�����µĹ�ϵ�Ƿ�\n");
                }
                break;
            case 8:
                if (c >= 1 && c <= 31) {
                    printf("%d-%d-%d��%d��ĵ�%d��\n", a, b, c, a, c + 31 * 4 + 30 * 2 + 28 + leap);
                }
                else {
                    printf("�������-�����µĹ�ϵ�Ƿ�\n");
                }
                break;
            case 9:
                if (c >= 1 && c <= 30) {
                    printf("%d-%d-%d��%d��ĵ�%d��\n", a, b, c, a, c + 31 * 5 + 30 * 2 + 28 + leap);
                }
                else {
                    printf("�������-�����µĹ�ϵ�Ƿ�\n");
                }
                break;
            case 10:
                if (c >= 1 && c <= 31) {
                    printf("%d-%d-%d��%d��ĵ�%d��\n", a, b, c, a, c + 31 * 5 + 30 * 3 + 28 + leap);
                }
                else {
                    printf("�������-�����µĹ�ϵ�Ƿ�\n");
                }
                break;
            case 11:
                if (c >= 1 && c <= 30) {
                    printf("%d-%d-%d��%d��ĵ�%d��\n", a, b, c, a, c + 31 * 6 + 30 * 3 + 28 + leap);
                }
                else {
                    printf("�������-�����µĹ�ϵ�Ƿ�\n");
                }
                break;

            case 12:
                if (c >= 1 && c <= 31) {
                    printf("%d-%d-%d��%d��ĵ�%d��\n", a, b, c, a, c + 31 * 6 + 30 * 4 + 28 + leap);
                }
                else {
                    printf("�������-�����µĹ�ϵ�Ƿ�\n");
                }
                break;
        }
    }
    else {
        printf("�������-�·ݲ���ȷ\n");
    }
    return 0;
}