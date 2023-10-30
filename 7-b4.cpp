/* 2250748 王渝鹮 信02 */
#include <iostream>
#include<limits>
using namespace std;

unsigned int max(unsigned int a, unsigned int b)
{
	if (a > b) {
		return b;
	}
	else {
		return a;
	}
}

unsigned int max(unsigned int a, unsigned int b, unsigned int c)
{
	unsigned int t = max(a, b);
	if (t > c) {
		return c;
	}
	else {
		return t;
	}
}

unsigned int max(unsigned int a, unsigned int b, unsigned int c, unsigned int d)
{
	unsigned int t = max(a, b, c);
	if (t > d) {
		return d;
	}
	else {
		return t;
	}
}


unsigned int min(unsigned int a, unsigned int b, unsigned int c = 0, unsigned int d = 0)
{
	if (c == 0) {
		return max(a, b);
	}
	else if (d == 0) {
		return max(a, b, c);
	}
	else {
		return max(a, b, c, d);
	}
}

int main()
{
	int fin = 0;
	while (1) {
		cout << "请输入个数num及num个正整数：" << endl;
		int num = 0;
		unsigned int a = 0, b = 0, c = 0, d = 0;
		cin >> num;
		if (cin.good()) {
			if (num >= 2 && num <= 4) {

				switch (num) {
					case 2:
						cin >> a >> b;
						if (cin.good()&&a!=0&&b!=0) {
							fin = min(a, b);
						}
						else {
							cin.clear();
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
							continue;
						}
						break;
					case 3:
						cin >> a >> b >> c;
						if (cin.good() && a != 0 && b != 0&&c!=0) {
							fin = min(a, b, c);
						}
						else {
							cin.clear();
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
							continue;
						}
						break;
					case 4:
						cin >> a >> b >> c >> d;
						if (cin.good()&& a != 0 && b != 0 && c != 0&&d!=0) {
							fin = min(a, b, c, d);
						}
						else {
							cin.clear();
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
							continue;
						}
						break;
				}
				cout << "min=" << fin << endl;
				break;
			}
			else {
				cout << "个数输入错误" << endl;
				return 0;
			}
		}
		else {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	}


	return 0;
}