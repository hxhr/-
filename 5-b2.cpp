/* 2250748 �����q ��02 */
#include <iostream>
#include<limits>
using namespace std;

int main()
{
	int light[100] = { 0 };
	for (int i = 0; i < 100; i++) {
		light[i] = -1;
	}
	//i�ǵƣ�j����;ע���˱����Զ������С1
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if ((i + 1) % (j + 1) == 0) {
				light[i] = light[i] * (-1);
			}
		}
	}

	int count = 0;//�ô��Ǽ�¼��һ������������ý��в����ո�Ĳ���
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