/* 2250748 王渝鹮 信02 */
#include <iostream>
#include <iomanip>
#include<limits>
using namespace std;
//注意c++中数组命名为array会报错
int top[3] = { 0 };
int to[3][10] = { {0},{0},{0} };
int step = 0;

void hanoi(int n, char src, char tmp, char dst)
{

    if (n == 1) {

        step++;


        cout << "第" << setiosflags(ios::right) << setw(4) << step << " 步(" << setiosflags(ios::right) << setw(2) << 1 << "): " << src << "-->" << dst << " ";
        if (src == 'A') {

            to[0][--top[0]] = 0;
        }
        else if (src == 'B') {

            to[1][--top[1]] = 0;
        }
        else if (src == 'C') {

            to[2][--top[2]] = 0;
        }
        if (dst == 'A') {

            to[0][top[0]++] = 1;
        }
        else if (dst == 'B') {
            to[1][top[1]++] = 1;
        }
        else if (dst == 'C') {
            to[2][top[2]++] = 1;
        }


        cout << "A:";
        for (int i = 0; i < 10; i++) {

            if (to[0][i] == 0) {


                cout << "  ";
            }
            else {
                cout << setiosflags(ios::right) << setw(2) << to[0][i];

            }
        }
        cout << " ";
        cout << "B:";
        for (int i = 0; i < 10; i++) {
            if (to[1][i] == 0) {
                cout << "  ";
            }
            else {
                cout << setiosflags(ios::right) << setw(2) << to[1][i];
            }
        }
        cout << " ";
        cout << "C:";
        for (int i = 0; i < 10; i++) {
            if (to[2][i] == 0) {
                cout << "  ";
            }
            else {
                cout << setiosflags(ios::right) << setw(2) << to[2][i];
            }
        }

        cout << endl;
    }
    else {
        hanoi(n - 1, src, dst, tmp);
        step++;
        cout << "第" << setiosflags(ios::right) << setw(4) << step << " 步(" << setiosflags(ios::right) << setw(2) << n << "): " << src << "-->" << dst << " ";
        if (src == 'A') {

            to[0][--top[0]] = 0;
        }
        else if (src == 'B') {

            to[1][--top[1]] = 0;
        }
        else if (src == 'C') {

            to[2][--top[2]] = 0;
        }
        if (dst == 'A') {

            to[0][top[0]++] = n;
        }
        else if (dst == 'B') {
            to[1][top[1]++] = n;
        }
        else if (dst == 'C') {
            to[2][top[2]++] = n;
        }
        cout << "A:";
        for (int i = 0; i < 10; i++) {

            if (to[0][i] == 0) {


                cout << "  ";
            }
            else {
                cout << setiosflags(ios::right) << setw(2) << to[0][i];

            }
        }
        cout << " ";
        cout << "B:";
        for (int i = 0; i < 10; i++) {
            if (to[1][i] == 0) {
                cout << "  ";
            }
            else {
                cout << setiosflags(ios::right) << setw(2) << to[1][i];
            }
        }
        cout << " ";
        cout << "C:";
        for (int i = 0; i < 10; i++) {
            if (to[2][i] == 0) {
                cout << "  ";
            }
            else {
                cout << setiosflags(ios::right) << setw(2) << to[2][i];
            }
        }

        cout << endl;

        hanoi(n - 1, tmp, src, dst);
    }

}


int main()
{
    int n;
    char src;
    char tmp = 'b';
    char dst;

    while (1) {
        cout << "请输入汉诺塔的层数(1-10)" << endl;
        cin >> n;
        if (n >= 1 && n <= 16) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            break;

        }
        else {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }


    }
    while (1) {
        cout << "请输入起始柱(A-C)" << endl;
        cin >> src;
        if (src == 'a' || src == 'A' || src == 'b' || src == 'B' || src == 'c' || src == 'C') {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            break;

        }
        else {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }


    }
    while (1) {
        cout << "请输入目标柱(A-C)" << endl;
        cin >> dst;
        if ((dst == 'a' || dst == 'A' || dst == 'b' || dst == 'B' || dst == 'c' || dst == 'C') && dst != src && dst != (src + 32) && dst != (src - 32)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            break;

        }
        else {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            if (dst == src || dst == (src + 32) || dst == (src - 32)) {
                cout << std::uppercase << "目标柱(" << src << ")不能与起始柱(" << dst << ")相同" << endl;
            }
        }


    }
    if (tmp == src || tmp == (src + 32) || tmp == dst || tmp == (dst + 32)) {
        tmp = 'a';
    }
    if (tmp == src || tmp == (src + 32) || tmp == dst || tmp == (dst + 32)) {
        tmp = 'c';
    }
    if (int(tmp) > 96) {
        tmp = tmp - 32;
    }
    if (int(src) > 96) {
        src = src - 32;
    }
    if (int(dst) > 96) {
        dst = dst - 32;
    }
    //switch别忘了加break
    switch (src) {
        case 'A':
            for (int i = n; i >= 1; i--) {
                to[0][top[0]++] = i;
            }
            break;
        case 'B':
            for (int i = n; i >= 1; i--) {

                to[1][top[1]++] = i;
            }
            break;
        case 'C':
            for (int i = n; i >= 1; i--) {
                to[2][top[2]++] = i;
            }
            break;
    }

    //demo中在10时能看出是右对齐而不是空格
    cout << "初始:                ";
    cout << "A:";
    for (int i = 0; i < 10; i++) {

        if (to[0][i] == 0) {


            cout << "  ";
        }
        else {
            cout << setiosflags(ios::right) << setw(2) << to[0][i];

        }
    }
    cout << " ";
    cout << "B:";
    for (int i = 0; i < 10; i++) {
        if (to[1][i] == 0) {
            cout << "  ";
        }
        else {
            cout << setiosflags(ios::right) << setw(2) << to[1][i];
        }
    }
    cout << " ";
    cout << "C:";
    for (int i = 0; i < 10; i++) {
        if (to[2][i] == 0) {
            cout << "  ";
        }
        else {
            cout << setiosflags(ios::right) << setw(2) << to[2][i];
        }
    }

    cout << endl;

    hanoi(n, src, tmp, dst);
    return 0;

}