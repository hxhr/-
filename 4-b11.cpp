/* 2250748 信02 王渝鹮 */
#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

/* -----------------------------------------------------------------------------------
		允许   ：1、按需增加一个或多个函数（包括递归函数），但是所有增加的函数中不允许任何形式的循环
				 2、定义符号常量
				 3、定义const型变量

		不允许 ：1、定义全局变量
				 2、除print_tower之外的其他函数中不允许定义静态局部变量
   ----------------------------------------------------------------------------------- */

   /***************************************************************************
	 函数名称：
	 功    能：打印字母塔
	 输入参数：
	 返 回 值：
	 说    明：形参按需设置
			   提示：有一个参数order，指定正序/倒序
   ***************************************************************************/

//char now是当前行的最大字母

void print_left(char beg_ch, char end_ch) {
	if (end_ch >= beg_ch) {
		cout << beg_ch;
		print_left(beg_ch + 1, end_ch);

	}
}
void print_right(char beg_ch, char end_ch) {
	if (beg_ch <= end_ch) {
		cout << (char)(end_ch - 1);
		print_right(beg_ch, end_ch - 1);
	}
	else {
		cout << endl;
	}
}
void print_space(char beg_ch, char end_ch) {
	if (beg_ch < end_ch) {
		print_space(beg_ch+1,  end_ch);
		cout << " ";
	}
}
void print_tower(int order,char beg_ch ,char end_ch,char now)
{
	if (order == 1) {
		if (now > end_ch) {
			return;
		}
		print_space(now, end_ch);
		print_left(beg_ch, now);
		print_right(beg_ch + 1, now);
		print_tower(order, beg_ch, end_ch, now + 1);
	}
	else {
		if (now < beg_ch) {
			return;
		}
		print_space(now, end_ch);
		print_left(beg_ch, now);
		print_right(beg_ch + 1, now);
		print_tower(order, beg_ch, end_ch, now - 1);
	}
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：main函数中的...允许修改，其余位置不准修改
***************************************************************************/
int main()
{
	char end_ch;

	/* 键盘输入结束字符(仅大写有效，为避免循环出现，不处理输入错误) */
	cout << "请输入结束字符(A~Z)" << endl;
	end_ch = getchar();			//读缓冲区第一个字符
	if (end_ch < 'A' || end_ch > 'Z') {
		cout << "结束字符不是大写字母" << endl;
		return -1;
	}

	/* 正三角字母塔(两边为A) */
	cout <<setfill('=') << setw((end_ch - 'A') * 2+1 )<<'=' << endl; /* 按字母塔最大宽度输出=(不允许用循环) */
	cout << "正三角字母塔(A->" << end_ch << ")" << endl;
	cout << setfill('=') << setw((end_ch - 'A') * 2 + 1)<<'=' << endl; /* 按字母塔最大宽度输出=(不允许用循环) */
	print_tower(1, 'A',end_ch ,  'A'); //正序打印 A~结束字符 
	cout << endl;

	/* 倒三角字母塔(两边为A) */
	cout << setfill('=') << setw((end_ch - 'A') * 2 + 1) << '=' << endl; /* 按字母塔最大宽度输出=(不允许用循环) */
	cout << "倒三角字母塔(A->" << end_ch << ")" << endl;
	cout << setfill('=') << setw((end_ch - 'A') * 2 + 1) << '=' << endl; /* 按字母塔最大宽度输出=(不允许用循环) */
	print_tower(0, 'A', end_ch, end_ch);  //逆序打印 A~结束字符 
	cout << endl;

	/* 合起来就是漂亮的菱形（外侧为A） */
	cout << setfill('=') << setw((end_ch - 'A') * 2 + 1) << '=' << endl;/* 按字母塔最大宽度输出= */
	cout << "菱形(A->" << end_ch << ")" << endl;
	cout << setfill('=') << setw((end_ch - 'A') * 2 + 1) << '=' << endl;/* 按字母塔最大宽度输出= */
	print_tower(1, 'A', end_ch, 'A'); //打印 A~结束字符的正三角 
	print_tower(0, 'A', end_ch, end_ch-1);   //打印 A~结束字符-1的倒三角 
	cout << endl;


	return 0;
}