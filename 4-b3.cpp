/* 信02 2250748 王渝鹮*/
#include <iostream>
#include<iomanip>
#include<limits>
using namespace std;


int zeller(int a, int b, int c) {
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


void calendar(int c, int m, int a, int b) {
	cout << endl;
	cout << a << "年" << b << "月" << endl;
	cout << "======================================================" << endl;
	cout << "星期日  星期一  星期二  星期三  星期四  星期五  星期六" << endl;
	cout << "======================================================" << endl;

	int d = c;
	for (int i = 0; i < 8 * c; i++) {
		cout << " ";
	}
	for (int j = 1; j <= m; d++) {
		cout << setw(4) << j;
		j++;

		cout << "    ";
		if (d == 6) {
			d = -1;
			cout << endl;
		}
	}
	cout << endl;
	cout << endl;
}

int main()
{
	int a, b;
	bool leap;

	while (1) {
		cout << "请输入年[1900-2100]、月" << endl;
		cin >> a >> b;
		if (cin.good()) {

			if (a < 1900 || a>2100) {
				cout << "年份不正确，请重新输入" << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				continue;
			}
			else {
				if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) {
					leap = true;
				}
				else {
					leap = false;
				}


			}
			if (b < 1 || b>12) {
				cout << "月份不正确，请重新输入" << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				continue;
			}
			else {
				break;
			}

		}
		else {
			cout << "输入错误，请重新输入" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}



	}
	int c = zeller(a, b, 1);
	int m;
	if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12) {
		m = 31;
	}
	if (b == 4 || b == 6 || b == 9 || b == 11) {
		m = 30;
	}
	if (b == 2) {
		if (leap) {
			m = 29;
		}
		else {
			m = 28;
		}
	}
	calendar(c, m, a, b);

	return 0;
}