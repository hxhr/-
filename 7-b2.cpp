/* 2250748 王渝鹮 信02 */
#include <iostream>
#include <iomanip>
using namespace std;


struct KFC {
	char num;
	char name[30];
	double price;
};


struct SPECIAL {
	char zimu[15];
	char name[30];
	double price;
};



const struct KFC list[] = {
	{'A', "香辣鸡腿堡",			19.5},
	{'B', "劲脆鸡腿堡",			19.5},
	{'C', "新奥尔良烤鸡腿堡",		20.0},
	{'D', "老北京鸡肉卷",			18.5},
	{'E', "黄金SPA鸡排堡(藤椒风味)",	18.0},
	{'F', "经典美式风味嫩牛堡(单层)",	18.0},
	{'G', "吮指原味鸡(1块)",		12.5},
	{'H', "黄金脆皮鸡",			13.5},
	{'I', "新奥尔良烤翅(2块)",		13.5},
	{'J', "劲爆鸡米花",			12.0},
	{'K', "香辣鸡翅(2块)",			12.5},
	{'L', "热辣香骨鸡(3块)",		12.5},
	{'M', "汁汁厚做培根三层和牛堡",	55.0},
	{'N', "薯条(小)",				9.0},
	{'O', "薯条(中)",				12.5},
	{'P', "薯条(大)",				14.5},
	{'Q', "芙蓉蔬荟汤",			9.0},
	{'R', "原味花筒冰激凌",			6.0},
	{'S', "醇香土豆泥",			7.5},
	{'T', "黄金鸡块",				12.5},
	{'U', "葡式蛋挞",				8.0},
	{'V', "百事可乐(小)",			8.5},
	{'W', "百事可乐(中)",			10.0},
	{'X', "百事可乐(大)",			12.0},
	{'Y', "九珍果汁",				13.0},
	{'Z', "雪顶咖啡",				14.5},
	{'\0', NULL,				0}
};

const struct SPECIAL special[] = {
	{"aow", "ok三件套(香辣鸡腿堡)",		31}, //如果有需要，放开此项，注释掉下一行的“cow”优惠，观察优惠菜单是否发生了变化
		//{"COW", "OK三件套(新奥尔良烤鸡腿堡)",	33.5}, //如果有需要，放开此项，注释掉上一行的“AOW”优惠，观察优惠菜单是否发生了变化
		{"HHHHHKKKSUWWW", "超爆全家桶(脆皮鸡)",	101},
		{"APUY", "人气明星配四件套(8折)",		44},
		{"GG","吮指原味鸡(2块)",			21},
		{NULL, NULL, 0}
};
//将统计单品树木的数组重置
void clear(int shuzu[26])
{
	for (int i = 0; i < 26; i++) {
		shuzu[i] = 0;
	}
}


//根据shuzu树木打印点餐
void diancan(int shuzu[26])
{
	for (int i = 0; i < 26; i++) {
		if (shuzu[i] != 0) {
			cout << list[i].name;
			if (shuzu[i] != 1) {
				cout<< "*" << shuzu[i];
			}
			cout << "+";
		}
	}
	putchar('\b');

	cout <<" "<< endl;
}



int main()
{

	while (1) {
		system("cls");
		system("mode con cols=150 lines=60");
		int shuzu[26] = { 0 };
		char shuru[10000] = { 0 };
		cout << "=========================================================================" << endl;
		cout << "                             KFC 2023春季菜单                            " << endl;
		cout << "=========================================================================" << endl;

		for (int i = 0; i < 26; i++) {
			cout << " " << list[i].num << " " << std::left << setw(25) << list[i].name;
			cout << std::left << setw(4) << list[i].price;
			if (i % 2 == 0) {
				cout << "   |  ";
			}
			else {
				cout << endl;
			}
		}
		cout << "【优惠信息】：" << endl;
		for (int i = 0; i < 4; i++) {
			clear(shuzu);
			cout << special[i].name << "=";
			/*for (int j = 0; special[i].zimu[j] != '\0'; j++) {
				cout << list[special[i].zimu[j] - 'A'].name;
				if (special[i].zimu[j+1] != '\0') {
					cout << "+";
				}
			}*/
			for (int j = 0; special[i].zimu[j] != '\0'; j++) {
				shuzu[toupper(special[i].zimu[j]) - 'A']++;
			}
			for (int m = 0; m < 26; m++) {
				if (shuzu[m] != 0) {
					cout << list[m].name;
					if (shuzu[m] != 1) {
						cout << "*" << shuzu[m];
					}
					cout << "+";
				}

			}
			putchar('\b');


			cout << "=" << special[i].price << endl;
		}

		cout << "【输入规则说明】：" << endl;
		cout << "ANV=香辣鸡腿堡+薯条(小)+百事可乐(小) / akaak=香辣鸡腿堡*3+香辣鸡翅*2" << endl;
		cout << "字母不分大小写，不限顺序，单独输入0则退出程序" << endl;
		cout << endl;
		int loop = 1;
		while (loop) {
			loop = 0;
			cout << "请点单：";
			cin.getline(shuru, 10000, '\n');
			if (shuru[0] == '0') {
				return 0;
			}
			clear(shuzu);
			for (int i = 0; shuru[i] != 0; i++) {
				if (toupper(shuru[i]) >= 'A' && toupper(shuru[i]) <= 'Z') {
					shuzu[toupper(shuru[i]) - 'A']++;
				}
				else {
					cout << "输入错误，按任意键继续.";
					while (getchar() != '\n');
					while (getchar() != '\n');
					loop = 1;
					break;
				}
			}
		}


		cout << "您的点餐=";
		diancan(shuzu);


		double sum = 0;
		//算优惠套餐
		for (int i = 0; special[i].price != 0; i++) {
			for (int j = 0; special[i].zimu[j] != '\0'; j++) {
				shuzu[toupper(special[i].zimu[j]) - 'A']--;
			}
			//检查shuzu每一项是否大衣等于0
			int right = 1;
			for (int m = 0; m < 26; m++) {
				if (shuzu[m] < 0) {
					right = 0;
					break;
				}
			}
			if (right) {
				sum += special[i].price;
				i--;
			}
			else {//把剪掉的还回来
				for (int j = 0; special[i].zimu[j] != '\0'; j++) {
					shuzu[toupper(special[i].zimu[j]) - 'A']++;
				}
			}
		}

		for (int i = 0; i < 26; i++) {
			if (shuzu[i] != 0) {
				sum += list[i].price * shuzu[i];
			}
		}
		cout << "共计：" << sum << "元" << endl;
		cout << "点单完成，请按任意键继续";
		while (getchar() != '\n');
	}

	return 0;
}