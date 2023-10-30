/*2250748 信02 王渝鹮*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include<math.h>
#include <iomanip>
#include<limits>

using namespace std;

int main()
{

	int s = 0;
	while (s == 0) {
		cout << setprecision(10) << "请输入x的值[-10 ~ +65]" << endl;

		int x;
		cin >> x;
		if (x >= -10 && x <= 65) {
			double c = 0;
			double d = 1;
			double n = 1;
			for (double i = 1; fabs(d) > 1e-6 || fabs(d) < -1e-6; i++) {


				c = c + d;
				d = d * x / n;
				n++;
			}
			s = 1;
			cout << "e^" << x << "=" << setprecision(10) << c << endl;
		}
		else {
			cout << "输入非法，请重新输入" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	}
	return 0;


}