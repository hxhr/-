/*2250748 ĞÅ02 ÍõÓåûq*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%dx%d=%-4d", j, i, j * i);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}