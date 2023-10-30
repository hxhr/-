/* 信02 2250748 王渝鹮 */
#include<iostream>
using namespace std;


int main()
{
	char str[3][128] = { 0 };
	cout << "请输入第1行" << endl;
	cin.getline(str[0], 128);
	cout << "请输入第2行" << endl;
	cin.getline(str[1], 128);
	cout << "请输入第3行" << endl;
	cin.getline(str[2], 128);
	int daxie = 0;
	int xiaoxie = 0;
	int shuzi = 0;
	int kongge = 0;
	int qita = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 128; j++) {
			if (str[i][j] == 0) {
				break;
			}
			else {
				if (str[i][j] >= 'A' && str[i][j] <= 'Z') {
					daxie++;
				}
				else if (str[i][j] >= 'a' && str[i][j] <= 'z') {
					xiaoxie++;
				}
				else if (str[i][j] >= '0' && str[i][j] <= '9') {
					shuzi++;
				}
				else if (str[i][j] == ' ') {
					kongge++;
				}
				else {
					qita++;
				}
			}
		}
	}
	
	cout << "大写 : " << daxie << endl;
	cout << "小写 : " << xiaoxie << endl;
	cout << "数字 : " << shuzi << endl;
	cout << "空格 : " << kongge << endl;
	cout << "其它 : " << qita << endl;

	return 0;


}