/* ��02 2250748 �����q */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�ɰ���������Ҫ��ͷ�ļ�

const char chnstr[] = "��Ҽ��������½��ƾ�"; /* ���������д "��" ~ "��" �ĵط���ֻ��������������ȡֵ */
char result[256];  /* ��result�⣬�����������κ���ʽ��ȫ�ֱ��� */

/* --���������Ҫ�ĺ��� --*/

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����
***************************************************************************/

//������2
//ϸ���ǰѺ����ĳ��з���ֵ�ģ�����ֱ��������ı�point��ֵ
int daxie(int num, int flag_of_zero, int point)
{
	//ע��point�Ǿֲ����������˱�����ֵ�����


	/* ������Ա��������κ��޸� */
	switch (num) {
		case 0:
			if (flag_of_zero) {
				result[point++] = chnstr[0];
				result[point++] = chnstr[1];
				return point;
			}
			return point;
			break;
		case 1:
			result[point++] = chnstr[2];
			result[point++] = chnstr[3];
			return point;
			break;
		case 2:
			result[point++] = chnstr[4];
			result[point++] = chnstr[5];
			return point;
			break;
		case 3:
			result[point++] = chnstr[6];
			result[point++] = chnstr[7];
			return point;
			break;
		case 4:
			result[point++] = chnstr[8];
			result[point++] = chnstr[9];
			return point;
			break;
		case 5:
			result[point++] = chnstr[10];
			result[point++] = chnstr[11];
			return point;
			break;
		case 6:
			result[point++] = chnstr[12];
			result[point++] = chnstr[13];
			return point;
			break;
		case 7:
			result[point++] = chnstr[14];
			result[point++] = chnstr[15];
			return point;
			break;
		case 8:
			result[point++] = chnstr[16];
			result[point++] = chnstr[17];
			return point;
			break;
		case 9:
			result[point++] = chnstr[18];
			result[point++] = chnstr[19];
			return point;
			break;
		default:
			return point;
			printf("error");
			break;
	}
}

//������\0
int main()
{
	char chnstr2[] = "ʰ��Ǫ����Բ�Ƿ���";
	int point = 0;//����ֲ���������һ��ŵ�������
	/* --���������Ҫ������ --*/
	double h;
	printf("������[0-100��)֮�������:\n");
	scanf("%lf", &h);
	double s = h + 0.001;

	int b = (int)(s / 10);
	unsigned int d = (unsigned int)(s - 10 * b);
	unsigned int n = (unsigned int)((s - 10 * b - d) * 100);

	int leap;
	//��¼ʮ��-���Ƿ�ȫΪ0
	int flag_of_zero = 0;
	int z1 = 0;
	printf("��д�����:\n");

	//ʮ��-��
	point = daxie(b / 100000000 % 10, flag_of_zero, point);



	if (b / 100000000 % 10 == 0) {
		z1 = 0;
	}
	else {
		z1 = 1;
		result[point++] = chnstr2[0];
		result[point++] = chnstr2[1];

	}


	point = daxie(b / 10000000 % 10, 0, point);


	if (b / 10000000 % 10 == 0 && z1 == 0) {
		z1 = 0;
	}
	else {
		z1 = 1;
	}
	if (z1) {

		result[point++] = chnstr2[8];
		result[point++] = chnstr2[9];


	}









	//ǧ��-��

	//��¼ǧ��-���Ƿ�ȫΪ0
	int z2 = 0;
	flag_of_zero = (z1 && b / 100000 % 10 != 0);
	point = daxie(b / 1000000 % 10, flag_of_zero, point);

	//�����һλ��0����leap=1
	if (b / 1000000 % 10 == 0) {
		leap = 0;
	}
	else {
		leap = 1;
		result[point++] = chnstr2[4];
		result[point++] = chnstr2[5];



	}
	if (b / 1000000 % 10 == 0) {
		z2 = 0;
	}
	else {
		z2 = 1;

	}
	//����
	flag_of_zero = ((z1 || z2) && b / 10000 % 10 != 0);
	point = daxie(b / 100000 % 10, flag_of_zero, point);

	if (b / 100000 % 10 == 0) {
		leap = 0;
	}
	else {
		leap = 1;

		result[point++] = chnstr2[2];
		result[point++] = chnstr2[3];


	}
	if (b / 100000 % 10 == 0 && z2 == 0) {
		z2 = 0;
	}
	else {
		z2 = 1;
	}
	//ʮ��
	flag_of_zero = ((z1 || z2) && b / 1000 % 10 != 0);
	point = daxie(b / 10000 % 10, flag_of_zero, point);

	if (b / 10000 % 10) {
		result[point++] = chnstr2[0];
		result[point++] = chnstr2[1];


	}

	if (b / 10000 % 10 == 0 && z2 == 0) {
		z2 = 0;
	}
	else {
		z2 = 1;
	}
	//��λ
	point = daxie(b / 1000 % 10, 0, point);

	if (b / 1000 % 10) {
		result[point++] = chnstr2[6];
		result[point++] = chnstr2[7];

	}
	else {
		if (z2) {
			result[point++] = chnstr2[6];
			result[point++] = chnstr2[7];

		}
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
	flag_of_zero = ((z1 || z2) && b / 10 % 10 != 0);
	point = daxie(b / 100 % 10, flag_of_zero, point);

	if (b / 100 % 10) {
		result[point++] = chnstr2[4];
		result[point++] = chnstr2[5];

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
	flag_of_zero = ((z1 || z2 || z3) && b % 10 != 0);
	point = daxie(b / 10 % 10, flag_of_zero, point);

	if (b / 10 % 10) {
		result[point++] = chnstr2[2];
		result[point++] = chnstr2[3];
	}
	//�����һλ��0����leap=1
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
	flag_of_zero = ((z1 || z2 || z3) && d != 0);
	point = daxie(b % 10, flag_of_zero, point);

	if (b % 10) {
		result[point++] = chnstr2[0];
		result[point++] = chnstr2[1];
	}
	//�����һλ��0����leap=1
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
	flag_of_zero = (z1 == 0 && z2 == 0 && z3 == 0 && n / 10 % 10 == 0 && n % 10 == 0);
	point = daxie(d, flag_of_zero, point);

	if (d || flag_of_zero || (z1 || z2 || z3)) {
		result[point++] = chnstr2[10];
		result[point++] = chnstr2[11];
	}


	if (d == 0 && z3 == 0) {
		z3 = 0;
	}
	else {
		z3 = 1;
	}







	//��-��

	if (n / 10 % 10 == 0 && n % 10 == 0) {
		result[point++] = chnstr2[16];
		result[point++] = chnstr2[17];
	}
	else {
		//��
		flag_of_zero = !(z1 == 0 && z2 == 0 && z3 == 0);
		point = daxie(n / 10 % 10, flag_of_zero, point);

		if (n / 10 % 10) {
			result[point++] = chnstr2[12];
			result[point++] = chnstr2[13];
		}

		if (n % 10 == 0) {
			result[point++] = chnstr2[16];
			result[point++] = chnstr2[17];
		}
		else {
			//��
			point = daxie(n % 10, 0, point);

			result[point++] = chnstr2[14];
			result[point++] = chnstr2[15];



		}


	}
	/*result[point] = '\0';*/


	printf("%s\n", result);  /* ת���õ��Ĵ�д�����ֻ�����ñ��������������ط����������κ���ʽ�Դ�д�������ȫ��/������� */
	return 0;
}