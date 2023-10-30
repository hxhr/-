/* 2250748 王渝鹮 信02 */
#include <iostream>
#include<cmath>
using namespace std;
#define  N  32	


int main()
{
	char two[N] = { 0 };
	char* p = two;
	cout << "请输入一个0/1组成的字符串，长度不超过32" << endl;
	cin.getline(two, N);
	unsigned int ten = 0;
	for (; *p != '\0'; p++) {
		if (*(p + 1) == '\0') {
			break;
		}
	}
	for (int i = 0; p >= two; p--,i++) {
		ten = ten + (*p-'0')*pow(2, i);
	}
	cout << ten << endl;
	return 0;
}