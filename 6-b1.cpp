/* 2250748 �����q ��02 */
#include <iostream>
using namespace std;

#define  N  10	/* �������ת��10������ */

/* �������ٶ�������������ȫ�ֱ��� */

int main()
{
	/* ����в���Ҫ�ı���������ɾ��������������ӻ��滻Ϊ�������͵ı��� */
	char str[256], * p;
	int  a[N] = { 0 }, * pnum, * pa;
	bool is_num;

	/* ����Ķ��岻׼��(ɾ������Ҫ�ı�������)������Ϊ����ľ���ʵ�֣�Ҫ�󲻵��ٶ����κα����������������� */
	for (int i = 0; i < 256; i++) {
		str[i] = 0;
	}


	cout << "�����������������������ֵ��ַ���" << endl;
	cin.getline(str, 256);
	p = str;
	pnum = a;
	is_num = 0;
	pa = a;
	for (; *p!=0; p++) {
		if (is_num) {
			if (*p >= '0' && *p <= '9') {
				*pnum = *p - '0' + 10 * (*pnum);
			}
			else {
				if (pnum==a+40) {
					break;
				}
				else {
					pnum++;
				}
				is_num = 0;
			}
		}
		else {
			if (*p >= '0' && *p <= '9') {
				*pnum = *p - '0' ;
				is_num = 1;
				if (*(p + 1) == 0) {
					pnum++;
				}
			}
		}
	}
	cout << "����" << (pnum - a)<< "������" << endl;
	for (; pa <pnum; pa++) {
		//pa-a����ʲô����֤��10����40 ֮��Ū����
		cout << *pa << " ";
	}

	cout << endl;
	return 0;
}