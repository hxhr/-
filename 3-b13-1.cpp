/* ��02 2250748 �����q*/
#include <iostream>
#include<iomanip>
#include<limits>
using namespace std;

int main()
{

    int a, b;
    bool leap;
    while (1) {
        cout << "���������(2000-2030)���·�(1-12) : ";

        cin >> a >> b;
        if (cin.good()) {
            if (b >= 1 && b <= 12 && a >= 2000 && a <= 2030) {

                if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) {
                    leap = true;
                }
                else {
                    leap = false;
                }
                break;
            }
            else {
                cout << "����Ƿ�������������" << endl;

            }
        }
        else {
            cout << "����Ƿ�������������" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');


        }


    }

    int c;

    while (1) {
        cout << "������" << a << "��" << b << "��1�յ�����(0-6��ʾ������-������) : ";
        cin >> c;
        if (cin.good()) {
            if (c >= 0 && c <= 6)
                break;
            else if (c < 0 || c>6) {
                cout << "����Ƿ�������������" << endl;
                continue;
            }
        }
        else {
            cout << "����Ƿ�������������" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }


    }
    int m = 0;
    if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12) {
        m = 31;
    }
    else if (b == 2) {
        if (leap) {
            m = 29;
        }
        else {
            m = 28;
        }
    }
    else {
        m = 30;
    }
    cout << endl;

    cout << a << "��" << b << "�µ�����Ϊ:" << endl;
    cout << "������  ����һ  ���ڶ�  ������  ������  ������  ������" << endl;
    int d = c;
    for (int i = 0; i < 8 * c; i++) {
        cout << " ";
    }
    for (int j = 1; j <= m; d++) {
        cout << setw(4) << j;
        j++;

        cout << "    ";
        if (d == 6) {
            d = -1;
            cout << endl;
        }
    }






    return 0;
}