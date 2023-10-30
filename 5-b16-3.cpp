/* 信02 2250748 王渝鹮 */
#include<iostream>
#include <string>
using namespace std;

void shuru(string num[],string name[],int grade[])
{
	for (int i = 0; i < 10; i++) {
		cout << "请输入第" << i + 1 << "个人的学号、姓名、成绩" << endl;
		cin >> num[i];
		cin >> name[i];
		cin >> grade[i];

	}
}

void paixu(string num[],string name[],int grade[])
{
	//用到了string的一个库函数
	for (int i = 9; i >= 0; i--) {
		for (int j = 0; j < i; j++) {

			if (stoi(num[j]) > stoi(num[j + 1])) {
				int t1 = grade[j];
				grade[j] = grade[j + 1];
				grade[j + 1] = t1;

				string t2 = num[j];
				num[j] = num[j + 1];
				num[j + 1] = t2;

				string t3 = name[j];
				name[j] = name[j + 1];
				name[j + 1] = t3;
			}
		}
	}
}

void shuchu(string num[],string name[],int grade[])
{
	cout << endl;
	cout << "全部学生(学号升序):" << endl;
	for (int i = 0; i < 10; i++) {

		cout << name[i] << " " << num[i] << " " << grade[i] << endl;

	}
}
int main()
{
	string num[10];
	string name[10];
	int grade[10] = { 0 };
	
	shuru(num, name, grade);
	//冒泡排序不太熟练
	//降序排列
	/*for (int i = 0; i <10; i++) {
		for (int j = 9; j > i; j--) {
			if (grade[j] > grade[j - 1]) {
				int t1 = grade[j];
				grade[j] = grade[j - 1];
				grade[j - 1] = t1;

				string t2 = num[j];
				num[j] = num[j - 1];
				num[j - 1] = t2;

				string t3 = name[j];
				name[j] = name[j - 1];
				name[j - 1] = t3;
			}
		}
	}*/

	//升序排列
	paixu(num, name, grade);
	shuchu(num, name, grade);

	return 0;
}