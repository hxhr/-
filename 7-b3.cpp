/* 2250748 �����q ��02 */
#include <iostream>
#include<limits>
using namespace std;

unsigned int max(unsigned int a, unsigned int b)
{
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}

unsigned int max(unsigned int a, unsigned int b, unsigned int c)
{
	unsigned int t = max(a, b);
	if (t > c) {
		return t;
	}
	else {
		return c;
	}
}

unsigned int max(unsigned int a, unsigned int b, unsigned int c, unsigned int d)
{
	unsigned int t = max(a, b, c);
	if (t > d) {
		return t;
	}
	else {
		return d;
	}
}


int main()
{
	int fin = 0;
	while (1) {
		cout << "���������num��num����������" << endl;
		int num;
		unsigned int a, b, c, d;
		cin >> num;
		if (cin.good()) {
			if (num >= 2 && num <= 4) {

				switch (num) {
					case 2:
						cin >> a >> b;
						if (cin.good() && a != 0 && b != 0) {
							fin = max(a, b);
						}
						else {
							cin.clear();
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
							continue;
						}
						break;
					case 3:
						cin >> a >> b >> c;
						if (cin.good() && a != 0 && b != 0 && c != 0) {
							fin = max(a, b, c);
						}
						else {
							cin.clear();
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
							continue;
						}
						break;
					case 4:
						cin >> a >> b >> c >> d;
						if (cin.good() && a != 0 && b != 0 && c != 0 && d != 0) {
							fin = max(a, b, c, d);
						}
						else {
							cin.clear();
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
							continue;
						}
						break;
				}
				cout << "max=" << fin << endl;
				break;
			}
			else {
				cout << "�����������" << endl;
				return 0;
			}
		}
		else {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	}


	return 0;
}