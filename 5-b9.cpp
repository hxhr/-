/* 2250748 王渝鹮 信02 */
#include <iostream>
#include <iomanip>
#include<limits>
using namespace std;

int main()
{
	int square[9][9] = { 0 };
	cout << "请输入9*9的矩阵，值为1-9之间" << endl;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			while (1) {

				cin >> square[i][j];
				if (cin.good()) {
					if (square[i][j] >= 1 && square[i][j] <= 9)
						break;
					else {
						cout << "请重新输入第" << i + 1 << "行" << j + 1 << "列(行列均从1开始计数)的值" << endl;
						continue;
					}
				}
				else {
					cout << "请重新输入第" << i + 1 << "行" << j + 1 << "列(行列均从1开始计数)的值" << endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
				//这儿忘记加break
				break;

			}
		}
	}
	//用来测试数组读取是否正确
	/*for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cout << square[i][j] << " ";
		}
	}*/
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			for (int k = j + 1; k < 9; k++) {
				if (square[i][j] == square[i][k]) {
					cout << "不是数独的解" << endl;
					return 0;
				}
			}
		}
	}
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			for (int k = j + 1; k < 9; k++) {
				if (square[j][i] == square[k][i]) {
					cout << "不是数独的解" << endl;
					return 0;
				}
			}
		}
	}
	int small[9] = { 0 };
	int point = 0;
	//思考怎么检查小方块用的时间长
	for (int i = 0; i < 9; i = i + 3) {
		for (int j = 0; j < 9; j = j + 3) {
			point = 0;//point在此重置
			for (int a = 0; a < 3; a++) {
				for (int b = 0; b < 3; b++) {
					/*small[(a + 1) * (b + 1) - 1] = square[i + a][j + b];*/
					//一开始这么设计，不对
					small[point] = square[i + a][j + b];
					point++;
				}
			}

		}
	}
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (i == j) {//特殊情况跳过比较
				continue;
			}
			else if (small[i] == small[j]) {
				cout << "不是数独的解" << endl;
			}
		}
	}
	cout << "是数独的解" << endl;
}
