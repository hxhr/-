/* 2250748 王渝鹮 信02 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

const int MAX_X = 69;	//定义*组成的边框的宽度
const int MAX_Y = 17;	//定义*组成的边框的高度

/***************************************************************************
  函数名称：
  功    能：完成与system("cls")一样的功能，但效率高
  输入参数：
  返 回 值：
  说    明：清除整个屏幕缓冲区，不仅仅是可见窗口区域(使用当前颜色)
***************************************************************************/
void cls(const HANDLE hout)
{
	COORD coord = { 0, 0 };
	CONSOLE_SCREEN_BUFFER_INFO binfo; /* to get buffer info */
	DWORD num;

	/* 取当前缓冲区信息 */
	GetConsoleScreenBufferInfo(hout, &binfo);
	/* 填充字符 */
	FillConsoleOutputCharacter(hout, (TCHAR)' ', binfo.dwSize.X * binfo.dwSize.Y, coord, &num);
	/* 填充属性 */
	FillConsoleOutputAttribute(hout, binfo.wAttributes, binfo.dwSize.X * binfo.dwSize.Y, coord, &num);

	/* 光标回到(0,0) */
	SetConsoleCursorPosition(hout, coord);
	return;
}

/***************************************************************************
  函数名称：gotoxy
  功    能：将光标移动到指定位置
  输入参数：HANDLE hout：输出设备句柄
			int X      ：指定位置的x坐标
			int Y      ：指定位置的y坐标
  返 回 值：无
  说    明：此函数不准修改
***************************************************************************/
void gotoxy(const HANDLE hout, const int X, const int Y)
{
	COORD coord;
	coord.X = X;
	coord.Y = Y;
	SetConsoleCursorPosition(hout, coord);
}

/***************************************************************************
  函数名称：showch
  功    能：在指定位置处打印一个指定的字符
  输入参数：HANDLE hout：输出设备句柄
			int X      ：指定位置的x坐标
			int Y      ：指定位置的y坐标
			char ch    ：要打印的字符
  返 回 值：无
  说    明：此函数不准修改
***************************************************************************/
void showch(const HANDLE hout, const int X, const int Y, const char ch)
{
	gotoxy(hout, X, Y);
	putchar(ch);
}

