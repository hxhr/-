/* 2250748 �����q ��02 */
#include <iostream>
#include <cmath>
#include<math.h>
#include <iomanip>
using namespace std;

/* �ɸ�����Ҫ�����Ӧ������ */

/***************************************************************************
  �������ƣ�
  ��    �ܣ������д��0~9
  ���������
  �� �� ֵ��
  ˵    �������������⣬�������κκ�����������㡱-������!!!!!!
***************************************************************************/
void daxie(int num, int flag_of_zero)
{
	/* ������Ա��������κ��޸� */
	switch (num) {
		case 0:
			if (flag_of_zero)	//�˱��ʲô��˼������˼��
				cout << "��";
			break;
		case 1:
			cout << "Ҽ";
			break;
		case 2:
			cout << "��";
			break;
		case 3:
			cout << "��";
			break;
		case 4:
			cout << "��";
			break;
		case 5:
			cout << "��";
			break;
		case 6:
			cout << "½";
			break;
		case 7:
			cout << "��";
			break;
		case 8:
			cout << "��";
			break;
		case 9:
			cout << "��";
			break;
		default:
			cout << "error";
			break;
	}
}

/* �ɸ�����Ҫ�Զ�����������(Ҳ���Բ�����) */

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����
***************************************************************************/
int main()
{
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
		cout << "ʰ";
	}


	daxie(b / 10000000 % 10, 0);


	if (b / 10000000 % 10 == 0 && z1 == 0) {
		z1 = 0;
	}
	else {
		z1 = 1;
	}
	if (z1) {
		cout << "��";
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
		cout << "Ǫ";

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
		cout << "��";
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
		cout << "ʰ";
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
		cout << "��";
	}
	else {
		if (z2) {
			cout << "��";
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
		cout << "Ǫ";
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
		cout << "��";
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
		cout << "ʰ";
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
		cout << "Բ";
	}


	if (d == 0 && z3 == 0) {
		z3 = 0;
	}
	else {
		z3 = 1;
	}







	//��-��

	if (n / 10 % 10 == 0 && n % 10 == 0) {
		cout << "��" << endl;
	}
	else {
		//��
		flag_of_zero = !(z1 == 0 && z2 == 0 && z3 == 0);
		daxie(n / 10 % 10, flag_of_zero);
		if (n / 10 % 10) {
			cout << "��";
		}

		if (n % 10 == 0) {
			cout << "��" << endl;
		}
		else {
			//��
			daxie(n % 10, 0);
			cout << "��" << endl;


		}


	}




	return 0;
}