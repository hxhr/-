/* 信02 2250748 王渝鹮 */
#include <iostream>
#include <string>
#include<math.h>
#include <iomanip>

//可按需增加需要的头文件
using namespace std;

const char chnstr[] = "零壹贰叁肆伍陆柒捌玖"; /* 所有输出大写 "零" ~ "玖" 的地方，只允许从这个数组中取值 */
string result;  /* 除result外，不再允许定义任何形式的全局变量 */

/* --允许添加需要的函数 --*/
void daxie(int num, int flag_of_zero)
{
	//注意point是局部变量，出了本函数值不会变


	/* 不允许对本函数做任何修改 */
	switch (num) {
		case 0:
			if (flag_of_zero) {
				result = result + chnstr[0] + chnstr[1];

			}

			break;
		case 1:
			result = result + chnstr[2] + chnstr[3];
			break;
		case 2:
			result = result + chnstr[4] + chnstr[5];
			break;
		case 3:
			result = result + chnstr[6] + chnstr[7];
			break;
		case 4:
			result = result + chnstr[8] + chnstr[9];
			break;
		case 5:
			result = result + chnstr[10] + chnstr[11];
			break;
		case 6:
			result = result + chnstr[12] + chnstr[13];
			break;
		case 7:
			result = result + chnstr[14] + chnstr[15];
			break;
		case 8:
			result = result + chnstr[16] + chnstr[17];
			break;
		case 9:
			result = result + chnstr[18] + chnstr[19];
			break;
		default:

			printf("error");
			break;
	}
}


/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int main()
{
	/* --允许添加需要的内容 --*/
	char chnstr2[] = "拾佰仟万亿圆角分整";

	/* --允许添加需要的内容 --*/
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
		result = result + chnstr2[0] + chnstr2[1];


	}


	daxie(b / 10000000 % 10, 0);


	if (b / 10000000 % 10 == 0 && z1 == 0) {
		z1 = 0;
	}
	else {
		z1 = 1;
	}
	if (z1) {
		result = result + chnstr2[8] + chnstr2[9];


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
		result = result + chnstr2[4] + chnstr2[5];




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
		result = result + chnstr2[2] + chnstr2[3];



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
		result = result + chnstr2[0] + chnstr2[1];


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
		result = result + chnstr2[6] + chnstr2[7];


	}
	else {
		if (z2) {
			result = result + chnstr2[6] + chnstr2[7];


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
		result = result + chnstr2[4] + chnstr2[5];

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
		result = result + chnstr2[2] + chnstr2[3];

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
		result = result + chnstr2[0] + chnstr2[1];

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
		result = result + chnstr2[10] + chnstr2[11];

	}


	if (d == 0 && z3 == 0) {
		z3 = 0;
	}
	else {
		z3 = 1;
	}







	//角-分

	if (n / 10 % 10 == 0 && n % 10 == 0) {
		result = result + chnstr2[16] + chnstr2[17];

	}
	else {
		//角
		flag_of_zero = !(z1 == 0 && z2 == 0 && z3 == 0);
		daxie(n / 10 % 10, flag_of_zero);

		if (n / 10 % 10) {
			result = result + chnstr2[12] + chnstr2[13];

		}

		if (n % 10 == 0) {
			result = result + chnstr2[16] + chnstr2[17];

		}
		else {
			//分
			daxie(n % 10, 0);

			result = result + chnstr2[14] + chnstr2[15];




		}


	}

	cout << result << endl;  /* 转换得到的大写结果，只允许用本语句输出，其它地方不允许以任何形式对大写结果进行全部/部分输出 */
	return 0;
}