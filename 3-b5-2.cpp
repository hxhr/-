/*2250748 信02 王渝鹮*/
#include <iostream>
using namespace std;


int main()
{
    cout << "请输入年，月，日" << endl;
    int a, b, c;
    cin >> a >> b >> c;
    if (b >= 1 && b <= 12) {
        bool leap;
        if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) {
            leap = true;
        }
        else {
            leap = false;
        }
        switch (b) {
            case 1:
                if (c >= 1 && c <= 31) {
                    cout << a << '-' << b << '-' << c << "是" << a << "年" << "的第" << c << "天" << endl;
                }
                else {
                    cout << "输入错误-日与月的关系非法" << endl;
                }
                break;

            case 2:
                if (leap) {
                    if (c >= 1 && c <= 29) {
                        cout << a << '-' << b << '-' << c << "是" << a << "年" << "的第" << c + 31 << "天" << endl;
                    }
                    else {
                        cout << "输入错误-日与月的关系非法" << endl;
                    }
                }
                else {
                    if (c >= 1 && c <= 28) {
                        cout << a << '-' << b << '-' << c << "是" << a << "年" << "的第" << c + 31 << "天" << endl;
                    }
                    else {
                        cout << "输入错误-日与月的关系非法" << endl;
                    }
                }
                break;


            case 3:
                if (c >= 1 && c <= 31) {
                    cout << a << '-' << b << '-' << c << "是" << a << "年" << "的第" << c + 31 + 28 + leap << "天" << endl;
                }
                else {
                    cout << "输入错误-日与月的关系非法" << endl;
                }
                break;

            case 4:
                if (c >= 1 && c <= 30) {
                    cout << a << '-' << b << '-' << c << "是" << a << "年" << "的第" << c + 31 * 2 + 28 + leap << "天" << endl;
                }
                else {
                    cout << "输入错误-日与月的关系非法" << endl;
                }
                break;
            case 5:
                if (c >= 1 && c <= 31) {
                    cout << a << '-' << b << '-' << c << "是" << a << "年" << "的第" << c + 31 * 2 + 30 + 28 + leap << "天" << endl;
                }
                else {
                    cout << "输入错误-日与月的关系非法" << endl;
                }
                break;
            case 6:
                if (c >= 1 && c <= 30) {
                    cout << a << '-' << b << '-' << c << "是" << a << "年" << "的第" << c + 31 * 3 + 30 + 28 + leap << "天" << endl;
                }
                else {
                    cout << "输入错误-日与月的关系非法" << endl;
                }
                break;


            case 7:
                if (c >= 1 && c <= 31) {
                    cout << a << '-' << b << '-' << c << "是" << a << "年" << "的第" << c + 31 * 3 + 30 * 2 + 28 + leap << "天" << endl;
                }
                else {
                    cout << "输入错误-日与月的关系非法" << endl;
                }
                break;
            case 8:
                if (c >= 1 && c <= 31) {
                    cout << a << '-' << b << '-' << c << "是" << a << "年" << "的第" << c + 31 * 4 + 30 * 2 + 28 + leap << "天" << endl;
                }
                else {
                    cout << "输入错误-日与月的关系非法" << endl;
                }
                break;
            case 9:
                if (c >= 1 && c <= 30) {
                    cout << a << '-' << b << '-' << c << "是" << a << "年" << "的第" << c + 31 * 5 + 30 * 2 + 28 + leap << "天" << endl;
                }
                else {
                    cout << "输入错误-日与月的关系非法" << endl;
                }
                break;
            case 10:
                if (c >= 1 && c <= 31) {
                    cout << a << '-' << b << '-' << c << "是" << a << "年" << "的第" << c + 31 * 5 + 30 * 3 + 28 + leap << "天" << endl;
                }
                else {
                    cout << "输入错误-日与月的关系非法" << endl;
                }
                break;
            case 11:
                if (c >= 1 && c <= 30) {
                    cout << a << '-' << b << '-' << c << "是" << a << "年" << "的第" << c + 31 * 6 + 30 * 3 + 28 + leap << "天" << endl;
                }
                else {
                    cout << "输入错误-日与月的关系非法" << endl;
                }
                break;

            case 12:
                if (c >= 1 && c <= 31) {
                    cout << a << '-' << b << '-' << c << "是" << a << "年" << "的第" << c + 31 * 6 + 30 * 4 + 28 + leap << "天" << endl;
                }
                else {
                    cout << "输入错误-日与月的关系非法" << endl;
                }
                break;
        }
    }
    else {
        cout << "输入错误-月份不正确" << endl;
    }
    return 0;
}
