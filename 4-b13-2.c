/* 2250748 �����q ��02 */
#define _CRT_SECURE_NO_WARNINGS
#include <ctype.h>
#include <stdio.h>

/* ----����Ҫ��----
   1���������������ͷ�ļ�
   2��������һ��ȫ�ֱ������������徲̬�ֲ�����
   3�������������������
   4��main�����������룬����ѭ��
   --------------------------------------------------------------------- */


   /***************************************************************************
     �������ƣ�
     ��    �ܣ���ӡn�㺺ŵ�����ƶ�˳��
     ���������int n������
               char src����ʼ��
               char tmp���м���
               char dst��Ŀ����
     �� �� ֵ��
     ˵    ����1�����������βΡ��������;���׼��
               2������������������κ���ʽ��ѭ��
   ***************************************************************************/
int step = 0;
void hanoi(int n, char src, char tmp, char dst)
{

    if (n == 1) {

        step++;
        printf("%5d", step);
        printf(":");
        printf("%3d", 1);
        printf("# %c-->%c\n", src, dst);

    }
    else {
        hanoi(n - 1, src, dst, tmp);
        step++;
        printf("%5d", step);
        printf(":");
        printf("%3d", n);
        printf("# %c-->%c\n", src, dst);

        hanoi(n - 1, tmp, src, dst);
    }
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����1��������롢���õݹ麯��
            2�������������ʱ������ʹ��ѭ��
            3��Ϊ��ͳһ��飬���������������������������ʼ/Ŀ�����Ĵ��벻Ҫ��ͳһ����������ֱ�ӷ���main�У�
***************************************************************************/
int main()
{
    int n;
    char src;
    char tmp = 'b';
    char dst;

    while (1) {
        printf("�����뺺ŵ���Ĳ���(1-16)\n");

        scanf("%d", &n);
        if (n >= 1 && n <= 16) {
            while (getchar() != '\n');
            break;

        }
        else {
            while (getchar() != '\n');
        }


    }
    while (1) {

        printf("��������ʼ��(A-C)\n");
        scanf("%c", &src);
        if (src == 'a' || src == 'A' || src == 'b' || src == 'B' || src == 'c' || src == 'C') {
            while (getchar() != '\n');
            break;

        }
        else {
            while (getchar() != '\n');
        }


    }
    while (1) {
        printf("������Ŀ����(A-C)\n");
        scanf("%c", &dst);
        if ((dst == 'a' || dst == 'A' || dst == 'b' || dst == 'B' || dst == 'c' || dst == 'C') && dst != src && dst != (src + 32) && dst != (src - 32)) {
            while (getchar() != '\n');
            break;

        }
        else {
            while (getchar() != '\n');
            if (dst == src || dst == (src + 32) || dst == (src - 32)) {
                printf("Ŀ����(%c)��������ʼ��(%c)��ͬ\n", toupper(src), toupper(dst));

            }
        }


    }
    if (tmp == src || tmp == (src + 32) || tmp == dst || tmp == (dst + 32)) {
        tmp = 'a';
    }
    if (tmp == src || tmp == (src + 32) || tmp == dst || tmp == (dst + 32)) {
        tmp = 'c';
    }
    if ((int)(tmp) > 96) {
        tmp = tmp - 32;
    }
    if ((int)(src) > 96) {
        src = src - 32;
    }
    if ((int)(dst) > 96) {
        dst = dst - 32;
    }
    printf("�ƶ�����Ϊ:\n");
    hanoi(n, src, tmp, dst);
    return 0;
}