/*2250748 ��02 �����q*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int main()
{
	double h;
	printf("������[0-100��)֮�������:\n");
	scanf("%lf", &h);
	double s = h + 0.001;

	int b = (int)(s / 10);
	unsigned int d = (unsigned int ) (s - 10 * b);
	unsigned int n = (unsigned int ) ((s - 10 * b - d) * 100);

	int leap;
	int z1;
	printf("��д�����:\n");

		//ʮ��-��
		switch (b / 100000000 % 10) {
			case 0:
				break;
			case 1:
				printf("Ҽʰ");
				break;
			case 2:
				printf("��ʰ");
				break;
			case 3:
				printf("��ʰ");
				break;
			case 4:
				printf("��ʰ");
				break;
			case 5:
				printf("��ʰ");
				break;
			case 6:
				printf("½ʰ");
				break;
			case 7:
				printf("��ʰ");
				break;
			case 8:
				printf("��ʰ");
				break;
			case 9:
				printf("��ʰ");
				break;
		}

		if (b / 100000000 % 10 == 0) {
			z1 = 0;
		}
		else {
			z1 = 1;
		}



		switch (b / 10000000 % 10) {
			case 0:
				if (z1) {
					printf("��");
				}
				break;

			case 1:
				printf("Ҽ��");
				break;
			case 2:
				printf("����");
				break;
			case 3:
				printf("����");
				break;
			case 4:
				printf("����");
				break;
			case 5:
				printf("����");
				break;
			case 6:
				printf("½��");
				break;
			case 7:
				printf("����");
				break;
			case 8:
				printf("����");
				break;
			case 9:
				printf("����");
				break;
		}

		if (b / 10000000 % 10 == 0 && z1 == 0) {
			z1 = 0;
		}
		else {
			z1 = 1;
		}







		//ǧ��-��
		int z2 = 0;
		switch (b / 1000000 % 10) {
			case 0:
				if (z1 && b / 100000 % 10 != 0) {
					printf("��");
				}
				break;

			case 1:
				printf("ҼǪ");
				break;
			case 2:
				printf("��Ǫ");
				break;
			case 3:
				printf("��Ǫ");
				break;
			case 4:
				printf("��Ǫ");
				break;
			case 5:
				printf("��Ǫ");
				break;
			case 6:
				printf("½Ǫ");
				break;
			case 7:
				printf("��Ǫ");
				break;
			case 8:
				printf("��Ǫ");
				break;
			case 9:
				printf("��Ǫ");
				break;
		}
		//�����һλ��0����leap=1
		if (b / 1000000 % 10 == 0) {
			leap = 0;
		}
		else {
			leap = 1;
		}
		if (b / 1000000 % 10 == 0) {
			z2 = 0;
		}
		else {
			z2 = 1;
		}
		//����

		switch (b / 100000 % 10) {
			case 0:
				if ((z1 || z2) && b / 10000 % 10 != 0) {
					printf("��");
				}
				break;

			case 1:
				printf("Ҽ��");
				break;
			case 2:
				printf("����");
				break;
			case 3:
				printf("����");
				break;
			case 4:
				printf("����");
				break;
			case 5:
				printf("���");
				break;
			case 6:
				printf("½��");
				break;
			case 7:
				printf("���");
				break;
			case 8:
				printf("�ư�");
				break;
			case 9:
				printf("����");
				break;
		}
		if (b / 100000 % 10 == 0) {
			leap = 0;
		}
		else {
			leap = 1;
		}
		if (b / 100000 % 10 == 0 && z2 == 0) {
			z2 = 0;
		}
		else {
			z2 = 1;
		}
		//ʮ��

		switch (b / 10000 % 10) {
			case 0:
				if ((z1 || z2) && b / 1000 % 10 != 0) {
					printf("��");
				}
				break;

			case 1:
				printf("Ҽʰ");
				break;
			case 2:
				printf("��ʰ");
				break;
			case 3:
				printf("��ʰ");
				break;
			case 4:
				printf("��ʰ");
				break;
			case 5:
				printf("��ʰ");
				break;
			case 6:
				printf("½ʰ");
				break;
			case 7:
				printf("��ʰ");
				break;
			case 8:
				printf("��ʰ");
				break;
			case 9:
				printf("��ʰ");
				break;
		}

		if (b / 10000 % 10 == 0 && z2 == 0) {
			z2 = 0;
		}
		else {
			z2 = 1;
		}
		//��λ

		switch (b / 1000 % 10) {
			case 0:
				if (z2) {
					printf("��");
				}
				break;

			case 1:
				printf("Ҽ��");
				break;
			case 2:
				printf("����");
				break;
			case 3:
				printf("����");
				break;
			case 4:
				printf("����");
				break;
			case 5:
				printf("����");
				break;
			case 6:
				printf("½��");
				break;
			case 7:
				printf("����");
				break;
			case 8:
				printf("����");
				break;
			case 9:
				printf("����");
				break;
		}

		if (b / 1000 % 10 == 0 && z2 == 0) {
			z2 = 0;
		}
		else {
			z2 = 1;
		}



		//ǧλ����λ

		//ǧλ
		int z3 = 0;
		switch (b / 100 % 10) {
			case 0:
				if ((z1 || z2) && b / 10 % 10 != 0) {
					printf("��");
				}

				break;
			case 1:
				printf("ҼǪ");
				break;
			case 2:
				printf("��Ǫ");
				break;
			case 3:
				printf("��Ǫ");
				break;
			case 4:
				printf("��Ǫ");
				break;
			case 5:
				printf("��Ǫ");
				break;
			case 6:
				printf("½Ǫ");
				break;
			case 7:
				printf("��Ǫ");
				break;
			case 8:
				printf("��Ǫ");
				break;
			case 9:
				printf("��Ǫ");
				break;
		}
		if (b / 100 % 10 == 0) {
			leap = 0;
		}
		else {
			leap = 1;
		}
		if (b / 100 % 10 == 0) {
			z3 = 0;
		}
		else {
			z3 = 1;
		}
		//��λ

		switch (b / 10 % 10) {
			case 0:
				if ((z1 || z2 || z3) && b % 10 != 0) {
					printf("��");
				}
				break;

			case 1:
				printf("Ҽ��");
				break;
			case 2:
				printf("����");
				break;
			case 3:
				printf("����");
				break;
			case 4:
				printf("����");
				break;
			case 5:
				printf("���");
				break;
			case 6:
				printf("½��");
				break;
			case 7:
				printf("���");
				break;
			case 8:
				printf("�ư�");
				break;
			case 9:
				printf("����");
				break;
		}
		
		if (b / 10 % 10 == 0) {
			leap = 0;
		}
		else {
			leap = 1;
		}
		if (b / 10 % 10 == 0 && z3 == 0) {
			z3 = 0;
		}
		else {
			z3 = 1;
		}
		//ʮλ

		switch (b % 10) {
			case 0:
				if ((z1 || z2 || z3) && d != 0) {
					printf("��");
				}
				break;
			case 1:
				printf("Ҽʰ");
				break;
			case 2:
				printf("��ʰ");
				break;
			case 3:
				printf("��ʰ");
				break;
			case 4:
				printf("��ʰ");
				break;
			case 5:
				printf("��ʰ");
				break;
			case 6:
				printf("½ʰ");
				break;
			case 7:
				printf("��ʰ");
				break;
			case 8:
				printf("��ʰ");
				break;
			case 9:
				printf("��ʰ");
				break;
		}
		if (b % 10) {
			leap = 0;
		}
		else {
			leap = 1;
		}
		if (b % 10 == 0 && z3 == 0) {
			z3 = 0;
		}
		else {
			z3 = 1;
		}
		//Բ

		switch (d) {
			case 0:
				if (z1 == 0 && z2 == 0 && z3 == 0 && n / 10 % 10 == 0 && n % 10 == 0) {
					printf("��Բ");
				}
				if (z1 || z2 || z3) {

					printf("Բ");
				}
				break;
			case 1:
				printf("ҼԲ");
				break;
			case 2:
				printf("��Բ");
				break;
			case 3:
				printf("��Բ");
				break;
			case 4:
				printf("��Բ");
				break;
			case 5:
				printf("��Բ");
				break;
			case 6:
				printf("½Բ");
				break;
			case 7:
				printf("��Բ");
				break;
			case 8:
				printf("��Բ");
				break;
			case 9:
				printf("��Բ");
				break;
		}
		if (d == 0 && z3 == 0) {
			z3 = 0;
		}
		else {
			z3 = 1;
		}







		//��-��

		if (n / 10 % 10 == 0 && n % 10 == 0) {
			printf("��\n");
		}
		else {
			//��
			switch (n / 10 % 10) {
				case 0:
					if (z1 == 0 && z2 == 0 && z3 == 0) {
						break;
					}
					else {
						printf("��");
						break;

					}
				case 1:
					printf("Ҽ��");
					break;
				case 2:
					printf("����");
					break;
				case 3:
					printf("����");
					break;
				case 4:
					printf("����");
					break;
				case 5:
					printf("���");
					break;
				case 6:
					printf("½��");
					break;
				case 7:
					printf("���");
					break;
				case 8:
					printf("�ƽ�");
					break;
				case 9:
					printf("����");
					break;
			}
			if (n % 10 == 0) {
				printf("��\n");
			}
			else {
				//��
				switch (n % 10) {

					case 1:
						printf("Ҽ��\n");
						break;
					case 2:
						printf("����\n");
						break;
					case 3:
						printf("����\n");
						break;
					case 4:
						printf("����\n");
						break;
					case 5:
						printf("���\n");
						break;
					case 6:
						printf("½��\n");
						break;
					case 7:
						printf("���\n");
						break;
					case 8:
						printf("�Ʒ�\n");
						break;
					case 9:
						printf("����\n");
						break;
				}

			}


		}






		return 0;

	}

