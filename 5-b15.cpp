/* ��02 2250748 �����q */
#include<iostream>
using namespace std;


int main()
{
	char str[3][128] = { 0 };
	cout << "�������1��" << endl;
	cin.getline(str[0], 128);
	cout << "�������2��" << endl;
	cin.getline(str[1], 128);
	cout << "�������3��" << endl;
	cin.getline(str[2], 128);
	int daxie = 0;
	int xiaoxie = 0;
	int shuzi = 0;
	int kongge = 0;
	int qita = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 128; j++) {
			if (str[i][j] == 0) {
				break;
			}
			else {
				if (str[i][j] >= 'A' && str[i][j] <= 'Z') {
					daxie++;
				}
				else if (str[i][j] >= 'a' && str[i][j] <= 'z') {
					xiaoxie++;
				}
				else if (str[i][j] >= '0' && str[i][j] <= '9') {
					shuzi++;
				}
				else if (str[i][j] == ' ') {
					kongge++;
				}
				else {
					qita++;
				}
			}
		}
	}
	
	cout << "��д : " << daxie << endl;
	cout << "Сд : " << xiaoxie << endl;
	cout << "���� : " << shuzi << endl;
	cout << "�ո� : " << kongge << endl;
	cout << "���� : " << qita << endl;

	return 0;


}