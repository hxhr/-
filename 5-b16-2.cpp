/* ��02 2250748 �����q */
#include<iostream>

using namespace std;

void shuru(string num[],string name[],int grade[])
{
	for (int i = 0; i < 10; i++) {
		cout << "�������" << i + 1 << "���˵�ѧ�š��������ɼ�" << endl;
		cin >> num[i];
		cin >> name[i];
		cin >> grade[i];

	}

}

void paixu(int grade[],string num[],string name[])
{
	for (int i = 9; i >= 0; i--) {
		for (int j = 0; j < i; j++) {
			if (grade[j] > grade[j + 1]) {
				int t1 = grade[j];
				grade[j] = grade[j + 1];
				grade[j + 1] = t1;

				string t2 = num[j];
				num[j] = num[j + 1];
				num[j + 1] = t2;

				string t3 = name[j];
				name[j] = name[j + 1];
				name[j + 1] = t3;
			}
		}
	}
}

void shuchu(int grade[],string name[],string num[])
{
	cout << endl;
	cout << "����������(�ɼ�����):" << endl;
	for (int i = 0; i < 10; i++) {
		if (grade[i] < 60) {
			cout << name[i] << " " << num[i] << " " << grade[i] << endl;
		}
	}
}
int main()
{
	string num[10];
	string name[10];
	int grade[10] = { 0 };
	

	shuru(num, name, grade);
	//ð������̫����
	//��������
	/*for (int i = 0; i <10; i++) {
		for (int j = 9; j > i; j--) {
			if (grade[j] > grade[j - 1]) {
				int t1 = grade[j];
				grade[j] = grade[j - 1];
				grade[j - 1] = t1;

				string t2 = num[j];
				num[j] = num[j - 1];
				num[j - 1] = t2;

				string t3 = name[j];
				name[j] = name[j - 1];
				name[j - 1] = t3;
			}
		}
	}*/

	//��������
	paixu(grade, num, name);
	shuchu(grade, name, num);
	
	

	return 0;
}