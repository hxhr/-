/* 2250748 王渝鹮 信02 */
#include <iostream>
using namespace std;

/* 1、不允许定义任何类型的全局变量，包括常变量及宏定义等
   2、不允许给出任何形式的全局函数
*/

/* --- 将类的定义补充完整 --- */
class Days {
private:
	int year;
	int month;
	int day;
	//除上面的三个private数据成员外，不再允许添加任何类型的数据成员

	/* 下面可以补充需要的类成员函数的定义（不提供给外界，仅供本类的其它成员函数调用，因此声明为私有，数量不限，允许不定义） */

public:
	int calc_days();     //计算是当年的第几天
    Days(int a, int b, int c);
	/* 下面可以补充其它需要的类成员函数的定义(体外实现)，数量不限，允许不定义 */

};
Days::Days(int a, int b, int c)
{
    this->year = a;
    this->month = b;
    this->day = c;
}
/* --- 此处给出类成员函数的体外实现 --- */
int Days::calc_days()
{
    if (this->month >= 1 && this->month <= 12) {
        bool leap;
        if ((this->year % 4 == 0 && this->year % 100 != 0) || (this->year % 400 == 0)) {
            leap = true;
        }
        else {
            leap = false;
        }
        switch (this->month) {
            case 1:
                if (this->day >= 1 && this->day <= 31) {
                    return this->day;
                }
                else {
                    return -1;
                }
                break;

            case 2:
                if (leap) {
                    if (this->day >= 1 && this->day <= 29) {
                        return this->day + 31;
                    }
                    else {
                        return -1;
                    }
                }
                else {
                    if (this->day >= 1 && this->day <= 28) {
                        return this->day + 31 ;
                    }
                    else {
                        return -1;
                    }
                }
                break;


            case 3:
                if (this->day >= 1 && this->day <= 31) {
                    return this->day + 31 + 28 + leap ;
                }
                else {
                    return -1;
                }
                break;

            case 4:
                if (this->day >= 1 && this->day <= 30) {
                    return this->day + 31 * 2 + 28 + leap ;
                }
                else {
                    return -1;
                }
                break;
            case 5:
                if (this->day >= 1 && this->day <= 31) {
                    return this->day + 31 * 2 + 30 + 28 + leap ;
                }
                else {
                    return -1;
                }
                break;
            case 6:
                if (this->day >= 1 && this->day <= 30) {
                    return this->day + 31 * 3 + 30 + 28 + leap ;
                }
                else {
                    return -1;
                }
                break;


            case 7:
                if (this->day >= 1 && this->day <= 31) {
                    return this->day + 31 * 3 + 30 * 2 + 28 + leap ;
                }
                else {
                    return -1;
                }
                break;
            case 8:
                if (this->day >= 1 && this->day <= 31) {
                    return this->day + 31 * 4 + 30 * 2 + 28 + leap ;
                }
                else {
                    return -1;
                }
                break;
            case 9:
                if (this->day >= 1 && this->day <= 30) {
                    return this->day + 31 * 5 + 30 * 2 + 28 + leap ;
                }
                else {
                    return -1;
                }
                break;
            case 10:
                if (this->day >= 1 && this->day <= 31) {
                    return this->day + 31 * 5 + 30 * 3 + 28 + leap ;
                }
                else {
                    return -1;
                }
                break;
            case 11:
                if (this->day >= 1 && this->day <= 30) {
                    return this->day + 31 * 6 + 30 * 3 + 28 + leap ;
                }
                else {
                    return -1;
                }
                break;

            case 12:
                if (this->day >= 1 && this->day <= 31) {
                    return this->day + 31 * 6 + 30 * 4 + 28 + leap ;
                }
                else {
                    return -1;
                }
                break;
            default:
                return -1;
               
        }
    }
    else {
        return -1;
    }

 }

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：main函数不准动
 ***************************************************************************/
int main()
{
	if (1) {
		Days d1(2020, 3, 18);
		cout << "应该输出78， 实际是：" << d1.calc_days() << endl;
	}

	if (1) {
		Days d1(2023, 3, 18);
		cout << "应该输出77， 实际是：" << d1.calc_days() << endl;
	}

	if (1) {
		Days d1(2020, 12, 31);
		cout << "应该输出366，实际是：" << d1.calc_days() << endl;
	}

	if (1) {
		Days d1(2023, 12, 31);
		cout << "应该输出365，实际是：" << d1.calc_days() << endl;
	}

	if (1) {
		Days d1(2020, 2, 29);
		cout << "应该输出60， 实际是：" << d1.calc_days() << endl;
	}

	if (1) {
		Days d1(2023, 2, 29);
		cout << "应该输出-1， 实际是：" << d1.calc_days() << endl;
	}

	return 0;
}