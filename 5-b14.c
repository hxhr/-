/*2250748 信02 王渝鹮*/
//2251532 申文刚 2253556 卓枭 2252090 王麒懿 2252635 王玥 2253716 欧佳音
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int max(int a, int b)
{
	if (a >= b) {
		return a;
	}
	else {
		return b;
	}

}
int min(int a, int b)
{
	if (a >= b) {
		return b;
	}
	else {
		return a;
	}

}
int main()
{
	char game[10][26];
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 26; j++) {
			scanf("%c", &game[i][j]);

			if (game[i][j] == '*' || (game[i][j] >= '0' && game[i][j] <= '8')) {
				//输入本身带'0',卡好久
				continue;
			}
			else {
				j--;
			}
		}
	}

	int xinghao = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 26; j++) {
			if (game[i][j] == '*') {
				xinghao++;
			}
		}
	}

	if (xinghao != 50) {
		printf("错误1\n");
		return 0;
	}
	//声明验证数组并且置0
	char yanzheng[10][26];
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 26; j++) {
			yanzheng[i][j] = '0';
		}
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 26; j++) {
			if (game[i][j] == '*') {
				yanzheng[i][j] = '*';
				for (int m = max(i - 1, 0); m <= min(i + 1, 9); m++) {
					for (int n = max(j - 1, 0); n <= min(j + 1, 25); n++) {
						if (m != i || n != j) {
							if (yanzheng[m][n] != '*') {
								yanzheng[m][n]++;
							}
						}
					}
				}
			}
		}
	}



	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 26; j++) {
			if (game[i][j] != yanzheng[i][j]) {
				printf("错误2\n");
				return 0;
			}
		}
	}
	printf("正确\n");
	return 0;
}