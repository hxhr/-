/* 2250748 �����q ��02 */
#include <iostream>
#include<limits>
using namespace std;
int main()
{
	int grade[1000] = { 0 };
	for (int i = 0; i < 1000; i++) {
		grade[i] = -1;
	}

	cout << "������ɼ������1000������������������" << endl;
	int x;
	int point = 0;
	//0-i-1
	for (int i = 0; i < 1000; i++) {
		cin >> x;
		if (x < 0) {
			point = i;
			break;
		}
		else {
			grade[i] = x;
		}

	}
	if (grade[0] == -1) {

		cout << "����Ч����" << endl;
		return 0;
	}

	cout << "���������Ϊ:" << endl;
	for (int i = 0; i < point; i++) {

		cout << grade[i] << " ";
		if ((i + 1) % 10 == 0) {

			cout << endl;
		}
	}
	if (point % 10 != 0) {
		cout << endl;
	}
	//һ��ѭ����û�취������߽������е�

	for (int i = 0; i < point - 1; i++) {
		for (int j = 0; j < point - (i + 1); j++) {
			if (grade[j] > grade[j + 1]) {
				int t = grade[j];
				grade[j] = grade[j + 1];
				grade[j + 1] = t;
			}
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

	cout << "���������εĶ�Ӧ��ϵΪ:" << endl;
	int count = 1;
	for (int i = 100; i >= 0; i--) {
		if (person[i] != 0) {
			for (int n = 0; n < person[i]; n++) {
				cout << i << " " << count << endl;
			}

			count = count + person[i];
		}
	}
	return 0;
}