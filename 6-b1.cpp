/* 2250748 王渝鹮 信02 */
#include <iostream>
using namespace std;

#define  N  10	/* 假设最多转换10个数字 */

/* 不允许再定义其它函数、全局变量 */

int main()
{
	/* 如果有不需要的变量，允许删除，但不允许添加或替换为其它类型的变量 */
	char str[256], * p;
	int  a[N] = { 0 }, * pnum, * pa;
	bool is_num;

	/* 上面的定义不准动(删除不需要的变量除外)，下面为程序的具体实现，要求不得再定义任何变量、常量、常变量 */
	for (int i = 0; i < 256; i++) {
		str[i] = 0;
	}


	cout << "请输入间隔含有若干正负数字的字符串" << endl;
	cin.getline(str, 256);
	p = str;
	pnum = a;
	is_num = 0;
	pa = a;
	for (; *p!=0; p++) {
		if (is_num) {
			if (*p >= '0' && *p <= '9') {
				*pnum = *p - '0' + 10 * (*pnum);
			}
			else {
				if (pnum==a+40) {
					break;
				}
				else {
					pnum++;
				}
				is_num = 0;
			}
		}
		else {
			if (*p >= '0' && *p <= '9') {
				*pnum = *p - '0' ;
				is_num = 1;
				if (*(p + 1) == 0) {
					pnum++;
				}
			}
		}
	}
	cout << "共有" << (pnum - a)<< "个整数" << endl;
	for (; pa <pnum; pa++) {
		//pa-a等于什么？验证是10不是40 之后弄明白
		cout << *pa << " ";
	}

	cout << endl;
	return 0;
}