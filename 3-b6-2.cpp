/*2250748 ��02 �����q*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include<math.h>
#include <iomanip>

using namespace std;

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
	int z1 = 0;
	cout << "��д�����:" << endl;

	//ʮ��-��
	switch (b / 100000000 % 10) {
		case 0:
			break;
		case 1:
			cout << "Ҽʰ";
			break;
		case 2:
			cout << "��ʰ";
			break;
		case 3:
			cout << "��ʰ";
			break;
		case 4:
			cout << "��ʰ";
			break;
		case 5:
			cout << "��ʰ";
			break;
		case 6:
			cout << "½ʰ";
			break;
		case 7:
			cout << "��ʰ";
			break;
		case 8:
			cout << "��ʰ";
			break;
		case 9:
			cout << "��ʰ";
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
				cout << "��";
			}
			break;

		case 1:
			cout << "Ҽ��";
			break;
		case 2:
			cout << "����";
			break;
		case 3:
			cout << "����";
			break;
		case 4:
			cout << "����";
			break;
		case 5:
			cout << "����";
			break;
		case 6:
			cout << "½��";
			break;
		case 7:
			cout << "����";
			break;
		case 8:
			cout << "����";
			break;
		case 9:
			cout << "����";
			break;
	}

	if (b / 10000000 % 10 == 0 && z1 == 0) {
		z1 = 0;
	}
	else {
		z1 = 1;
	}









	//ǧ��-��

	//��¼ǧ��-���Ƿ�ȫΪ0
	int z2 = 0;
	switch (b / 1000000 % 10) {
		case 0:
			if (z1 && b / 100000 % 10 != 0) {
				cout << "��";
			}
			break;

		case 1:
			cout << "ҼǪ";
			break;
		case 2:
			cout << "��Ǫ";
			break;
		case 3:
			cout << "��Ǫ";
			break;
		case 4:
			cout << "��Ǫ";
			break;
		case 5:
			cout << "��Ǫ";
			break;
		case 6:
			cout << "½Ǫ";
			break;
		case 7:
			cout << "��Ǫ";
			break;
		case 8:
			cout << "��Ǫ";
			break;
		case 9:
			cout << "��Ǫ";
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
				cout << "��";
			}
			break;

		case 1:
			cout << "Ҽ��";
			break;
		case 2:
			cout << "����";
			break;
		case 3:
			cout << "����";
			break;
		case 4:
			cout << "����";
			break;
		case 5:
			cout << "���";
			break;
		case 6:
			cout << "½��";
			break;
		case 7:
			cout << "���";
			break;
		case 8:
			cout << "�ư�";
			break;
		case 9:
			cout << "����";
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
				cout << "��";
			}
			break;

		case 1:
			cout << "Ҽʰ";
			break;
		case 2:
			cout << "��ʰ";
			break;
		case 3:
			cout << "��ʰ";
			break;
		case 4:
			cout << "��ʰ";
			break;
		case 5:
			cout << "��ʰ";
			break;
		case 6:
			cout << "½ʰ";
			break;
		case 7:
			cout << "��ʰ";
			break;
		case 8:
			cout << "��ʰ";
			break;
		case 9:
			cout << "��ʰ";
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
				cout << "��";
			}
			break;

		case 1:
			cout << "Ҽ��";
			break;
		case 2:
			cout << "����";
			break;
		case 3:
			cout << "����";
			break;
		case 4:
			cout << "����";
			break;
		case 5:
			cout << "����";
			break;
		case 6:
			cout << "½��";
			break;
		case 7:
			cout << "����";
			break;
		case 8:
			cout << "����";
			break;
		case 9:
			cout << "����";
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
				cout << "��";
			}

			break;
		case 1:
			cout << "ҼǪ";
			break;
		case 2:
			cout << "��Ǫ";
			break;
		case 3:
			cout << "��Ǫ";
			break;
		case 4:
			cout << "��Ǫ";
			break;
		case 5:
			cout << "��Ǫ";
			break;
		case 6:
			cout << "½Ǫ";
			break;
		case 7:
			cout << "��Ǫ";
			break;
		case 8:
			cout << "��Ǫ";
			break;
		case 9:
			cout << "��Ǫ";
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
				cout << "��";
			}
			break;

		case 1:
			cout << "Ҽ��";
			break;
		case 2:
			cout << "����";
			break;
		case 3:
			cout << "����";
			break;
		case 4:
			cout << "����";
			break;
		case 5:
			cout << "���";
			break;
		case 6:
			cout << "½��";
			break;
		case 7:
			cout << "���";
			break;
		case 8:
			cout << "�ư�";
			break;
		case 9:
			cout << "����";
			break;
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

	switch (b % 10) {
		case 0:
			if ((z1 || z2 || z3) && d != 0) {
				cout << "��";
			}
			break;
		case 1:
			cout << "Ҽʰ";
			break;
		case 2:
			cout << "��ʰ";
			break;
		case 3:
			cout << "��ʰ";
			break;
		case 4:
			cout << "��ʰ";
			break;
		case 5:
			cout << "��ʰ";
			break;
		case 6:
			cout << "½ʰ";
			break;
		case 7:
			cout << "��ʰ";
			break;
		case 8:
			cout << "��ʰ";
			break;
		case 9:
			cout << "��ʰ";
			break;
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

	switch (d) {
		case 0:
			if (z1 == 0 && z2 == 0 && z3 == 0 && n / 10 % 10 == 0 && n % 10 == 0) {
				cout << "��Բ";
			}
			if (z1 || z2 || z3) {

				cout << "Բ";
			}
			break;
		case 1:
			cout << "ҼԲ";
			break;
		case 2:
			cout << "��Բ";
			break;
		case 3:
			cout << "��Բ";
			break;
		case 4:
			cout << "��Բ";
			break;
		case 5:
			cout << "��Բ";
			break;
		case 6:
			cout << "½Բ";
			break;
		case 7:
			cout << "��Բ";
			break;
		case 8:
			cout << "��Բ";
			break;
		case 9:
			cout << "��Բ";
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
		cout << "��" << endl;
	}
	else {
		//��
		switch (n / 10 % 10) {
			case 0:
				if (z1 == 0 && z2 == 0 && z3 == 0) {
					break;
				}
				else {
					cout << "��";
					break;

				}
			case 1:
				cout << "Ҽ��";
				break;
			case 2:
				cout << "����";
				break;
			case 3:
				cout << "����";
				break;
			case 4:
				cout << "����";
				break;
			case 5:
				cout << "���";
				break;
			case 6:
				cout << "½��";
				break;
			case 7:
				cout << "���";
				break;
			case 8:
				cout << "�ƽ�";
				break;
			case 9:
				cout << "����";
				break;
		}
		if (n % 10 == 0) {
			cout << "��" << endl;
		}
		else {
			//��
			switch (n % 10) {

				case 1:
					cout << "Ҽ��" << endl;
					break;
				case 2:
					cout << "����" << endl;
					break;
				case 3:
					cout << "����" << endl;
					break;
				case 4:
					cout << "����" << endl;
					break;
				case 5:
					cout << "���" << endl;
					break;
				case 6:
					cout << "½��" << endl;
					break;
				case 7:
					cout << "���" << endl;
					break;
				case 8:
					cout << "�Ʒ�" << endl;
					break;
				case 9:
					cout << "����" << endl;
					break;
			}

		}


	}






	return 0;

}

