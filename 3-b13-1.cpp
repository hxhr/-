/* 信02 2250748 王渝鹮*/
#include <iostream>
#include<iomanip>
#include<limits>
using namespace std;

int main()
{

    int a, b;
    bool leap;
    while (1) {
        cout << "请输入年份(2000-2030)和月份(1-12) : ";

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
                cout << "输入非法，请重新输入" << endl;

            }
        }
        else {
            cout << "输入非法，请重新输入" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');


        }


    }

    int c;

    while (1) {
        cout << "请输入" << a << "年" << b << "月1日的星期(0-6表示星期日-星期六) : ";
        cin >> c;
        if (cin.good()) {
            if (c >= 0 && c <= 6)
                break;
            else if (c < 0 || c>6) {
                cout << "输入非法，请重新输入" << endl;
                continue;
            }
        }
        else {
            cout << "输入非法，请重新输入" << endl;
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

    cout << a << "年" << b << "月的月历为:" << endl;
    cout << "星期日  星期一  星期二  星期三  星期四  星期五  星期六" << endl;
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