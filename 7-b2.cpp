/* 2250748 �����q ��02 */
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
	{'A', "�������ȱ�",			19.5},
	{'B', "���༦�ȱ�",			19.5},
	{'C', "�°¶��������ȱ�",		20.0},
	{'D', "�ϱ��������",			18.5},
	{'E', "�ƽ�SPA���ű�(�ٽ���ζ)",	18.0},
	{'F', "������ʽ��ζ��ţ��(����)",	18.0},
	{'G', "˱ָԭζ��(1��)",		12.5},
	{'H', "�ƽ��Ƥ��",			13.5},
	{'I', "�°¶�������(2��)",		13.5},
	{'J', "�������׻�",			12.0},
	{'K', "��������(2��)",			12.5},
	{'L', "������Ǽ�(3��)",		12.5},
	{'M', "֭֭������������ţ��",	55.0},
	{'N', "����(С)",				9.0},
	{'O', "����(��)",				12.5},
	{'P', "����(��)",				14.5},
	{'Q', "ܽ��������",			9.0},
	{'R', "ԭζ��Ͳ������",			6.0},
	{'S', "����������",			7.5},
	{'T', "�ƽ𼦿�",				12.5},
	{'U', "��ʽ��̢",				8.0},
	{'V', "���¿���(С)",			8.5},
	{'W', "���¿���(��)",			10.0},
	{'X', "���¿���(��)",			12.0},
	{'Y', "�����֭",				13.0},
	{'Z', "ѩ������",				14.5},
	{'\0', NULL,				0}
};

const struct SPECIAL special[] = {
	{"aow", "ok������(�������ȱ�)",		31}, //�������Ҫ���ſ����ע�͵���һ�еġ�cow���Żݣ��۲��Żݲ˵��Ƿ����˱仯
		//{"COW", "OK������(�°¶��������ȱ�)",	33.5}, //�������Ҫ���ſ����ע�͵���һ�еġ�AOW���Żݣ��۲��Żݲ˵��Ƿ����˱仯
		{"HHHHHKKKSUWWW", "����ȫ��Ͱ(��Ƥ��)",	101},
		{"APUY", "�����������ļ���(8��)",		44},
		{"GG","˱ָԭζ��(2��)",			21},
		{NULL, NULL, 0}
};
//��ͳ�Ƶ�Ʒ��ľ����������
void clear(int shuzu[26])
{
	for (int i = 0; i < 26; i++) {
		shuzu[i] = 0;
	}
}


//����shuzu��ľ��ӡ���
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
		cout << "                             KFC 2023�����˵�                            " << endl;
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
		cout << "���Ż���Ϣ����" << endl;
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

		cout << "���������˵������" << endl;
		cout << "ANV=�������ȱ�+����(С)+���¿���(С) / akaak=�������ȱ�*3+��������*2" << endl;
		cout << "��ĸ���ִ�Сд������˳�򣬵�������0���˳�����" << endl;
		cout << endl;
		int loop = 1;
		while (loop) {
			loop = 0;
			cout << "��㵥��";
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
					cout << "������󣬰����������.";
					while (getchar() != '\n');
					while (getchar() != '\n');
					loop = 1;
					break;
				}
			}
		}


		cout << "���ĵ��=";
		diancan(shuzu);


		double sum = 0;
		//���Ż��ײ�
		for (int i = 0; special[i].price != 0; i++) {
			for (int j = 0; special[i].zimu[j] != '\0'; j++) {
				shuzu[toupper(special[i].zimu[j]) - 'A']--;
			}
			//���shuzuÿһ���Ƿ���µ���0
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
			else {//�Ѽ����Ļ�����
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
		cout << "���ƣ�" << sum << "Ԫ" << endl;
		cout << "�㵥��ɣ��밴���������";
		while (getchar() != '\n');
	}

	return 0;
}