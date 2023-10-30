/*2250748 信02 王渝鹮*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include<math.h>
#include <iomanip>
using namespace std;
int main()
{
	double a;
	cout << std::setprecision(20) << "请输入找零值：" << endl;
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

	cout << "共" << num << "张找零，具体如下：" << endl;
	if (s) {
		cout << "50元 : " << s << "张" << endl;
	}
	if (n) {
		cout << "20元 : " << n << "张" << endl;
	}
	if (h) {
		cout << "10元 : " << h << "张" << endl;
	}
	if (x) {
		cout << "5元  : " << x << "张" << endl;
	}
	if (c) {
		cout << "1元  : " << c << "张" << endl;
	}
	if (g) {
		cout << "5角  : " << g << "张" << endl;
	}
	if (t) {
		cout << "1角  : " << t << "张" << endl;
	}
	if (b) {
		cout << "5分  : " << b << "张" << endl;
	}
	if (e) {
		cout << "2分  : " << e << "张" << endl;
	}
	if (j) {
		cout << "1分  : " << j << "张" << endl;
	}






	return 0;


}

