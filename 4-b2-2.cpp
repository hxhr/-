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


int main() 
{
	int a, b, c;
	bool leap;

	while (1) {
		cout << "请输入年[1900-2100]、月、日：" << endl;
		cin >> a >> b >> c;
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
			else if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12) {
				if (c < 1 || c>31) {
					cout << "日不正确，请重新输入" << endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					continue;
				}
				break;
			}
			else if (b == 4 || b == 6 || b == 9 || b == 11) {
				if (c < 1 || c>30) {
					cout << "日不正确，请重新输入" << endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					continue;
				}
				break;
			}
			else {
				if (leap) {
					if (c < 1 || c>29) {
						cout << "日不正确，请重新输入" << endl;
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						continue;
					}
					break;
				}
				else {
					if (c < 1 || c>28) {
						cout << "日不正确，请重新输入" << endl;
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						continue;
					}
					break;
				}
			}
		}
		else {
			cout << "输入错误，请重新输入" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}


	}

	int w = zeller(a, b, c);
	switch (w) {
		case 0:
			cout << "星期日" << endl;
			break;
		case 1:
			cout << "星期一" << endl;
			break;
		case 2:
			cout << "星期二" << endl;
			break;
		case 3:
			cout << "星期三" << endl;
			break;
		case 4:
			cout << "星期四" << endl;
			break;
		case 5:
			cout << "星期五" << endl;
			break;
		case 6:
			cout << "星期六" << endl;
			break;
	}

	return 0;
}