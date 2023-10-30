/* 2250748 王渝鹮 信02 */
#include <iostream>
#include <cmath>
#include<math.h>
#include <iomanip>
using namespace std;

/* 可根据需要添加相应的内容 */

/***************************************************************************
  函数名称：
  功    能：输出大写的0~9
  输入参数：
  返 回 值：
  说    明：除本函数外，不允许任何函数中输出“零”-“玖”!!!!!!
***************************************************************************/
void daxie(int num, int flag_of_zero)
{
	/* 不允许对本函数做任何修改 */
	switch (num) {
		case 0:
			if (flag_of_zero)	//此标记什么意思请自行思考
				cout << "零";
			break;
		case 1:
			cout << "壹";
			break;
		case 2:
			cout << "贰";
			break;
		case 3:
			cout << "叁";
			break;
		case 4:
			cout << "肆";
			break;
		case 5:
			cout << "伍";
			break;
		case 6:
			cout << "陆";
			break;
		case 7:
			cout << "柒";
			break;
		case 8:
			cout << "捌";
			break;
		case 9:
			cout << "玖";
			break;
		default:
			cout << "error";
			break;
	}
}

/* 可根据需要自定义其它函数(也可以不定义) */

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int main()
{
	double h;
	cout << std::setprecision(20) << "请输入[0-100亿)之间的数字:" << endl;
	cin >> h;
	double s = h + 0.001;

	int b = static_cast<int>(s / 10);
	unsigned int d = static_cast<unsigned int>(s - 10 * b);
	unsigned int n = static_cast<unsigned int>((s - 10 * b - d) * 100);

	int leap;
	//记录十亿-亿是否全为0
	int flag_of_zero = 0;
	int z1 = 0;
	cout << "大写结果是:" << endl;

	//十亿-亿
	daxie(b / 100000000 % 10, flag_of_zero);


	if (b / 100000000 % 10 == 0) {
		z1 = 0;
	}
	else {
		z1 = 1;
		cout << "拾";
	}


	daxie(b / 10000000 % 10, 0);


	if (b / 10000000 % 10 == 0 && z1 == 0) {
		z1 = 0;
	}
	else {
		z1 = 1;
	}
	if (z1) {
		cout << "亿";
	}









	//千万-万

	//记录千万-万是否全为0
	int z2 = 0;
	flag_of_zero = (z1 && b / 100000 % 10 != 0);
	daxie(b / 1000000 % 10, flag_of_zero);

	//如果上一位非0，则leap=1
	if (b / 1000000 % 10 == 0) {
		leap = 0;
	}
	else {
		leap = 1;
		cout << "仟";

	}
	if (b / 1000000 % 10 == 0) {
		z2 = 0;
	}
	else {
		z2 = 1;

	}
	//百万
	flag_of_zero = ((z1 || z2) && b / 10000 % 10 != 0);
	daxie(b / 100000 % 10, flag_of_zero);

	if (b / 100000 % 10 == 0) {
		leap = 0;
	}
	else {
		leap = 1;
		cout << "佰";
	}
	if (b / 100000 % 10 == 0 && z2 == 0) {
		z2 = 0;
	}
	else {
		z2 = 1;
	}
	//十万
	flag_of_zero = ((z1 || z2) && b / 1000 % 10 != 0);
	daxie(b / 10000 % 10, flag_of_zero);
	if (b / 10000 % 10) {
		cout << "拾";
	}

	if (b / 10000 % 10 == 0 && z2 == 0) {
		z2 = 0;
	}
	else {
		z2 = 1;
	}
	//万位
	daxie(b / 1000 % 10, 0);
	if (b / 1000 % 10) {
		cout << "万";
	}
	else {
		if (z2) {
			cout << "万";
		}
	}

	if (b / 1000 % 10 == 0 && z2 == 0) {
		z2 = 0;
	}
	else {
		z2 = 1;
	}





	//千位到个位


	//千位
	int z3 = 0;
	flag_of_zero = ((z1 || z2) && b / 10 % 10 != 0);
	daxie(b / 100 % 10, flag_of_zero);
	if (b / 100 % 10) {
		cout << "仟";
	}
	if (b / 100 % 10 == 0) {
		leap = 0;
	}
	else {
		leap = 1;
	}
	if (b / 100 % 10 == 0) {
		z3 = 0;
	}
	else {
		z3 = 1;
	}
	//百位
	flag_of_zero = ((z1 || z2 || z3) && b % 10 != 0);
	daxie(b / 10 % 10, flag_of_zero);
	if (b / 10 % 10) {
		cout << "佰";
	}
	//如果上一位非0，则leap=1
	if (b / 10 % 10 == 0) {
		leap = 0;
	}
	else {
		leap = 1;
	}
	if (b / 10 % 10 == 0 && z3 == 0) {
		z3 = 0;
	}
	else {
		z3 = 1;
	}
	//十位
	flag_of_zero = ((z1 || z2 || z3) && d != 0);
	daxie(b % 10, flag_of_zero);
	if (b % 10) {
		cout << "拾";
	}
	//如果上一位非0，则leap=1
	if (b % 10) {
		leap = 0;
	}
	else {
		leap = 1;
	}
	if (b % 10 == 0 && z3 == 0) {
		z3 = 0;
	}
	else {
		z3 = 1;
	}
	//圆
	flag_of_zero = (z1 == 0 && z2 == 0 && z3 == 0 && n / 10 % 10 == 0 && n % 10 == 0);
	daxie(d, flag_of_zero);
	if (d || flag_of_zero || (z1 || z2 || z3)) {
		cout << "圆";
	}


	if (d == 0 && z3 == 0) {
		z3 = 0;
	}
	else {
		z3 = 1;
	}







	//角-分

	if (n / 10 % 10 == 0 && n % 10 == 0) {
		cout << "整" << endl;
	}
	else {
		//角
		flag_of_zero = !(z1 == 0 && z2 == 0 && z3 == 0);
		daxie(n / 10 % 10, flag_of_zero);
		if (n / 10 % 10) {
			cout << "角";
		}

		if (n % 10 == 0) {
			cout << "整" << endl;
		}
		else {
			//分
			daxie(n % 10, 0);
			cout << "分" << endl;


		}


	}




	return 0;
}