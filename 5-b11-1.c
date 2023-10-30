/* 信02 2250748 王渝鹮 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//可按需增加需要的头文件

const char chnstr[] = "零壹贰叁肆伍陆柒捌玖"; /* 所有输出大写 "零" ~ "玖" 的地方，只允许从这个数组中取值 */
char result[256];  /* 除result外，不再允许定义任何形式的全局变量 */

/* --允许添加需要的函数 --*/

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/

//汉子是2
//细节是把函数改成有返回值的，这样直接在里面改变point的值
int daxie(int num, int flag_of_zero, int point)
{
	//注意point是局部变量，出了本函数值不会变


	/* 不允许对本函数做任何修改 */
	switch (num) {
		case 0:
			if (flag_of_zero) {
				result[point++] = chnstr[0];
				result[point++] = chnstr[1];
				return point;
			}
			return point;
			break;
		case 1:
			result[point++] = chnstr[2];
			result[point++] = chnstr[3];
			return point;
			break;
		case 2:
			result[point++] = chnstr[4];
			result[point++] = chnstr[5];
			return point;
			break;
		case 3:
			result[point++] = chnstr[6];
			result[point++] = chnstr[7];
			return point;
			break;
		case 4:
			result[point++] = chnstr[8];
			result[point++] = chnstr[9];
			return point;
			break;
		case 5:
			result[point++] = chnstr[10];
			result[point++] = chnstr[11];
			return point;
			break;
		case 6:
			result[point++] = chnstr[12];
			result[point++] = chnstr[13];
			return point;
			break;
		case 7:
			result[point++] = chnstr[14];
			result[point++] = chnstr[15];
			return point;
			break;
		case 8:
			result[point++] = chnstr[16];
			result[point++] = chnstr[17];
			return point;
			break;
		case 9:
			result[point++] = chnstr[18];
			result[point++] = chnstr[19];
			return point;
			break;
		default:
			return point;
			printf("error");
			break;
	}
}

//别忘了\0
int main()
{
	char chnstr2[] = "拾佰仟万亿圆角分整";
	int point = 0;//定义局部变量用于一会放到数组中
	/* --允许添加需要的内容 --*/
	double h;
	printf("请输入[0-100亿)之间的数字:\n");
	scanf("%lf", &h);
	double s = h + 0.001;

	int b = (int)(s / 10);
	unsigned int d = (unsigned int)(s - 10 * b);
	unsigned int n = (unsigned int)((s - 10 * b - d) * 100);

	int leap;
	//记录十亿-亿是否全为0
	int flag_of_zero = 0;
	int z1 = 0;
	printf("大写结果是:\n");

	//十亿-亿
	point = daxie(b / 100000000 % 10, flag_of_zero, point);



	if (b / 100000000 % 10 == 0) {
		z1 = 0;
	}
	else {
		z1 = 1;
		result[point++] = chnstr2[0];
		result[point++] = chnstr2[1];

	}


	point = daxie(b / 10000000 % 10, 0, point);


	if (b / 10000000 % 10 == 0 && z1 == 0) {
		z1 = 0;
	}
	else {
		z1 = 1;
	}
	if (z1) {

		result[point++] = chnstr2[8];
		result[point++] = chnstr2[9];


	}









	//千万-万

	//记录千万-万是否全为0
	int z2 = 0;
	flag_of_zero = (z1 && b / 100000 % 10 != 0);
	point = daxie(b / 1000000 % 10, flag_of_zero, point);

	//如果上一位非0，则leap=1
	if (b / 1000000 % 10 == 0) {
		leap = 0;
	}
	else {
		leap = 1;
		result[point++] = chnstr2[4];
		result[point++] = chnstr2[5];



	}
	if (b / 1000000 % 10 == 0) {
		z2 = 0;
	}
	else {
		z2 = 1;

	}
	//百万
	flag_of_zero = ((z1 || z2) && b / 10000 % 10 != 0);
	point = daxie(b / 100000 % 10, flag_of_zero, point);

	if (b / 100000 % 10 == 0) {
		leap = 0;
	}
	else {
		leap = 1;

		result[point++] = chnstr2[2];
		result[point++] = chnstr2[3];


	}
	if (b / 100000 % 10 == 0 && z2 == 0) {
		z2 = 0;
	}
	else {
		z2 = 1;
	}
	//十万
	flag_of_zero = ((z1 || z2) && b / 1000 % 10 != 0);
	point = daxie(b / 10000 % 10, flag_of_zero, point);

	if (b / 10000 % 10) {
		result[point++] = chnstr2[0];
		result[point++] = chnstr2[1];


	}

	if (b / 10000 % 10 == 0 && z2 == 0) {
		z2 = 0;
	}
	else {
		z2 = 1;
	}
	//万位
	point = daxie(b / 1000 % 10, 0, point);

	if (b / 1000 % 10) {
		result[point++] = chnstr2[6];
		result[point++] = chnstr2[7];

	}
	else {
		if (z2) {
			result[point++] = chnstr2[6];
			result[point++] = chnstr2[7];

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
	point = daxie(b / 100 % 10, flag_of_zero, point);

	if (b / 100 % 10) {
		result[point++] = chnstr2[4];
		result[point++] = chnstr2[5];

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
	point = daxie(b / 10 % 10, flag_of_zero, point);

	if (b / 10 % 10) {
		result[point++] = chnstr2[2];
		result[point++] = chnstr2[3];
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
	point = daxie(b % 10, flag_of_zero, point);

	if (b % 10) {
		result[point++] = chnstr2[0];
		result[point++] = chnstr2[1];
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
	point = daxie(d, flag_of_zero, point);

	if (d || flag_of_zero || (z1 || z2 || z3)) {
		result[point++] = chnstr2[10];
		result[point++] = chnstr2[11];
	}


	if (d == 0 && z3 == 0) {
		z3 = 0;
	}
	else {
		z3 = 1;
	}







	//角-分

	if (n / 10 % 10 == 0 && n % 10 == 0) {
		result[point++] = chnstr2[16];
		result[point++] = chnstr2[17];
	}
	else {
		//角
		flag_of_zero = !(z1 == 0 && z2 == 0 && z3 == 0);
		point = daxie(n / 10 % 10, flag_of_zero, point);

		if (n / 10 % 10) {
			result[point++] = chnstr2[12];
			result[point++] = chnstr2[13];
		}

		if (n % 10 == 0) {
			result[point++] = chnstr2[16];
			result[point++] = chnstr2[17];
		}
		else {
			//分
			point = daxie(n % 10, 0, point);

			result[point++] = chnstr2[14];
			result[point++] = chnstr2[15];



		}


	}
	/*result[point] = '\0';*/


	printf("%s\n", result);  /* 转换得到的大写结果，只允许用本语句输出，其它地方不允许以任何形式对大写结果进行全部/部分输出 */
	return 0;
}