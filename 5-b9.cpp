/* 2250748 �����q ��02 */
#include <iostream>
#include <iomanip>
#include<limits>
using namespace std;

int main()
{
	int square[9][9] = { 0 };
	cout << "������9*9�ľ���ֵΪ1-9֮��" << endl;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			while (1) {

				cin >> square[i][j];
				if (cin.good()) {
					if (square[i][j] >= 1 && square[i][j] <= 9)
						break;
					else {
						cout << "�����������" << i + 1 << "��" << j + 1 << "��(���о���1��ʼ����)��ֵ" << endl;
						continue;
					}
				}
				else {
					cout << "�����������" << i + 1 << "��" << j + 1 << "��(���о���1��ʼ����)��ֵ" << endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
				//������Ǽ�break
				break;

			}
		}
	}
	//�������������ȡ�Ƿ���ȷ
	/*for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cout << square[i][j] << " ";
		}
	}*/
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			for (int k = j + 1; k < 9; k++) {
				if (square[i][j] == square[i][k]) {
					cout << "���������Ľ�" << endl;
					return 0;
				}
			}
		}
	}
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			for (int k = j + 1; k < 9; k++) {
				if (square[j][i] == square[k][i]) {
					cout << "���������Ľ�" << endl;
					return 0;
				}
			}
		}
	}
	int small[9] = { 0 };
	int point = 0;
	//˼����ô���С�����õ�ʱ�䳤
	for (int i = 0; i < 9; i = i + 3) {
		for (int j = 0; j < 9; j = j + 3) {
			point = 0;//point�ڴ�����
			for (int a = 0; a < 3; a++) {
				for (int b = 0; b < 3; b++) {
					/*small[(a + 1) * (b + 1) - 1] = square[i + a][j + b];*/
					//һ��ʼ��ô��ƣ�����
					small[point] = square[i + a][j + b];
					point++;
				}
			}

		}
	}
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (i == j) {//������������Ƚ�
				continue;
			}
			else if (small[i] == small[j]) {
				cout << "���������Ľ�" << endl;
			}
		}
	}
	cout << "�������Ľ�" << endl;
}
