/* ��02 2250748 �����q */
#include<iostream>
#include <random>
#include <time.h>

using namespace std;

static const char other[] = "!@#$%^&*-_=+,.?";


int main()
{
	//�����������
	int len = 0;
	int daxie = 0;
	int xiaoxie = 0;
	int shuzi = 0;
	int qita = 0;


	//����һ�´�д��ĸ��
	char daxie_26[26] = { 0 };
	for (int i = 0; i < 26; i++) {
		daxie_26[i] = i + 'A';
	}

	//����һ��Сд��ĸ��
	char xiaoxie_26[26] = { 0 };
	for (int i = 0; i < 26; i++) {
		xiaoxie_26[i] = i + 'a';
	}



	cout << "���������볤��(12-16)�� ��д��ĸ����(��2)�� Сд��ĸ����(��2)�� ���ָ���(��2)�� �������Ÿ���(��2)" << endl;
	cin >> len >> daxie >> xiaoxie >> shuzi >> qita;
	if (!cin.good()) {
		cout << "����Ƿ�" << endl;
		return 0;
	}
	else if (len < 12 || len>16) {
		cout << "���볤��[" << len << "]����ȷ" << endl;
		return 0;
	}
	else if (daxie < 2 || xiaoxie < 2 || shuzi < 2 || qita < 2) {
		if (daxie < 2) {
			cout << "��д��ĸ����[" << daxie << "]����ȷ" << endl;
			return 0;
		}
		if (xiaoxie < 2) {
			cout << "Сд��ĸ����[" << xiaoxie << "]����ȷ" << endl;
			return 0;
		}
		if (shuzi < 2) {
			cout << "���ָ���[" << shuzi << "]����ȷ" << endl;
			return 0;
		}
		if (qita < 2) {
			cout << "�������Ÿ���[" << qita << "]����ȷ" << endl;
			return 0;
		}
	}
	else if (daxie + xiaoxie + shuzi + qita > len) {
		cout << "�����ַ�����֮��[" << daxie << "+" << xiaoxie << "+" << shuzi << "+" << qita << "]���������볤��[" << len << "]" << endl;
		return 0;
	}

	cout <<len<<" "<< daxie << " " << xiaoxie << " " << shuzi << " " << qita << endl;
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 10; i++) {
		char code[17] = { 0 };
		//��д
		for (int i = 0; i < daxie; i++) {
			int m = rand() % len;
			if (code[m] != 0) {
				i--;
				continue;
			}
			code[m] = daxie_26[rand() % 26];
		}
		//Сд
		for (int i = 0; i < xiaoxie; i++) {
			int m = rand() % len;
			if (code[m] != 0) {
				i--;
				continue;
			}
			code[m] = xiaoxie_26[rand() % 26];
		}
		//����  �����ˡ�0��
		for (int i = 0; i < shuzi; i++) {
			int m = rand() % len;
			if (code[m] != 0) {
				i--;
				continue;
			}
			code[m] = rand() % 10+'0';
		}

		//��������
		for (int i = 0; i < len-daxie-xiaoxie-shuzi; i++) {
			int m = rand() % len;
			if (code[m] != 0) {
				i--;
				continue;
			}
			code[m] = other[rand() % 15];
		}

		for (int j = 0; j < len; j++) {
			cout << code[j];
		}
		cout << endl;
	}



	return 0;
}