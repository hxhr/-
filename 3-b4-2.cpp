/*2250748 信02 王渝鹮*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include<math.h>
#include <iomanip>

using namespace std;


int main()
{
	int a, b, c;
	const double Pi = 3.14159;
	cout << "请输入三角形的两边及其夹角（角度）" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	float s = static_cast<float>(0.5 * a * b * sin(c * Pi / 180));
	cout << "三角形面积为 : " << setiosflags(ios::fixed) << setprecision(3) << s << endl;
	return 0;
}