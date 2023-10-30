/* 2250748 王渝鹮 信02 */
#include <iostream>
#include<limits>
using namespace std;
int main()
{
	int grade[1000] = { 0 };
	for (int i = 0; i < 1000; i++) {
		grade[i] = -1;
	}

	cout << "请输入成绩（最多1000个），负数结束输入" << endl;
	int x;
	int point = 0;
	//0-i-1
	for (int i = 0; i < 1000; i++) {
		cin >> x;
		if (x < 0) {
			point = i;
			break;
		}
		else {
			grade[i] = x;
		}

	}
	if (grade[0] == -1) {

		cout << "无有效输入" << endl;
		return 0;
	}

	cout << "输入的数组为:" << endl;
	for (int i = 0; i < point; i++) {

		cout << grade[i] << " ";
		if ((i + 1) % 10 == 0) {

			cout << endl;
		}
	}
	if (point % 10 != 0) {
		cout << endl;
	}
	//一层循环是没办法升序或者降序排列的

	for (int i = 0; i < point - 1; i++) {
		for (int j = 0; j < point - (i + 1); j++) {
			if (grade[j] > grade[j + 1]) {
				int t = grade[j];
				grade[j] = grade[j + 1];
				grade[j + 1] = t;
			}
		}
	}
	int person[101] = { 0 };//注意0-100，数组设置是101

	for (int i = 0; i <= 100; i++) {
		for (int j = 0; j < point; j++) {
			if (grade[j] == i) {
				person[i]++;
			}
		}
	}

	cout << "分数与名次的对应关系为:" << endl;
	int count = 1;
	for (int i = 100; i >= 0; i--) {
		if (person[i] != 0) {
			for (int n = 0; n < person[i]; n++) {
				cout << i << " " << count << endl;
			}

			count = count + person[i];
		}
	}
	return 0;
}