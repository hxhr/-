/*2250748 ��02 �����q*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int grade[1000] = { 0 };
	for (int i = 0; i < 1000; i++) {
		grade[i] = -1;
	}

	printf("������ɼ������1000������������������\n");
	int x;
	int point = 0;
	for (int i = 0; i < 1000; i++) {
		scanf("%d", &x);
		if (x < 0) {
			point = i;
			break;
		}
		else {
			grade[i] = x;
		}

	}
	if (grade[0] == -1) {
		printf("����Ч����\n");
		return 0;
	}
	printf("���������Ϊ:\n");
	for (int i = 0; i < point; i++) {
		printf("%d ", grade[i]);
		if ((i + 1) % 10 == 0) {
			printf("\n");
		}
	}
	if ((point) % 10 != 0) {
		printf("\n");
	}

	for (int i = 0; i < point - 1; i++) {
		if (grade[i] < grade[i + 1]) {
			int t = grade[i];
			grade[i] = grade[i + 1];
			grade[i + 1] = t;
		}
	}
	int person[101] = { 0 };//ע��0-100������������101

	for (int i = 0; i <= 100; i++) {
		for (int j = 0; j < point; j++) {
			if (grade[j] == i) {
				person[i]++;
			}
		}
	}
	printf("�����������Ķ�Ӧ��ϵΪ:\n");
	for (int i = 100; i >= 0; i--) {
		if (person[i] != 0) {
			printf("%d %d\n", i, person[i]);
		}
	}
	return 0;
}