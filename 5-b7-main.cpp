/* 2250748 �����q ��02 */
#include <iostream>
#include <iomanip>
#include<Windows.h>
#include"5-b7.h"

using namespace std;


int top1 = 0;
int top2 = 0;
int top3 = 0;




int A[10] = { 0 };
int B[10] = { 0 };
int C[10] = { 0 };
int step = 0;

//��ʱ
int yanshi = 0;
//�ڲ�����
int shuzu = 0;

void hanoi(int n, char src, char tmp, char dst,int yanshi,int shuzu)
{

    if (n == 1) {

        step++;
        if (src == 'A') {
            A[--top1] = 0;
        }
        else if (src == 'B') {
            B[--top2] = 0;
        }
        else if (src == 'C') {
            C[--top3] = 0;
        }
        if (dst == 'A') {
            A[top1++] = 1;
        }
        else if (dst == 'B') {
            B[top2++] = 1;
        }
        else if (dst == 'C') {
            C[top3++] = 1;
        }
        if (shuzu) {
            switch (yanshi) {
                case 0:
                    while (getchar() != '\n');
                    break;
                case 1:
                    Sleep(2500);
                    break;
                case 2:
                    Sleep(2000);
                    break;
                case 3:
                    Sleep(1500);
                    break;
                case 4:
                    Sleep(1000);
                    break;
                case 5:
                    Sleep(500);
                    break;
            }
            cct_gotoxy(10, 50);
            cout << "��" << setiosflags(ios::right) << setw(4) << step << " ��(" << setiosflags(ios::right) << setw(2) << 1 << "): " << src << "-->" << dst << " ";
            

            cout << "A:";
            for (int i = 0; i < 10; i++) {

                if (A[i] == 0) {

                    cout << "  ";
                }
                else {


                    cout << setiosflags(ios::right) << setw(2) << A[i];

                }
            }
            cout << " ";
            cout << "B:";
            for (int i = 0; i < 10; i++) {
                if (B[i] == 0) {
                    cout << "  ";
                }
                else {

                    cout << setiosflags(ios::right) << setw(2) << B[i];
                }
            }
            cout << " ";
            cout << "C:";
            for (int i = 0; i < 10; i++) {
                if (C[i] == 0) {
                    cout << "  ";
                }
                else {

                    cout << setiosflags(ios::right) << setw(2) << C[i];
                }
            }

            cout << endl;

        }
        //��ʱЧ��
        switch (yanshi) {
            case 0:
                while (getchar() != '\n');
                break;
            case 1:
                Sleep(2500);
                break;
            case 2:
                Sleep(2000);
                break;
            case 3:
                Sleep(1500);
                break;
            case 4:
                Sleep(1000);
                break;
            case 5:
                Sleep(500);
                break;
        }
        for (int i = 0; i < 10; i++) {
            cct_gotoxy(7, 39 - i);
            if (A[i] != 0) {
                cout << A[i];

            }
            else {
                cout << " ";
            }

        }
        for (int i = 0; i < 10; i++) {
            cct_gotoxy(17, 39 - i);
            if (B[i] != 0) {
                cout << B[i];

            }
            else {
                cout << " ";
            }

        }
        for (int i = 0; i < 10; i++) {
            cct_gotoxy(27, 39 - i);
            if (C[i] != 0) {
                cout << C[i];

            }
            else {
                cout << " ";
            }

        }


    }
    else {
        hanoi(n - 1, src, dst, tmp,yanshi,shuzu);
        step++;
       
        if (src == 'A') {
            A[--top1] = 0;
        }
        else if (src == 'B') {
            B[--top2] = 0;
        }
        else if (src == 'C') {
            C[--top3] = 0;
        }
        if (dst == 'A') {
            A[top1++] = n;
        }
        else if (dst == 'B') {
            B[top2++] = n;
        }
        else if (dst == 'C') {
            C[top3++] = n;
        }

        if (shuzu) {
            switch (yanshi) {
                case 0:
                    while (getchar() != '\n');
                    break;
                case 1:
                    Sleep(2500);
                    break;
                case 2:
                    Sleep(2000);
                    break;
                case 3:
                    Sleep(1500);
                    break;
                case 4:
                    Sleep(1000);
                    break;
                case 5:
                    Sleep(500);
                    break;
            }
            cct_gotoxy(10, 50);
            cout << "��" << setiosflags(ios::right) << setw(4) << step << " ��(" << setiosflags(ios::right) << setw(2) << n << "): " << src << "-->" << dst << " ";

            
            cout << "A:";
            for (int i = 0; i < 10; i++) {

                if (A[i] == 0) {

                    cout << "  ";
                }
                else {


                    cout << setiosflags(ios::right) << setw(2) << A[i];

                }
            }
            cout << " ";
            cout << "B:";
            for (int i = 0; i < 10; i++) {
                if (B[i] == 0) {
                    cout << "  ";
                }
                else {

                    cout << setiosflags(ios::right) << setw(2) << B[i];
                }
            }
            cout << " ";
            cout << "C:";
            for (int i = 0; i < 10; i++) {
                if (C[i] == 0) {
                    cout << "  ";
                }
                else {

                    cout << setiosflags(ios::right) << setw(2) << C[i];
                }
            }

            cout << endl;

        }
        switch (yanshi) {
            case 0:
                while (getchar() != '\n');
                break;
            case 1:
                Sleep(2500);
                break;
            case 2:
                Sleep(2000);
                break;
            case 3:
                Sleep(1500);
                break;
            case 4:
                Sleep(1000);
                break;
            case 5:
                Sleep(500);
                break;
        }
        for (int i = 0; i < 10; i++) {
            cct_gotoxy(7, 39 - i);
            if (A[i] != 0) {
                cout << A[i];

            }
            else {
                cout << " ";
            }

        }
        for (int i = 0; i < 10; i++) {
            cct_gotoxy(17, 39 - i);
            if (B[i] != 0) {
                cout << B[i];

            }
            else {
                cout << " ";
            }

        }
        for (int i = 0; i < 10; i++) {
            cct_gotoxy(27, 39 - i);
            if (C[i] != 0) {
                cout << C[i];

            }
            else {
                cout << " ";
            }

        }



        hanoi(n - 1, tmp, src, dst, yanshi, shuzu);
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
        if (n >= 1 && n <= 10) {
            while (getchar() != '\n');
            break;

        }
        else {
            while (getchar() != '\n');
        }


    }
    while (1) {
        cout << "��������ʼ��(A-C)" << endl;
        cin >> src;
        if (src == 'a' || src == 'A' || src == 'b' || src == 'B' || src == 'c' || src == 'C') {
            while (getchar() != '\n');         
            break;

        }
        else {
            while (getchar() != '\n');
        }


    }
    while (1) {
        cout << "������Ŀ����(A-C)" << endl;
        cin >> dst;
        if ((dst == 'a' || dst == 'A' || dst == 'b' || dst == 'B' || dst == 'c' || dst == 'C') && dst != src && dst != (src + 32) && dst != (src - 32)) {
            while (getchar() != '\n');       
            break;

        }
        else {
            while (getchar() != '\n');
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
                A[top1++] = i;
            }
            break;
        case 'B':
            for (int i = n; i >= 1; i--) {
                B[top2++] = i;
            }
            break;
        case 'C':
            for (int i = n; i >= 1; i--) {
                C[top3++] = i;
            }
            break;
    }

    while (1) {
        cout << "�������ƶ��ٶ�(0-5: 0-���س�������ʾ 1-��ʱ� 5-��ʱ���)" << endl;
        cin >> yanshi;
        if (yanshi >= 0 && yanshi <= 5) {
            while (getchar() != '\n');
            break;

        }
        else {
            while (getchar() != '\n');

        }


    }
    while (1) {
        cout << "�������Ƿ���ʾ�ڲ�����ֵ(0-����ʾ 1-��ʾ)" << endl;
        cin >> shuzu;
        if (shuzu >= 0 && shuzu <= 1) {
            while (getchar() != '\n');
            break;

        }
        else {
            while (getchar() != '\n');
        }


    }
    cct_cls();
    

    //����
    cout << "��" << src << "�ƶ���" << dst << "����" << n << "�㣬��ʱ����Ϊ" << yanshi << "��ʾ�ڲ�����ֵ";
   
    if (shuzu) {
        cct_gotoxy(10, 50);
        cout << "��ʼ:                ";
        cout << "A:";
        for (int i = 0; i < 10; i++) {

            if (A[i] == 0) {

                cout << "  ";
            }
            else {


                cout << setiosflags(ios::right) << setw(2) << A[i];
            }
        }
        cout << " ";
        cout << "B:";
        for (int i = 0; i < 10; i++) {
            if (B[i] == 0) {
                cout << "  ";
            }
            else {

                cout << setiosflags(ios::right) << setw(2) << B[i];
            }
        }
        cout << " ";
        cout << "C:";
        for (int i = 0; i < 10; i++) {
            if (C[i] == 0) {
                cout << "  ";
            }
            else {

                cout << setiosflags(ios::right) << setw(2) << C[i];
            }
        }
    }

    switch (yanshi) {
        case 0:
            while (getchar() != '\n');
            break;
        case 1:
            Sleep(2500);
            break;
        case 2:
            Sleep(2000);
            break;
        case 3:
            Sleep(1500);
            break;
        case 4:
            Sleep(1000);
            break;
        case 5:
            Sleep(500);
            break;
    }
    cct_gotoxy(5, 40);
    cout << "=========================";
    cct_gotoxy(5, 41);
    cout << "  A         B         C  ";

   
        for (int i = 0; i < 10; i++) {
            cct_gotoxy(7, 39 - i);
            if (A[i] != 0) {
                cout << A[i];

            }
            else {
                cout << " ";
            }

        }
        for (int i = 0; i < 10; i++) {
            cct_gotoxy(17, 39 - i);
            if (B[i] != 0) {
                cout << B[i];

            }
            else {
                cout << " ";
            }

        }
        for (int i = 0; i < 10; i++) {
            cct_gotoxy(27, 39 - i);
            if (C[i] != 0) {
                cout << C[i];

            }
            else {
                cout << " ";
            }

        }
    
   

  
   
    hanoi(n , src, tmp, dst, yanshi, shuzu);
   



	system("pause"); //���������ʾ��ͣ��ע�⣺ֻ�ʺ����ض��������ر������ĳ���Ӵ˾���÷�Ϊ0��
	return 0;
}
