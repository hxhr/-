/* 2250748 �����q ��02 */
#include <iostream>
#include<limits>
using namespace std;



int main()
{
	int a = 0;
	cout << "��������������������������20������0������������" << endl;
	int array[21] = { 0 };
	for (int i = 0; i < 20; i++) {
		cin >> a;
		if (a <= 0) {
			break;
		}
		else {
			array[i] = a;
		}
	}
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	int point = 0;//��¼�洢��ֹ��λ��
	if (array[0] == 0) {
		cout << "����Ч����" << endl;
		return 0;
	}
	else {
		cout << "ԭ����Ϊ��" << endl;
		for (int j = 0; j < 20; j++) {
			cout << array[j] << " ";
			//���if�������߲������뵽
			if (array[j + 1] <= 0 || j == 19) {
				point = j;
				break;
			}
		}
		cout << endl;
	}
	cout << "������Ҫ�����������" << endl;
	int x;
	cin >> x;
	array[point + 1] = x;
	int t = 0;
	//��������ѭ����Ӧ�ô�i=0��ʼ����Ϊ��������ĩβ������ѭ��Ӧ�ôӺ���ǰ
	for (int k = point + 1; k > 0; k--) {
		if (array[k - 1] > array[k]) {
			t = array[k];
			array[k] = array[k - 1];
			array[k - 1] = t;
		}
	}
	cout << "����������Ϊ��" << endl;
	//������21
	for (int j = 0; j < 21; j++) {
		cout << array[j] << " ";
		if (array[j + 1] <= 0) {
			break;
		}
	}
	cout << endl;
	return 0;
}