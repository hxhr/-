/* 2250748 王渝鹮 信02 */
#include <iostream>
#include <iomanip>
using namespace std;

/* ----具体要求----
   1、不允许添加其它头文件
   2、不允许定义全局变量、静态局部变量（全局只读变量或宏定义不受此限制）
   3、最多允许添加一个函数，且需要满足要求
   ---------------------------------------------------------------------
*/

#define N	10

struct course {
	float value;	//某课程的成绩（百分制）
	float weight;	//某课程的学分（权重）
	int   gpa;		//某课程的绩点（同济规则，[0..60) - 0, [60,70) - 2, [70,80) - 3, [80-90) - 4,[90,100] - 5）
};

struct student {
	int   no;               //学号（虽然用int不够合理，此处不考虑）
	char  name[9];          //假设姓名最长4个汉字
	struct course score[3]; //数组放三门课的成绩（未使用宏定义，函数实现时，直接写3即可）
	double ave;
};

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：此处最多允许添加一个函数，且函数的形参、自动变量等都必须是简单变量（即不允许[]形式）
***************************************************************************/

int jidian(float value)
{
	if (value >= 0 && value < 60) {
		return 0;
	}
	else if (value >= 60 && value < 70) {
		return 2;
	}
	else if (value >= 70 && value < 80) {
		return 3;
	}
	else if (value >= 80 && value < 90) {
		return 4;
	}
	else if (value >= 90 && value <= 100) {
		return 5;
	}
	return 0;
}


/***************************************************************************
  函数名称：
  功    能：输入10个学生的信息
  输入参数：
  返 回 值：
  说    明：不允许出现宏定义N
***************************************************************************/
void input(struct student* stu, int num)
{
	/* 除这两个整型变量外，本函数不再允许定义任何形式的变量
		 如果不用，允许删除，但不得增加或替换为其它形式的变量
		包括for(int k=0; )形式的新变量定义同样禁止 */
	int i;
	for (i = 0; i < num; i++) {
		cout << "请输入第" << setw(2) << i + 1 << "个学生的信息 : ";
		cin >> stu->no >> stu->name >> stu->score[0].value >> stu->score[0].weight >> stu->score[1].value >> stu->score[1].weight >> stu->score[2].value >> stu->score[2].weight;
		stu->score[0].gpa = jidian(stu->score[0].value);
		stu->score[1].gpa = jidian(stu->score[1].value);
		stu->score[2].gpa = jidian(stu->score[2].value);

		stu++;
	}

	cout << endl;


}

/***************************************************************************
  函数名称：
  功    能：输出基本信息
  输入参数：
  返 回 值：
  说    明：不允许出现宏定义N
***************************************************************************/
void output_base(struct student* stu, int num)
{
	/* 除这两个指针变量外，本函数不再允许定义任何形式的变量
		 如果不用，允许删除，但不得增加或替换为其它形式的变量
		包括for(int i=0; )形式的新变量定义同样禁止 */
	struct student* ps;
	struct course* pc;

	ps = stu;
	cout << N << "个学生的成绩" << endl;
	cout << "序号 学号    姓名     绩点1 权重1 绩点2 权重2 绩点3 权重3 平均绩点" << endl;
	cout << "==================================================================" << endl;
	for (; ps - stu < num; ps++) {
		pc = ps->score;
		std::cout << std::left;
		cout << setw(5) << ps - stu + 1 << ps->no << " " << setw(9) << ps->name;
		cout << pc->gpa << "     " << pc->weight << "     ";
		cout << (pc + 1)->gpa << "     " << (pc + 1)->weight << "     ";
		cout << (pc + 2)->gpa << "     " << (pc + 2)->weight << "     ";
		ps->ave = (double)((pc->gpa * pc->weight + (pc + 1)->gpa * (pc + 1)->weight + (pc + 2)->gpa * (pc + 2)->weight) / (pc->weight + (pc + 1)->weight + (pc + 2)->weight));
		cout << setiosflags(ios::fixed) << setprecision(3) << ps->ave;
		cout.unsetf(ios::fixed);
		cout << " " << endl;

	}

	/* 函数的实现部分，不允许任何形式的[]出现 */
}

/***************************************************************************
  函数名称：
  功    能：输出绩点最高的学生（可能有并列）
  输入参数：
  返 回 值：
  说    明：不允许出现宏定义N
***************************************************************************/
void output_max(struct student* stu, int num)
{
	/* 本函数中允许定义各种类型的简单变量，但不允许定义数组 */
	double high = 0;
	struct student* ps;
	ps = stu;
	for (int i = 0; i < num; i++) {
		if (stu->ave > high) {

			high = stu->ave;
		}
		stu++;
	}
	stu = ps;
	cout << endl;
	cout << "绩点最高的学生为" << endl;
	cout << "序号 学号    姓名     绩点1 权重1 绩点2 权重2 绩点3 权重3 平均绩点" << endl;
	cout << "==================================================================" << endl;
	for (int i = 0; i < num; i++) {
		if (stu->ave == high) {
			cout << setw(5) << i + 1 << setw(8) << stu->no;
			cout << setw(9) << stu->name;
			cout << stu->score[0].gpa << "     " << stu->score[0].weight << "     ";
			cout << stu->score[1].gpa << "     " << stu->score[1].weight << "     ";
			cout << stu->score[2].gpa << "     " << stu->score[2].weight << "     ";
			cout << setiosflags(ios::fixed) << setprecision(3) << high;
			cout.unsetf(ios::fixed);
			cout << " " << endl;
		}
		stu++;
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
	struct student stu[N];

	input(stu, N);		//输入10个学生的信息
	output_base(stu, N);	//输出10个学生的基本信息
	output_max(stu, N);	//输出最高（可能有多个）

	return 0;
}

/*
测试数据，复制到cmd即可（测试时，不限于这一组）

2150844 温在豪 76.5 4 82 5 52 2
2154284 杨骏昊 63 4 49 1 87 6
2253105 赵浩天 56 3 76 4 69 5
2254319 徐希文 44.5 2 83.5 4 87 6
2251754 孙耀阳 91 4 43.5 1 66 3
2250269 司徒成傑 79 6 85.5 3 62 2
2252558 徐乙巽 86 3 63 3 77.5 4
1951475 赵伯威 49.5 3 86 6 93.5 3
2153879 项卢羽成 81.5 2 64.5 3 87 4
2253636 张天阳 73 3 62 2 85 5

*/