/*2250748 ��02 �����q*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include<math.h>
#include <iomanip>
using namespace std;
int main()
{
	double a;
	cout << std::setprecision(20) << "����������ֵ��" << endl;
	cin >> a;
	double f = a + 0.001;


	unsigned int d = static_cast<unsigned int>(100 * f);
	int s = 0, n = 0, h = 0, x = 0, c = 0, g = 0, t = 0, b = 0, e = 0, j = 0;
	int num = 0;
	if (d >= 5000) {
		s = 1;
		d -= 5000;
		num = num + s;
	}
	if (d >= 2000) {
		n = n + (d / 2000);
		d = d - 2000 * (d / 2000);
		num = num + n;
	}

	if (d >= 1000) {
		h = h + 1;
		d = d - 1000;
		num = num + h;
	}
	if (d >= 500) {
		x = x + 1;
		d = d - 500;
		num = num + x;
	}
	if (d >= 100) {
		c = c + (d / 100);
		d = d - 100 * (d / 100);
		num = num + c;
	}
	if (d >= 50) {
		g = g + 1;
		d = d - 50;
		num = num + g;
	}
	if (d >= 10) {
		t = t + (d / 10);
		d = d - (d / 10) * 10;
		num = num + t;
	}
	if (d >= 5) {
		b = b + 1;
		d = d - 5;
		num = num + b;
	}

	if (d >= 2) {
		e = e + (d / 2);
		d = d - 2 * (d / 2);
		num = num + e;
	}
	j = d;
	num = num + j;

	cout << "��" << num << "�����㣬�������£�" << endl;
	if (s) {
		cout << "50Ԫ : " << s << "��" << endl;
	}
	if (n) {
		cout << "20Ԫ : " << n << "��" << endl;
	}
	if (h) {
		cout << "10Ԫ : " << h << "��" << endl;
	}
	if (x) {
		cout << "5Ԫ  : " << x << "��" << endl;
	}
	if (c) {
		cout << "1Ԫ  : " << c << "��" << endl;
	}
	if (g) {
		cout << "5��  : " << g << "��" << endl;
	}
	if (t) {
		cout << "1��  : " << t << "��" << endl;
	}
	if (b) {
		cout << "5��  : " << b << "��" << endl;
	}
	if (e) {
		cout << "2��  : " << e << "��" << endl;
	}
	if (j) {
		cout << "1��  : " << j << "��" << endl;
	}






	return 0;


}

