/* ��02 2250748 �����q */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int ret, x;

	while (1) {
		printf("������x��ֵ[0-100] : ");
		ret = scanf("%d", &x); //����x�ķ�ʽ������scanf�Ҹ�ʽ��Ϊ%d����׼�÷�scanf
		if (ret == 1 && (x >= 0 && x <= 100))
			break;
		else if (ret == 1) {
			printf("�����д�[ret=%d x=%d],����������\n", ret, x);
		}
		else {
			printf("�����д�[ret=%d x=%d],����������\n", ret, x);
			while (getchar() != '\n');
		}



	}

	printf("ret=%d x=%d\n", ret, x);

	return 0;
}
