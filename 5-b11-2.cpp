/* ��02 2250748 �����q */
#include <iostream>
#include <string>
#include<math.h>
#include <iomanip>

//�ɰ���������Ҫ��ͷ�ļ�
using namespace std;

const char chnstr[] = "��Ҽ��������½��ƾ�"; /* ���������д "��" ~ "��" �ĵط���ֻ��������������ȡֵ */
string result;  /* ��result�⣬�����������κ���ʽ��ȫ�ֱ��� */

/* --���������Ҫ�ĺ��� --*/
void daxie(int num, int flag_of_zero)
{
	//ע��point�Ǿֲ����������˱�����ֵ�����


	/* ������Ա��������κ��޸� */
	switch (num) {
		case 0:
			if (flag_of_zero) {
				result = result + chnstr[0] + chnstr[1];

			}

			break;
		case 1:
			result = result + chnstr[2] + chnstr[3];
			break;
		case 2:
			result = result + chnstr[4] + chnstr[5];
			break;
		case 3:
			result = result + chnstr[6] + chnstr[7];
			break;
		case 4:
			result = result + chnstr[8] + chnstr[9];
			break;
		case 5:
			result = result + chnstr[10] + chnstr[11];
			break;
		case 6:
			result = result + chnstr[12] + chnstr[13];
			break;
		case 7:
			result = result + chnstr[14] + chnstr[15];
			break;
		case 8:
			result = result + chnstr[16] + chnstr[17];
			break;
		case 9:
			result = result + chnstr[18] + chnstr[19];
			break;
		default:

			printf("error");
			break;
	}
}


/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����
***************************************************************************/
int main()
{
	/* --���������Ҫ������ --*/
	char chnstr2[] = "ʰ��Ǫ����Բ�Ƿ���";

	/* --���������Ҫ������ --*/
	double h;
	cout << std::setprecision(20) << "������[0-100��)֮�������:" << endl;
	cin >> h;
	double s = h + 0.001;
	int b = static_cast<int>(s / 10);
	unsigned int d = static_cast<unsigned int>(s - 10 * b);
	unsigned int n = static_cast<unsigned int>((s - 10 * b - d) * 100);

	int leap;
	//��¼ʮ��-���Ƿ�ȫΪ0
	int flag_of_zero = 0;
	int z1 = 0;
	cout << "��д�����:" << endl;

	//ʮ��-��
	daxie(b / 100000000 % 10, flag_of_zero);



	if (b / 100000000 % 10 == 0) {
		z1 = 0;
	}
	else {
		z1 = 1;
		result = result + chnstr2[0] + chnstr2[1];


	}


	daxie(b / 10000000 % 10, 0);


	if (b / 10000000 % 10 == 0 && z1 == 0) {
		z1 = 0;
	}
	else {
		z1 = 1;
	}
	if (z1) {
		result = result + chnstr2[8] + chnstr2[9];


	}









	//ǧ��-��

	//��¼ǧ��-���Ƿ�ȫΪ0
	int z2 = 0;
	flag_of_zero = (z1 && b / 100000 % 10 != 0);
	daxie(b / 1000000 % 10, flag_of_zero);

	//�����һλ��0����leap=1
	if (b / 1000000 % 10 == 0) {
		leap = 0;
	}
	else {
		leap = 1;
		result = result + chnstr2[4] + chnstr2[5];




	}
	if (b / 1000000 % 10 == 0) {
		z2 = 0;
	}
	else {
		z2 = 1;

	}
	//����
	flag_of_zero = ((z1 || z2) && b / 10000 % 10 != 0);
	daxie(b / 100000 % 10, flag_of_zero);

	if (b / 100000 % 10 == 0) {
		leap = 0;
	}
	else {
		leap = 1;
		result = result + chnstr2[2] + chnstr2[3];



	}
	if (b / 100000 % 10 == 0 && z2 == 0) {
		z2 = 0;
	}
	else {
		z2 = 1;
	}
	//ʮ��
	flag_of_zero = ((z1 || z2) && b / 1000 % 10 != 0);
	daxie(b / 10000 % 10, flag_of_zero);

	if (b / 10000 % 10) {
		result = result + chnstr2[0] + chnstr2[1];


	}

	if (b / 10000 % 10 == 0 && z2 == 0) {
		z2 = 0;
	}
	else {
		z2 = 1;
	}
	//��λ
	daxie(b / 1000 % 10, 0);

	if (b / 1000 % 10) {
		result = result + chnstr2[6] + chnstr2[7];


	}
	else {
		if (z2) {
			result = result + chnstr2[6] + chnstr2[7];


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
	daxie(b / 100 % 10, flag_of_zero);

	if (b / 100 % 10) {
		result = result + chnstr2[4] + chnstr2[5];

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
	daxie(b / 10 % 10, flag_of_zero);

	if (b / 10 % 10) {
		result = result + chnstr2[2] + chnstr2[3];

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
	daxie(b % 10, flag_of_zero);

	if (b % 10) {
		result = result + chnstr2[0] + chnstr2[1];

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
	daxie(d, flag_of_zero);

	if (d || flag_of_zero || (z1 || z2 || z3)) {
		result = result + chnstr2[10] + chnstr2[11];

	}


	if (d == 0 && z3 == 0) {
		z3 = 0;
	}
	else {
		z3 = 1;
	}







	//��-��

	if (n / 10 % 10 == 0 && n % 10 == 0) {
		result = result + chnstr2[16] + chnstr2[17];

	}
	else {
		//��
		flag_of_zero = !(z1 == 0 && z2 == 0 && z3 == 0);
		daxie(n / 10 % 10, flag_of_zero);

		if (n / 10 % 10) {
			result = result + chnstr2[12] + chnstr2[13];

		}

		if (n % 10 == 0) {
			result = result + chnstr2[16] + chnstr2[17];

		}
		else {
			//��
			daxie(n % 10, 0);

			result = result + chnstr2[14] + chnstr2[15];




		}


	}

	cout << result << endl;  /* ת���õ��Ĵ�д�����ֻ�����ñ��������������ط����������κ���ʽ�Դ�д�������ȫ��/������� */
	return 0;
}