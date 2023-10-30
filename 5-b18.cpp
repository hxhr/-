/* 信02 2250748 王渝鹮 */
#include<iostream>
using namespace std;

int main()
{
	int len = 0;
	int daxie = 0;
	int xiaoxie = 0;
	int shuzi = 0;
	int qita = 0;

	char code[12][100] = { 0 };

	for (int i = 0; i < 12; i++) {
		//不能用cin因为读不了空格
		cin.getline(code[i], 100, '\n');


	}


	len = 10 * (code[1][0] - '0') + code[1][1] - '0';
	daxie = code[1][3] - '0';
	xiaoxie = code[1][5] - '0';
	shuzi = code[1][7] - '0';
	qita = code[1][9] - '0';




	for (int i = 2; i < 12; i++) {
		if (code[i][len] != '\0') {
			cout << "错误" << endl;
			return 0;
		}
		int daxie1 = 0;
		int xiaoxie1 = 0;
		int shuzi1 = 0;
		int qita1 = 0;
		for (int j = 0; j < len; j++) {
			if (code[i][j] >= 'A' && code[i][j] <= 'Z') {
				daxie1++;
			}
			else if (code[i][j] >= 'a' && code[i][j] <= 'z') {
				xiaoxie1++;
			}
			else if (code[i][j] >= '0' && code[i][j] <= '9') {
				shuzi1++;
			}
			else if (code[i][j] == '!' || code[i][j] == '@' || code[i][j] == '#' || code[i][j] == '$' || code[i][j] == '%' || code[i][j] == '^' || code[i][j] == '&' || code[i][j] == '*' || code[i][j] == '-' || code[i][j] == '_' || code[i][j] == '=' || code[i][j] == '+' || code[i][j] == ',' || code[i][j] == '.' || code[i][j] == '?') {
				qita1++;
			}
			else {
				cout << "错误" << endl;
				return 0;
			}
		}
		if (daxie1 < daxie || xiaoxie1 < xiaoxie || shuzi1 < shuzi || qita1 < qita) {
			cout << daxie << " " << daxie1 << " " << xiaoxie << " " << xiaoxie1 << " " << shuzi << " " << shuzi1 << " " << qita << " " << qita1;

			cout << "错误" << endl;
			return 0;

		}
	}

	cout << "正确" << endl;
	return 0;
}