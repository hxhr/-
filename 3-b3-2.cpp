/*2250748 信02 王渝鹮*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include<math.h>
#include <iomanip>

using namespace std;

int main()
{
	double h;
	cout << std::setprecision(20) << "请输入[0-100亿)之间的数字:" << endl;
	cin >> h;
	double s = h + 0.001;

	int b = static_cast<int>(s / 10);
	unsigned int d = static_cast<unsigned int>(s - 10 * b);
	unsigned int n = static_cast<unsigned int>((s - 10 * b - d) * 100);


	cout << "十亿位 :  " << b / 100000000 % 10 << endl;
	cout << "亿位   :  " << b / 10000000 % 10 << endl;
	cout << "千万位 :  " << b / 1000000 % 10 << endl;
	cout << "百万位 :  " << b / 100000 % 10 << endl;
	cout << "十万位 :  " << b / 10000 % 10 << endl;
	cout << "万位   :  " << b / 1000 % 10 << endl;
	cout << "千位   :  " << b / 100 % 10 << endl;
	cout << "百位   :  " << b / 10 % 10 << endl;
	cout << "十位   :  " << b % 10 << endl;
	cout << "圆     :  " << d << endl;
	cout << "角     :  " << n / 10 % 10 << endl;
	cout << "分     :  " << n % 10 << endl;


	return 0;

}
