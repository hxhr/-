/*2250748 ��02 �����q*/
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
	cout << "�����������ε����߼���нǣ��Ƕȣ�" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	float s = static_cast<float>(0.5 * a * b * sin(c * Pi / 180));
	cout << "���������Ϊ : " << setiosflags(ios::fixed) << setprecision(3) << s << endl;
	return 0;
}