/* ��02 2250748 �����q*/
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <windows.h> //ȡϵͳʱ��
using namespace std;

int main()
{
	LARGE_INTEGER tick, begin, end;

	QueryPerformanceFrequency(&tick);	//��ü�����Ƶ��
	QueryPerformanceCounter(&begin);	//��ó�ʼӲ������������

	/* �˴�����ĳ���ʼ */
	int i1 = 0, i2 = 0, i3 = 0, j1 = 0, j2 = 0, j3 = 0, k1 = 0, k2 = 0, k3 = 0;
	int total = 0;
	for (int i = 123; i <= 987; i++) {
		i1 = i % 10;
		i2 = (i % 100 - i1) / 10;
		i3 = (i - i1 - i2 * 10) / 100;
		if (i1 == i2 || i1 == i3 || i2 == i3 || i1 == 0 || i2 == 0 || i3 == 0) {
			continue;
		}
		for (int j = 123; j <= 987; j++) {
			j1 = j % 10;
			j2 = (j % 100 - j1) / 10;
			j3 = (j - j1 - j2 * 10) / 100;
			if (j1 == j2 || j1 == j3 || j2 == j3 || j1 == i1 || j1 == i2 || j1 == i3 || j2 == i1 || j2 == i2 || j2 == i3 || j3 == i1 || j3 == i2 || j3 == i3 || j1 == 0 || j2 == 0 || j3 == 0) {
				continue;
			}
			for (int k = 123; k <= 987; k++) {
				k1 = k % 10;
				k2 = (k % 100 - k1) / 10;
				k3 = (k - k1 - k2 * 10) / 100;
				if (k1 == 0 || k2 == 0 || k3 == 0 || k1 == k2 || k1 == k3 || k2 == k3 || k1 == i1 || k1 == i2 || k1 == i3 || k1 == j1 || k1 == j2 || k1 == j3 || k2 == i1 || k2 == i2 || k2 == i3 || k2 == j1 || k2 == j2 || k2 == j3 || k3 == i1 || k3 == i2 || k3 == i3 || k3 == j1 || k3 == j2 || k3 == j3) {
					continue;
				}
				if (i + j + k == 1953 && i < j && j < k) {
					total++;
					cout << "No." << setw(3) << total << " : " << i << "+" << j << "+" << k << "=1953" << endl;
				}
			}
		}
	}
	cout << "total=" << total << endl;


	/* �˴�����ĳ������ */

	QueryPerformanceCounter(&end);		//�����ֹӲ������������

	cout << "������Ƶ�� : " << tick.QuadPart << "Hz" << endl;
	cout << "���������� : " << end.QuadPart - begin.QuadPart << endl;
	cout << setiosflags(ios::fixed) << setprecision(6) << double(end.QuadPart - begin.QuadPart) / tick.QuadPart << "��" << endl;

	return 0;
}