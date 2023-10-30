/* 2250748 �����q ��02 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

const int MAX_X = 69;	//����*��ɵı߿�Ŀ��
const int MAX_Y = 17;	//����*��ɵı߿�ĸ߶�

/***************************************************************************
  �������ƣ�
  ��    �ܣ������system("cls")һ���Ĺ��ܣ���Ч�ʸ�
  ���������
  �� �� ֵ��
  ˵    �������������Ļ���������������ǿɼ���������(ʹ�õ�ǰ��ɫ)
***************************************************************************/
void cls(const HANDLE hout)
{
	COORD coord = { 0, 0 };
	CONSOLE_SCREEN_BUFFER_INFO binfo; /* to get buffer info */
	DWORD num;

	/* ȡ��ǰ��������Ϣ */
	GetConsoleScreenBufferInfo(hout, &binfo);
	/* ����ַ� */
	FillConsoleOutputCharacter(hout, (TCHAR)' ', binfo.dwSize.X * binfo.dwSize.Y, coord, &num);
	/* ������� */
	FillConsoleOutputAttribute(hout, binfo.wAttributes, binfo.dwSize.X * binfo.dwSize.Y, coord, &num);

	/* ���ص�(0,0) */
	SetConsoleCursorPosition(hout, coord);
	return;
}

/***************************************************************************
  �������ƣ�gotoxy
  ��    �ܣ�������ƶ���ָ��λ��
  ���������HANDLE hout������豸���
			int X      ��ָ��λ�õ�x����
			int Y      ��ָ��λ�õ�y����
  �� �� ֵ����
  ˵    �����˺�����׼�޸�
***************************************************************************/
void gotoxy(const HANDLE hout, const int X, const int Y)
{
	COORD coord;
	coord.X = X;
	coord.Y = Y;
	SetConsoleCursorPosition(hout, coord);
}

/***************************************************************************
  �������ƣ�showch
  ��    �ܣ���ָ��λ�ô���ӡһ��ָ�����ַ�
  ���������HANDLE hout������豸���
			int X      ��ָ��λ�õ�x����
			int Y      ��ָ��λ�õ�y����
			char ch    ��Ҫ��ӡ���ַ�
  �� �� ֵ����
  ˵    �����˺�����׼�޸�
***************************************************************************/
void showch(const HANDLE hout, const int X, const int Y, const char ch)
{
	gotoxy(hout, X, Y);
	putchar(ch);
}

/***************************************************************************
  �������ƣ�init_border
  ��    �ܣ���ʾ��ʼ�ı߿�����ַ�
  ���������HANDLE hout������豸���
  �� �� ֵ����
  ˵    �����˺�����׼�޸�
***************************************************************************/
void init_border(const HANDLE hout)
{
	gotoxy(hout, 0, 0);	//����ƻ����Ͻ�(0,0)
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

	/* �����ʾ20����д��ĸ����ĸ��ֵ��XY���궼�����ʾ
	   rand()�����Ĺ��ܣ��������һ���� 0-32767 ֮�������
	   ˼������ʲô����£��������ѭ��ִ�����ɺ��㿴����ʵ����ĸ��������20���� */
	int i;
	for (i = 0; i < 20; i++)
		showch(hout, rand() % MAX_X + 1, rand() % MAX_Y + 1, 'A' + rand() % 26);

	return;
}

/* -- �������ӵ����ɺ������Է��ڴ˴� --*/

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����main���������ڳ�ʼ��ʾ�����԰���ĿҪ��ȫ���Ʒ���д
***************************************************************************/
int menu() {

	printf("1.��I��J��K��L��������������(��Сд���ɣ��߽�ֹͣ)\n");
	printf("2.��I��J��K��L��������������(��Сд���ɣ��߽����)\n");
	printf("3.�ü�ͷ�������������ң��߽�ֹͣ\n");
	printf("4.�ü�ͷ�������������ң��߽����\n");
	printf("5.��I��J��K��L��������������(��Сд���ɣ��߽�ֹͣ�������ͷ������)\n");
	printf("6.��I��J��K��L��������������(��Сд���ɣ��߽���ƣ������ͷ������)\n");
	printf("0.�˳�\n");
	printf("[��ѡ��0-6]");

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
		const HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE); //ȡ��׼����豸��Ӧ�ľ��

		/* ����α����������ӣ�ֻ���ڳ���ʼʱִ��һ�μ��� */
		srand((unsigned int)(time(0)));
		int m = menu();
		if (m == 0) {
			return 0;
		}

		/* �˾�������ǵ���ϵͳ��cls�������� */
		cls(hout);

		/* ��ʾ��ʼ�ı߿����е�����ַ� */
		init_border(hout);
		int x = 35;
		int y = 9;
		gotoxy(hout, x, y);
		move_by_ijkl_or_arrow(x, y, hout, m);




		gotoxy(hout, 0, 23);
		printf("��Ϸ���������س������ز˵�.");

		while (_getch() != 13) {

		}
		cls(hout);

	}
	return 0;
}


//˼��
// 1���ҵĳ���1-2��ȷʵ��ˣ���Ϊ_getch()�ķ���ֵ�Ǽ���ascii�룬�����ͷ��ASCII�벻ֹһ����
// ���ص���224 75����1-2�����ҵ����ָ����ֻ��д�жϵ�һ������ֵ�Ĵ�������ʵ�����ж���224
// ���޷�Ӧ����Ϊ��û�����ã��������75���ڵڶ���ѭ���������µ��������ж�һ�Σ���75��Ӧ�ļ���K
// ��1-2���Ӧ���ǹ�������ƶ�
//2����һ������20����ĸ���п��ܲ���20������Ϊ����λ��������ģ������ͬһ��λ��ǡ������Σ�������С��20.