/* 2250748 王渝鹮 信02 */
#include <iostream>
#include<limits>
using namespace std;

int main()
{
	int light[100] = { 0 };
	for (int i = 0; i < 100; i++) {
		light[i] = -1;
	}
	//i是灯，j是人;注意人编号永远比数组小1
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if ((i + 1) % (j + 1) == 0) {
				light[i] = light[i] * (-1);
			}
		}
	}

	int count = 0;//用处是记录第一个数据输出，好进行不出空格的操作
	for (int i = 0; i < 100; i++) {
		if (light[i] == 1) {
			count++;
			if (count == 1) {
				cout << i + 1;
			}
			else {
				cout << " " << i + 1;
			}
		}
	}
	cout << endl;
	return 0;

}