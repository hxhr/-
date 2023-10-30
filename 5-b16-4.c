/*2250748 信02 王渝鹮*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void shuru(char num[10][8],char name[10][9],int grade[])
{
	for (int i = 0; i < 10; i++) {
		printf("请输入第%d个人的学号、姓名、成绩\n", i + 1);
		scanf("%s%s%d", num[i], name[i], &grade[i]);
	}

}

void paixu(int grade[], char num[10][8], char name[10][9])
{
	for (int i = 0; i < 10; i++) {
		for (int j = 9; j > i; j--) {

			if (grade[j] > grade[j - 1]) {
				int t1 = grade[j];
				grade[j] = grade[j - 1];
				grade[j - 1] = t1;

				char t2[8] = { 0 };
				for (int n = 0; n < 8; n++) {
					t2[n] = num[j][n];
				}
				for (int m = 0; m < 8; m++) {
					num[j][m] = num[j - 1][m];
				}
				for (int l = 0; l < 8; l++) {
					num[j - 1][l] = t2[l];
				}

				//复制粘贴要改全，检查耽误半个小时
				char t3[9] = { 0 };
				for (int n = 0; n < 9; n++) {
					t3[n] = name[j][n];
				}
				for (int m = 0; m < 9; m++) {
					name[j][m] = name[j - 1][m];
				}
				for (int l = 0; l < 9; l++) {
					name[j - 1][l] = t3[l];
				}



			}
		}
	}

}

void shuchu(int grade[], char num[10][8], char name[10][9])
{

	printf("\n");
	printf("全部学生(成绩降序):\n");
	for (int i = 0; i < 10; i++) {
		printf("%s %s %d\n", name[i], num[i], grade[i]);
	}
}
int main()
{
	char num[10][8] = { 0 };
	char name[10][9] = { 0 };
	int grade[10] = { 0 };

	shuru(num, name, grade);
	paixu(grade, num, name);
	shuchu(grade, num, name);
	


	return 0;
}