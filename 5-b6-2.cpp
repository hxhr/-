/* 2250748 �����q ��02 */
#include <iostream>
#include <iomanip>
#include<limits>
using namespace std;
//ע��c++����������Ϊarray�ᱨ��
int top[3] = { 0 };
int to[3][10] = { {0},{0},{0} };
int step = 0;

void hanoi(int n, char src, char tmp, char dst)
{

    if (n == 1) {

        step++;


        cout << "��" << setiosflags(ios::right) << setw(4) << step << " ��(" << setiosflags(ios::right) << setw(2) << 1 << "): " << src << "-->" << dst << " ";
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
        cout << "��" << setiosflags(ios::right) << setw(4) << step << " ��(" << setiosflags(ios::right) << setw(2) << n << "): " << src << "-->" << dst << " ";
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
        cout << "�����뺺ŵ���Ĳ���(1-10)" << endl;
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
        cout << "��������ʼ��(A-C)" << endl;
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
        cout << "������Ŀ����(A-C)" << endl;
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
                cout << std::uppercase << "Ŀ����(" << src << ")��������ʼ��(" << dst << ")��ͬ" << endl;
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
    //switch�����˼�break
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

    //demo����10ʱ�ܿ������Ҷ�������ǿո�
    cout << "��ʼ:                ";
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