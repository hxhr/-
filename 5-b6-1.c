/* 2250748 王渝鹮 信02 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int top1 = 0;
int top2 = 0;
int top3 = 0;

int A[10] = { 0 };
int B[10] = { 0 };
int C[10] = { 0 };
int step = 0;


void hanoi(int n, char src, char tmp, char dst)
{

    if (n == 1) {

        step++;

        printf("第%4d 步(%2d): %c-->%c ", step, 1, src, dst);
        if (src == 'A') {
            A[--top1] = 0;
        }
        else if (src == 'B') {
            B[--top2] = 0;
        }
        else if (src == 'C') {
            C[--top3] = 0;
        }
        if (dst == 'A') {
            A[top1++] = 1;
        }
        else if (dst == 'B') {
            B[top2++] = 1;
        }
        else if (dst == 'C') {
            C[top3++] = 1;
        }

        printf("A:");
        for (int i = 0; i < 10; i++) {

            if (A[i] == 0) {

                printf("  ");
            }
            else {

                printf("%2d", A[i]);
            }
        }
        printf(" ");
        printf("B:");
        for (int i = 0; i < 10; i++) {
            if (B[i] == 0) {
                printf("  ");
            }
            else {
                printf("%2d", B[i]);
            }
        }
        printf(" ");
        printf("C:");
        for (int i = 0; i < 10; i++) {
            if (C[i] == 0) {
                printf("  ");
            }
            else {
                printf("%2d", C[i]);
            }
        }

        printf("\n");


    }
    else {
        hanoi(n - 1, src, dst, tmp);
        step++;
        printf("第%4d 步(%2d): %c-->%c ", step, n, src, dst);
        if (src == 'A') {
            A[--top1] = 0;
        }
        else if (src == 'B') {
            B[--top2] = 0;
        }
        else if (src == 'C') {
            C[--top3] = 0;
        }
        if (dst == 'A') {
            A[top1++] = n;
        }
        else if (dst == 'B') {
            B[top2++] = n;
        }
        else if (dst == 'C') {
            C[top3++] = n;
        }

        printf("A:");
        for (int i = 0; i < 10; i++) {

            if (A[i] == 0) {

                printf("  ");
            }
            else {

                printf("%2d", A[i]);
            }
        }
        printf(" ");
        printf("B:");
        for (int i = 0; i < 10; i++) {
            if (B[i] == 0) {
                printf("  ");
            }
            else {
                printf("%2d", B[i]);
            }
        }
        printf(" ");
        printf("C:");
        for (int i = 0; i < 10; i++) {
            if (C[i] == 0) {
                printf("  ");
            }
            else {
                printf("%2d", C[i]);
            }
        }

        printf("\n");

        hanoi(n - 1, tmp, src, dst);
    }

}


int main()
{
    int n;
    char src;
    char tmp = 'b';
    char dst;

    while (1) {
        printf("请输入汉诺塔的层数(1-10)\n");

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

        printf("请输入起始柱(A-C)\n");
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
        printf("请输入目标柱(A-C)\n");
        scanf("%c", &dst);
        if ((dst == 'a' || dst == 'A' || dst == 'b' || dst == 'B' || dst == 'c' || dst == 'C') && dst != src && dst != (src + 32) && dst != (src - 32)) {
            while (getchar() != '\n');
            break;

        }
        else {
            while (getchar() != '\n');
            if (dst == src || dst == (src + 32) || dst == (src - 32)) {
                printf("目标柱(%c)不能与起始柱(%c)相同\n", toupper(src), toupper(dst));

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
    //switch别忘了加break
    switch (src) {
        case 'A':
            for (int i = n; i >= 1; i--) {
                A[top1++] = i;
            }
            break;
        case 'B':
            for (int i = n; i >= 1; i--) {
                B[top2++] = i;
            }
            break;
        case 'C':
            for (int i = n; i >= 1; i--) {
                C[top3++] = i;
            }
            break;
    }

    printf("初始:                ");
    printf("A:");
    for (int i = 0; i < 10; i++) {

        if (A[i] == 0) {

            printf("  ");
        }
        else {

            printf("%2d", A[i]);
        }
    }
    printf(" ");
    printf("B:");
    for (int i = 0; i < 10; i++) {
        if (B[i] == 0) {
            printf("  ");
        }
        else {
            printf("%2d", B[i]);
        }
    }
    printf(" ");
    printf("C:");
    for (int i = 0; i < 10; i++) {
        if (C[i] == 0) {
            printf("  ");
        }
        else {
            printf("%2d", C[i]);
        }
    }

    printf("\n");


    hanoi(n, src, tmp, dst);
    return 0;

}