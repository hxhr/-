/* 2250748 王渝鹮 信02 */
#include <iostream>
#include <iomanip>
#include<limits>
using namespace std;

/* ----具体要求----
   1、不允许添加其它头文件
   2、不允许定义全局变量、静态局部变量
   3、不允许添加其它函数
   4、main函数处理输入，允许循环
   --------------------------------------------------------------------- */

   /***************************************************************************
     函数名称：
     功    能：打印n层汉诺塔的移动顺序
     输入参数：int n：层数
               char src：起始柱
               char tmp：中间柱
               char dst：目标柱
     返 回 值：
     说    明：1、函数名、形参、返回类型均不准动
               2、本函数不允许出现任何形式的循环
   ***************************************************************************/
void hanoi(int n, char src, char tmp, char dst)
{
    static int step = 0;
    if (n == 1) {
        
        step++;
        cout << setiosflags(ios::right) << setw(5)<<step<<":" << setiosflags(ios::right) << setw(3) << 1 << "# " << src << "-->" << dst << endl;
    }
    else {
        hanoi(n - 1, src, dst, tmp);
        step++;
        cout << setiosflags(ios::right) << setw(5) << step << ":" <<setiosflags(ios::right) << setw(3) << n << "# " << src << "-->" << dst << endl;
        hanoi(n - 1, tmp, src, dst);
    }

}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：1、完成输入、调用递归函数
            2、处理输入错误时，允许使用循环
            3、为了统一检查，不再允许添加其它函数（输入起始/目标柱的代码不要求统一函数处理，均直接放在main中）
***************************************************************************/
int main()
{
    int n;
    char src;
    char tmp = 'b';
    char dst;
    
    while (1) {
        cout << "请输入汉诺塔的层数(1-16)" << endl;
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
    cout << "移动步骤为:" << endl;
    hanoi(n, src, tmp, dst);
    return 0;

}