/***************************************************************************
  函数名称：init_border
  功    能：显示初始的边框及随机字符
  输入参数：HANDLE hout：输出设备句柄
  返 回 值：无
  说    明：此函数不准修改
***************************************************************************/
void init_border(const HANDLE hout)
{
	gotoxy(hout, 0, 0);	//光标移回左上角(0,0)
	printf("***********************************************************************\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("***********************************************************************\n");

	/* 随机显示20个大写字母，字母的值、XY坐标都随机显示
	   rand()函数的功能：随机生成一个在 0-32767 之间的整数
	   思考：在什么情况下，下面这个循环执行生成后，你看到的实际字母个数不足20个？ */
	int i;
	for (i = 0; i < 20; i++)
		showch(hout, rand() % MAX_X + 1, rand() % MAX_Y + 1, 'A' + rand() % 26);

	return;
}

/* -- 按需增加的若干函数可以放在此处 --*/

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：main函数仅用于初始演示，可以按题目要求全部推翻重写
***************************************************************************/
int menu() {

	printf("1.用I、J、K、L键控制上下左右(大小写均可，边界停止)\n");
	printf("2.用I、J、K、L键控制上下左右(大小写均可，边界回绕)\n");
	printf("3.用箭头键控制上下左右，边界停止\n");
	printf("4.用箭头键控制上下左右，边界回绕\n");
	printf("5.用I、J、K、L键控制上下左右(大小写均可，边界停止，按左箭头不向下)\n");
	printf("6.用I、J、K、L键控制上下左右(大小写均可，边界回绕，按左箭头不向下)\n");
	printf("0.退出\n");
	printf("[请选择0-6]");

	int a;
	while (1) {
		a = _getch();
		switch (a) {
			case 48:
				a = 0;
				break;
			case 49:
				a = 1;
				break;
			case 50:
				a = 2;
				break;
			case 51:
				a = 3;
				break;
			case 52:
				a = 4;
				break;
			case 53:
				a = 5;
				break;
			case 54:
				a = 6;
				break;
			default:
				continue;


		}
		break;
	}

	return a;

}

void move_by_ijkl_or_arrow(int x, int y, const HANDLE hout, int m) {
	int ch;
	if (m == 2) {
		while (ch = _getch()) {
			if (ch == 113 || ch == 81) {
				break;
			}
			switch (ch) {
				case 73:
				case 105:
					if (y == 1) {
						gotoxy(hout, x, 17);
						y = 17;
					}
					else {
						gotoxy(hout, x, y - 1);
						y = y - 1;
					}
					break;
				case 75:
				case 107:
					if (y == 17) {
						gotoxy(hout, x, 1);
						y = 1;
					}
					else {
						gotoxy(hout, x, y + 1);
						y = y + 1;
					}
					break;
				case 74:
				case 106:
					if (x == 1) {
						gotoxy(hout, 69, y);
						x = 69;
					}
					else {
						gotoxy(hout, x - 1, y);
						x = x - 1;
					}
					break;
				case 76:
				case 108:
					if (x == 69) {
						gotoxy(hout, 1, y);
						x = 1;
					}
					else {
						gotoxy(hout, x + 1, y);
						x = x + 1;
					}
					break;
				case 32:

					_putch(' ');
					_putch('\b');
					break;

				default:
					break;


			}
		}
	}
	else if (m == 1) {
		while (ch = _getch()) {
			if (ch == 113 || ch == 81) {
				break;
			}
			switch (ch) {
				case 73:
				case 105:
					if (y != 1) {
						gotoxy(hout, x, y - 1);
						y = y - 1;
					}
					break;
				case 75:
				case 107:
					if (y != 17) {
						gotoxy(hout, x, y + 1);
						y = y + 1;
					}
					break;
				case 74:
				case 106:
					if (x != 1) {
						gotoxy(hout, x - 1, y);
						x = x - 1;
					}
					break;
				case 76:
				case 108:
					if (x != 69) {
						gotoxy(hout, x + 1, y);
						x = x + 1;
					}
					break;
				case 32:
					_putch(' ');
					_putch('\b');
					break;
				default:
					break;


			}
		}
	}
	else if (m == 3) {
		while (ch = _getch()) {
			if (ch == 113 || ch == 81) {
				break;
			}
			switch (ch) {
				case 224:
					switch (_getch()) {
						case 72:
							if (y != 1) {
								gotoxy(hout, x, y - 1);
								y = y - 1;
							}
							break;
						case 80:
							if (y != 17) {
								gotoxy(hout, x, y + 1);
								y = y + 1;
							}
							break;
						case 75:
							if (x != 1) {
								gotoxy(hout, x - 1, y);
								x = x - 1;
							}
							break;
						case 77:
							if (x != 69) {
								gotoxy(hout, x + 1, y);
								x = x + 1;
							}
							break;
					}
					break;
				case 32:
					_putch(' ');
					_putch('\b');
					break;
				default:
					break;


			}
		}
	}
	else if (m == 4) {
		while (ch = _getch()) {
			if (ch == 113 || ch == 81) {
				break;
			}
			switch (ch) {
				case 224:
					switch (_getch()) {
						case 72:
							if (y == 1) {
								gotoxy(hout, x, 17);
								y = 17;
							}
							else {
								gotoxy(hout, x, y - 1);
								y = y - 1;
							}
							break;
						case 80:
							if (y == 17) {
								gotoxy(hout, x, 1);
								y = 1;
							}
							else {
								gotoxy(hout, x, y + 1);
								y = y + 1;
							}
							break;
						case 75:
							if (x == 1) {
								gotoxy(hout, 69, y);
								x = 69;
							}
							else {
								gotoxy(hout, x - 1, y);
								x = x - 1;
							}
							break;
						case 77:
							if (x == 69) {
								gotoxy(hout, 1, y);
								x = 1;
							}
							else {
								gotoxy(hout, x + 1, y);
								x = x + 1;
							}
							break;
						default:
							break;

					}
					break;
				case 32:
					_putch(' ');
					_putch('\b');
					break;

				default:
					break;


			}
		}
	}
	else if (m == 5) {
		while (ch = _getch()) {
			if (ch == 113 || ch == 81) {
				break;
			}
			switch (ch) {
				case 73:
				case 105:
					if (y != 1) {
						gotoxy(hout, x, y - 1);
						y = y - 1;
					}
					break;
				case 75:
				case 107:
					if (y != 17) {
						gotoxy(hout, x, y + 1);
						y = y + 1;
					}
					break;
				case 74:
				case 106:
					if (x != 1) {
						gotoxy(hout, x - 1, y);
						x = x - 1;
					}
					break;
				case 76:
				case 108:
					if (x != 69) {
						gotoxy(hout, x + 1, y);
						x = x + 1;
					}
					break;
				case 32:
					_putch(' ');
					_putch('\b');
					break;
				case 224:
					_getch();
					break;
				default:
					break;


			}
		}

		}
	else if (m == 6) {
			while (ch = _getch()) {
				if (ch == 113 || ch == 81) {
					break;
				}
				switch (ch) {
					case 73:
					case 105:
						if (y == 1) {
							gotoxy(hout, x, 17);
							y = 17;
						}
						else {
							gotoxy(hout, x, y - 1);
							y = y - 1;
						}
						break;
					case 75:
					case 107:
						if (y == 17) {
							gotoxy(hout, x, 1);
							y = 1;
						}
						else {
							gotoxy(hout, x, y + 1);
							y = y + 1;
						}
						break;
					case 74:
					case 106:
						if (x == 1) {
							gotoxy(hout, 69, y);
							x = 69;
						}
						else {
							gotoxy(hout, x - 1, y);
							x = x - 1;
						}
						break;
					case 76:
					case 108:
						if (x == 69) {
							gotoxy(hout, 1, y);
							x = 1;
						}
						else {
							gotoxy(hout, x + 1, y);
							x = x + 1;
						}
						break;
					case 32:

						_putch(' ');
						_putch('\b');
						break;
					case 224:
						_getch();
						break;
					default:
						break;


				}
			}
			}

}
int main()
{
	while (1) {
		const HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE); //取标准输出设备对应的句柄

		/* 生成伪随机数的种子，只需在程序开始时执行一次即可 */
		srand((unsigned int)(time(0)));
		int m = menu();
		if (m == 0) {
			return 0;
		}

		/* 此句的作用是调用系统的cls命令清屏 */
		cls(hout);

		/* 显示初始的边框及其中的随机字符 */
		init_border(hout);
		int x = 35;
		int y = 9;
		gotoxy(hout, x, y);
		move_by_ijkl_or_arrow(x, y, hout, m);




		gotoxy(hout, 0, 23);
		printf("游戏结束，按回车键返回菜单.");

		while (_getch() != 13) {

		}
		cls(hout);

	}
	return 0;
}


//思考
// 1、我的程序1-2项确实如此，因为_getch()的返回值是键的ascii码，而左箭头的ASCII码不止一个，
// 返回的是224 75，而1-2项的作业按照指引，只会写判断第一个返回值的处理，所以实际上判断了224
// 但无反应（因为我没有设置），后面的75会在第二个循环被当成新的输入再判断一次，而75对应的键即K
// 在1-2项对应的是光标向下移动
//2、不一定总是20个字母，有可能不到20个，因为生成位置是随机的，如果有同一个位置恰好生多次，则总数小于20.