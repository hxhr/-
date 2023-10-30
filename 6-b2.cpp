/* 2250748 王渝鹮 信02 */
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
#define  N  80	


int main()
{
	char str1[N] = { 0 };
	char str2[N] = { 0 };
	char* p1 = str1;
	char* p2 = str2;
	cout << "请输入一个长度小于80的字符串（回文串）" << endl;
	fgets(str1, 80, stdin);
	str1[strcspn(str1, "\n")] = '\0';
	for (int i = 0; i < 80; i++) {
		if (str1[i] == '\0') {
			p1 = &str1[i-1];//一开始我付的是i,不行，会使str2第一个就是\0
			break;
		}
	}
	for (; p1 >= str1; p1--, p2++) {
		*p2 = *p1;
		if (p1 == str1) {
			*(p2 + 1) = '\0';
		}
	}
	int result = strcmp(str1, str2);//返回0是相等
	if (result) {
		cout << "no" << endl;
	}
	else {
		cout << "yes" << endl;

	}
	return 0;
}