/*2250748 ��02 �����q*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int change(char num[])
{
	int result = 0;
	for (int i = 0; i < 8; i++) {
		if (num[i] >= '0' && num[i] <= '9') {
			result = 10 * result + (num[i] - '0');
		}
	}
	return result;
}
void shuru(char num[10][8], char name[10][9],int grade[])
{
	for (int i = 0; i < 10; i++) {
		printf("�������%d���˵�ѧ�š��������ɼ�\n", i + 1);
		scanf("%s%s%d", num[i], name[i], &grade[i]);
	}
}

void paixu(int result[],char num[10][8], int grade[], char name[10][9])
{

	for (int i = 0; i < 10; i++) {
		result[i] = change(num[i]);
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 9; j > i; j--) {

			if (result[j] > result[j - 1]) {
				//������result����Ҳ������ű�Ŷ�

				int t = result[j];
				result[j] = result[j - 1];
				result[j - 1] = t;

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

				//����ճ��Ҫ��ȫ����鵢����Сʱ
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


void shuchu(int grade[],char name[10][9], char num[10][8])
{
	printf("\n");
	printf("��������(ѧ�Ž���):\n");
	for (int i = 0; i < 10; i++) {
		if (grade[i] >= 60) {
			printf("%s %s %d\n", name[i], num[i], grade[i]);
		}

	}
}
int main()
{
	char num[10][8] = { 0 };
	char name[10][9] = { 0 };
	int grade[10] = { 0 };
	int result[10] = { 0 };

	//���ڲ���c��ʽ������
	//Ҳ����˵���ַ���������벻����

	


	/*for (int i = 0; i < 10; i++) {
		printf("%d\n", result[i]);
	}*/

	shuru(num,name,grade);
	paixu(result,num,grade,name);
	shuchu(grade,name,num);









	


	return 0;
}