/*2250748 ��02 �����q*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include<math.h>
#include <iomanip>

using namespace std;

int main()
{
	double h;
	cout << std::setprecision(20) << "������[0-100��)֮�������:" << endl;
	cin >> h;
	double s = h + 0.001;

	int b = static_cast<int>(s / 10);
	unsigned int d = static_cast<unsigned int>(s - 10 * b);
	unsigned int n = static_cast<unsigned int>((s - 10 * b - d) * 100);


	cout << "ʮ��λ :  " << b / 100000000 % 10 << endl;
	cout << "��λ   :  " << b / 10000000 % 10 << endl;
	cout << "ǧ��λ :  " << b / 1000000 % 10 << endl;
	cout << "����λ :  " << b / 100000 % 10 << endl;
	cout << "ʮ��λ :  " << b / 10000 % 10 << endl;
	cout << "��λ   :  " << b / 1000 % 10 << endl;
	cout << "ǧλ   :  " << b / 100 % 10 << endl;
	cout << "��λ   :  " << b / 10 % 10 << endl;
	cout << "ʮλ   :  " << b % 10 << endl;
	cout << "Բ     :  " << d << endl;
	cout << "��     :  " << n / 10 % 10 << endl;
	cout << "��     :  " << n % 10 << endl;


	return 0;

}
