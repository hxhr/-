/* ��02 2250748 �����q*/
#include <iostream>
#include<iomanip>
#include<limits>
using namespace std;


int zeller(int a, int b, int c)
{
	if (b == 1) {
		b = 13;
		a = a - 1;
	}
	if (b == 2) {
		b = 14;
		a = a - 1;
	}
	int cen = a / 100;
	int year = a - cen * 100;
	int mon = b;
	int day = c;
	int w = year + year / 4 + cen / 4 - 2 * cen + 13 * (mon + 1) / 5 + day - 1;
	while (w < 0) {
		w = w + 7;
	}
	int s = w % 7;
	return s;
}


int main()
{
	int a;
	int leap = 0;;

	cout << "���������[1900-2100]" << endl;
	cin >> a;
	cout << a << "�������:" << endl;
	cout << endl;
	int first[12] = { 0 };
	for (int i = 0; i < 12; i++) {
		first[i] = 1 - zeller(a, i + 1, 1);
	}
	if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) {
		leap = 1;
	}
	else {
		leap = 0;
	}
	//�������ж����꣬������
	//Ŀǰ�Ѿ�������ÿ����1�ŵ�����
	//��ʵ�����Ǻ��Ŵ�ģ�������ѡ���סÿ���µ�һ�����е�û�У������յ����ڣ�����Ҳ��
	//�����Ұ����������ĳ��˼�¼�����յ�����
	//��ʼ��ʽ��ӡ֮ǰ�һ�Ҫ������һ����������¼ÿ���µ��������������Ϊ�ղ�д�����淢��if���Ʒǳ������Ҳ�������Ӧ��һ��ʼ����
	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (leap) {
		month[1] = 29;
	}
	cout << "            1��                             2��                             3��" << endl;
	cout << "Sun Mon Tue Wed Thu Fri Sat     Sun Mon Tue Wed Thu Fri Sat     Sun Mon Tue Wed Thu Fri Sat" << endl;
	//ѭ�����Խ�������ӡ������
	while (first[0] < 32 || first[1] < 29 + leap || first[2] < 32) {
		for (int i = 0; i < 3; i++) {

			for (int j = 0; j < 7; j++) {//ע������if��������Ӧ���ǣ�||�����߼�
				if ((first[i] + j) > 0 && first[i] + j < month[i] + 1) {
					cout << setiosflags(ios::left) << setw(4) << first[i] + j;
				}
				else {
					cout << "    ";
				}
			}
			cout << "    ";
		}
		cout << endl;
		first[0] += 7;
		first[1] += 7;
		first[2] += 7;

	}
	cout << endl;




	cout << "            4��                             5��                             6��" << endl;
	cout << "Sun Mon Tue Wed Thu Fri Sat     Sun Mon Tue Wed Thu Fri Sat     Sun Mon Tue Wed Thu Fri Sat" << endl;

	while (first[3] < month[3] + 1 || first[4] < month[4] + 1 || first[5] < month[5] + 1) {
		for (int i = 3; i < 6; i++) {

			for (int j = 0; j < 7; j++) {//ע������if��������Ӧ���ǣ�||�����߼�
				if ((first[i] + j) > 0 && first[i] + j < month[i] + 1) {
					cout << setiosflags(ios::left) << setw(4) << first[i] + j;
				}
				else {
					cout << "    ";
				}
			}
			cout << "    ";
		}
		cout << endl;
		first[3] += 7;
		first[4] += 7;
		first[5] += 7;

	}
	cout << endl;

	cout << "            7��                             8��                             9��" << endl;
	cout << "Sun Mon Tue Wed Thu Fri Sat     Sun Mon Tue Wed Thu Fri Sat     Sun Mon Tue Wed Thu Fri Sat" << endl;
	while (first[6] < month[6] + 1 || first[7] < month[7] + 1 || first[8] < month[8] + 1) {
		for (int i = 6; i < 9; i++) {

			for (int j = 0; j < 7; j++) {//ע������if��������Ӧ���ǣ�||�����߼�
				if ((first[i] + j) > 0 && first[i] + j < month[i] + 1) {
					cout << setiosflags(ios::left) << setw(4) << first[i] + j;
				}
				else {
					cout << "    ";
				}
			}
			cout << "    ";
		}
		cout << endl;
		first[6] += 7;
		first[7] += 7;
		first[8] += 7;

	}
	cout << endl;


	cout << "           10��                            11��                            12��" << endl;
	cout << "Sun Mon Tue Wed Thu Fri Sat     Sun Mon Tue Wed Thu Fri Sat     Sun Mon Tue Wed Thu Fri Sat" << endl;
	while (first[9] < month[9] + 1 || first[10] < month[10] + 1 || first[11] < month[11] + 1) {
		for (int i = 9; i < 12; i++) {

			for (int j = 0; j < 7; j++) {//ע������if��������Ӧ���ǣ�||�����߼�
				if ((first[i] + j) > 0 && first[i] + j < month[i] + 1) {
					cout << setiosflags(ios::left) << setw(4) << first[i] + j;
				}
				else {
					cout << "    ";
				}
			}
			cout << "    ";
		}
		cout << endl;
		first[9] += 7;
		first[10] += 7;
		first[11] += 7;

	}
	cout << endl;

	cout << endl;
	return 0;


}