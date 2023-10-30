/* 信02 2250748 王渝鹮 */
#include<iostream>
#include <random>
#include <time.h>

using namespace std;

static const char other[] = "!@#$%^&*-_=+,.?";


int main()
{
	//输入错误处理不熟
	int len = 0;
	int daxie = 0;
	int xiaoxie = 0;
	int shuzi = 0;
	int qita = 0;


	//定义一下大写字母组
	char daxie_26[26] = { 0 };
	for (int i = 0; i < 26; i++) {
		daxie_26[i] = i + 'A';
	}

	//定义一下小写字母组
	char xiaoxie_26[26] = { 0 };
	for (int i = 0; i < 26; i++) {
		xiaoxie_26[i] = i + 'a';
	}



	cout << "请输入密码长度(12-16)， 大写字母个数(≥2)， 小写字母个数(≥2)， 数字个数(≥2)， 其它符号个数(≥2)" << endl;
	cin >> len >> daxie >> xiaoxie >> shuzi >> qita;
	if (!cin.good()) {
		cout << "输入非法" << endl;
		return 0;
	}
	else if (len < 12 || len>16) {
		cout << "密码长度[" << len << "]不正确" << endl;
		return 0;
	}
	else if (daxie < 2 || xiaoxie < 2 || shuzi < 2 || qita < 2) {
		if (daxie < 2) {
			cout << "大写字母个数[" << daxie << "]不正确" << endl;
			return 0;
		}
		if (xiaoxie < 2) {
			cout << "小写字母个数[" << xiaoxie << "]不正确" << endl;
			return 0;
		}
		if (shuzi < 2) {
			cout << "数字个数[" << shuzi << "]不正确" << endl;
			return 0;
		}
		if (qita < 2) {
			cout << "其它符号个数[" << qita << "]不正确" << endl;
			return 0;
		}
	}
	else if (daxie + xiaoxie + shuzi + qita > len) {
		cout << "所有字符类型之和[" << daxie << "+" << xiaoxie << "+" << shuzi << "+" << qita << "]大于总密码长度[" << len << "]" << endl;
		return 0;
	}

	cout <<len<<" "<< daxie << " " << xiaoxie << " " << shuzi << " " << qita << endl;
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 10; i++) {
		char code[17] = { 0 };
		//大写
		for (int i = 0; i < daxie; i++) {
			int m = rand() % len;
			if (code[m] != 0) {
				i--;
				continue;
			}
			code[m] = daxie_26[rand() % 26];
		}
		//小写
		for (int i = 0; i < xiaoxie; i++) {
			int m = rand() % len;
			if (code[m] != 0) {
				i--;
				continue;
			}
			code[m] = xiaoxie_26[rand() % 26];
		}
		//数字  别忘了‘0’
		for (int i = 0; i < shuzi; i++) {
			int m = rand() % len;
			if (code[m] != 0) {
				i--;
				continue;
			}
			code[m] = rand() % 10+'0';
		}

		//其他符号
		for (int i = 0; i < len-daxie-xiaoxie-shuzi; i++) {
			int m = rand() % len;
			if (code[m] != 0) {
				i--;
				continue;
			}
			code[m] = other[rand() % 15];
		}

		for (int j = 0; j < len; j++) {
			cout << code[j];
		}
		cout << endl;
	}



	return 0;
}