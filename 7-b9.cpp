/* 2250748 王渝鹮 信02 */

/* 允许按需加入系统的宏定义、需要的头文件等 */
#include <iostream>
#include "read_stulist.h"
#include <iomanip>
using namespace std;




#define MAX_FILENAME_LEN		512	//定义文件名的最大长度

/* stu_metge 类存放每个学生的信息，包括学号、姓名、其它需要的私有信息，已有内容不准动，可加入符合限制要求的新内容 */
class stu_merge {
private:
	int  stu_no;					//学号
	char stu_name[MAX_NAME_LEN];  //姓名
	char round_1;
	char round_2;

	/* 允许按需加入private数据成员、成员函数以及其它需要的内容 */
	friend class stu_list;

public:
	//本类不允许定义任何的公有数据成员及成员函数
};




/* stu_list 类整个选课信息，已有内容不准动，可加入符合限制要求的新内容 */
class stu_list {
private:
	student list_round_1[MAX_STU_NUM];	//第一轮选课的学生名单（不排序、不去重）
	int list_num_1;						//第一轮选课的学生人数

	student list_round_2[MAX_STU_NUM];	//第二轮选课的学生名单（不排序、不去重）
	int list_num_2;						//第二轮选课的学生人数

	stu_merge list_merge[MAX_STU_NUM];	//合并后的学生名单（去重，按升序排列）
	int list_merge_num;					//合并后的学生人数（目前不打印，但可用于内部管理，如果不需要，也不要删除）

	/* 允许按需加入private数据成员和成员函数
	   注意，不允许加入array / set / map / vector等STL容器 */

public:
	stu_list();										//构造函数，按需完成初始化功能，如果不需要，保留空函数即可
	int read(const char* filename, const int round);	//从文件中读入选课信息，round为1/2，表示选课轮次
	int print(const char* prompt = NULL);				//打印最终的选课名单

	/* 允许按需加入其它public成员函数（提示：合并、去重、排序等）
	   不允许定义公有的数据成员
	   不允许在成员函数中使用array / set / map / vector等STL容器 */
	void hebing();
	void quchong();
	void paixu();
};

bool cunzai(int shuzu[], int person, int zhi)
{
	for (int j = 0; j < person; j++) {
		if (zhi == shuzu[j]) {
			return 1;
		}
	}
	return 0;
}
/* --- 下面可以给出stu_merge/stu_list两个类的成员函数的体外实现 --- */
void stu_list::paixu()
{
	for (int m = 0; m < this->list_merge_num; m++) {
		for (int i = this->list_merge_num - 1; i > m; i--) {
			if (this->list_merge[i].stu_no < this->list_merge[i - 1].stu_no) {
				int t = this->list_merge[i].stu_no;
				this->list_merge[i].stu_no = this->list_merge[i - 1].stu_no;
				this->list_merge[i - 1].stu_no = t;

				char name[MAX_NAME_LEN];
				for (int j = 0; j < MAX_NAME_LEN; j++) {
					name[j] = this->list_merge[i].stu_name[j];
				}
				for (int j = 0; j < MAX_NAME_LEN; j++) {
					this->list_merge[i].stu_name[j] = this->list_merge[i - 1].stu_name[j];
				}
				for (int j = 0; j < MAX_NAME_LEN; j++) {
					this->list_merge[i - 1].stu_name[j] = name[j];
				}

				char t1 = this->list_merge[i].round_1;
				this->list_merge[i].round_1 = this->list_merge[i-1].round_1;
				this->list_merge[i - 1].round_1 = t1;

				char t2 = this->list_merge[i].round_2;
				this->list_merge[i].round_2 = this->list_merge[i - 1].round_2;
				this->list_merge[i - 1].round_2 = t2;


			}
		}
	}
}


