/* 2250748 王渝鹮 信02 */
#include <iostream>
#include<limits>
using namespace std;



int main()
{
	int a = 0;
	cout << "请输入任意个正整数（升序，最多20个），0或负数结束输入" << endl;
	int array[21] = { 0 };
	for (int i = 0; i < 20; i++) {
		cin >> a;
		if (a <= 0) {
			break;
		}
		else {
			array[i] = a;
		}
	}
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	int point = 0;//记录存储终止的位置
	if (array[0] == 0) {
		cout << "无有效输入" << endl;
		return 0;
	}
	else {
		cout << "原数组为：" << endl;
		for (int j = 0; j < 20; j++) {
			cout << array[j] << " ";
			//这个if条件后者不容易想到
			if (array[j + 1] <= 0 || j == 19) {
				point = j;
				break;
			}
		}
		cout << endl;
	}
	cout << "请输入要插入的正整数" << endl;
	int x;
	cin >> x;
	array[point + 1] = x;
	int t = 0;
	//接下来的循环不应该从i=0开始，因为新数据在末尾，所以循环应该从后往前
	for (int k = point + 1; k > 0; k--) {
		if (array[k - 1] > array[k]) {
			t = array[k];
			array[k] = array[k - 1];
			array[k - 1] = t;
		}
	}
	cout << "插入后的数组为：" << endl;
	//新数组21
	for (int j = 0; j < 21; j++) {
		cout << array[j] << " ";
		if (array[j + 1] <= 0) {
			break;
		}
	}
	cout << endl;
	return 0;
}