void stu_list::quchong()
{
	int shuzu[2000] = { 0 };
	int person = 0;
	for (int i = 0; i < this->list_merge_num; i++) {
		if (cunzai(shuzu, person, this->list_merge[i].stu_no) == 0) {
			shuzu[person] = this->list_merge[i].stu_no;
			this->list_merge[person].stu_no = this->list_merge[i].stu_no;
			for (int j = 0; j < MAX_NAME_LEN; j++) {
				this->list_merge[person].stu_name[j] = this->list_merge[i].stu_name[j];
			}
			this->list_merge[person].round_1 = list_merge[i].round_1;
			this->list_merge[person].round_2 = list_merge[i].round_2;
			person++;
		}
		else {
			for (int n = 0; n < i; n++) {
				if (this->list_merge[n].stu_no == this->list_merge[i].stu_no) {
					this->list_merge[n].round_1 = 'Y';
					this->list_merge[n].round_2 = 'Y';
				}
			}
		}
	}
	this->list_merge_num = person;

}

void stu_list::hebing()
{
	for (int i = 0; i < this->list_num_1; i++) {
		this->list_merge[i].stu_no = this->list_round_1[i].no;
		for (int j = 0; j < MAX_NAME_LEN; j++) {
			this->list_merge[i].stu_name[j] = this->list_round_1[i].name[j];
		}
		this->list_merge[i].round_1 = 'Y';
		this->list_merge[i].round_2 = 'N';
	}
	for (int i = this->list_num_1; i < this->list_num_2+ this->list_num_1; i++) {
		this->list_merge[i].stu_no = this->list_round_2[i- this->list_num_1].no;
		for (int j = 0; j < MAX_NAME_LEN; j++) {
			this->list_merge[i].stu_name[j] = this->list_round_2[i- this->list_num_1].name[j];
		}
		this->list_merge[i].round_1 = 'N';
		this->list_merge[i].round_2 = 'Y';
	}

	this->list_merge_num = this->list_num_1 + this->list_num_2;


}

/***************************************************************************
  函数名称：
  功    能：从文件中读入选课信息，round为1/2，表示选课轮次
  输入参数：
  返 回 值：
  说    明：构造函数，按需完成初始化功能，如果不需要，保留空函数即可
***************************************************************************/
stu_list::stu_list()
{
}

/***************************************************************************
  函数名称：
  功    能：演示静态链接库的使用，本函数中调用静态链接库中的预置函数
  输入参数：
  返 回 值：
  说    明：本函数不需要修改
***************************************************************************/
int stu_list::read(const char* filename, const int round)
{
	int ret = 0;
	/* 读取第1/2轮的选课名单并打印 */
	switch (round) {
		case 1:
			this->list_num_1 = read_stulist(filename, this->list_round_1, MAX_STU_NUM);
			if (this->list_num_1 > 0)
				print_stulist("第一轮选课名单：", this->list_round_1, this->list_num_1);
			else
				ret = -1;
			break;
		case 2:
			this->list_num_2 = read_stulist(filename, this->list_round_2, MAX_STU_NUM);
			if (this->list_num_2 > 0)
				print_stulist("第二轮选课名单：", this->list_round_2, this->list_num_2);
			else
				ret = -1;
			break;
		default:
			ret = -1;
			break;
	}

	return ret;
}


/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：打印最终的选课名单
***************************************************************************/
int stu_list::print(const char* prompt)
{
	cout << prompt<<endl;
	cout << "============================================================" << endl;
	cout << "序号 学号     姓名                            第一轮 第二轮" << endl;
	cout << "============================================================" << endl;
	for (int i = 0; i < this->list_merge_num; i++) {
		cout << setiosflags(ios::left)<< setw(5) << i+1 << this->list_merge[i].stu_no << "  " << setw(32) << this->list_merge[i].stu_name << this->list_merge[i].round_1 << "      " << this->list_merge[i].round_2 << endl;
	}
	cout << "============================================================" << endl;

	return 0;
}




/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int main(int argc, char** argv)
{
	char file1[MAX_FILENAME_LEN], file2[MAX_FILENAME_LEN];

	cout << "请输入前一轮选课的数据文件 : ";
	gets_s(file1); //cin不能读有空格的文件

	cout << "请输入后一轮选课的数据文件 : ";
	gets_s(file2);

	stu_list list;

	/* 读入数据 */
	if (list.read(file1, 1) < 0)
		return -1;
	if (list.read(file2, 2) < 0)
		return -1;

	/* 处理数据 */
	list.hebing();
	list.quchong();
	list.paixu();

	/* 打印 */
	list.print("最终选课名单");

	return 0;
}
