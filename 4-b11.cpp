/* 2250748 ��02 �����q */
#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

/* -----------------------------------------------------------------------------------
		����   ��1����������һ�����������������ݹ麯�����������������ӵĺ����в������κ���ʽ��ѭ��
				 2��������ų���
				 3������const�ͱ���

		������ ��1������ȫ�ֱ���
				 2����print_tower֮������������в������徲̬�ֲ�����
   ----------------------------------------------------------------------------------- */

   /***************************************************************************
	 �������ƣ�
	 ��    �ܣ���ӡ��ĸ��
	 ���������
	 �� �� ֵ��
	 ˵    �����βΰ�������
			   ��ʾ����һ������order��ָ������/����
   ***************************************************************************/

//char now�ǵ�ǰ�е������ĸ

void print_left(char beg_ch, char end_ch) {
	if (end_ch >= beg_ch) {
		cout << beg_ch;
		print_left(beg_ch + 1, end_ch);

	}
}
void print_right(char beg_ch, char end_ch) {
	if (beg_ch <= end_ch) {
		cout << (char)(end_ch - 1);
		print_right(beg_ch, end_ch - 1);
	}
	else {
		cout << endl;
	}
}
void print_space(char beg_ch, char end_ch) {
	if (beg_ch < end_ch) {
		print_space(beg_ch+1,  end_ch);
		cout << " ";
	}
}
void print_tower(int order,char beg_ch ,char end_ch,char now)
{
	if (order == 1) {
		if (now > end_ch) {
			return;
		}
		print_space(now, end_ch);
		print_left(beg_ch, now);
		print_right(beg_ch + 1, now);
		print_tower(order, beg_ch, end_ch, now + 1);
	}
	else {
		if (now < beg_ch) {
			return;
		}
		print_space(now, end_ch);
		print_left(beg_ch, now);
		print_right(beg_ch + 1, now);
		print_tower(order, beg_ch, end_ch, now - 1);
	}
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����main�����е�...�����޸ģ�����λ�ò�׼�޸�
***************************************************************************/
int main()
{
	char end_ch;

	/* ������������ַ�(����д��Ч��Ϊ����ѭ�����֣��������������) */
	cout << "����������ַ�(A~Z)" << endl;
	end_ch = getchar();			//����������һ���ַ�
	if (end_ch < 'A' || end_ch > 'Z') {
		cout << "�����ַ����Ǵ�д��ĸ" << endl;
		return -1;
	}

	/* ��������ĸ��(����ΪA) */
	cout <<setfill('=') << setw((end_ch - 'A') * 2+1 )<<'=' << endl; /* ����ĸ����������=(��������ѭ��) */
	cout << "��������ĸ��(A->" << end_ch << ")" << endl;
	cout << setfill('=') << setw((end_ch - 'A') * 2 + 1)<<'=' << endl; /* ����ĸ����������=(��������ѭ��) */
	print_tower(1, 'A',end_ch ,  'A'); //�����ӡ A~�����ַ� 
	cout << endl;

	/* ��������ĸ��(����ΪA) */
	cout << setfill('=') << setw((end_ch - 'A') * 2 + 1) << '=' << endl; /* ����ĸ����������=(��������ѭ��) */
	cout << "��������ĸ��(A->" << end_ch << ")" << endl;
	cout << setfill('=') << setw((end_ch - 'A') * 2 + 1) << '=' << endl; /* ����ĸ����������=(��������ѭ��) */
	print_tower(0, 'A', end_ch, end_ch);  //�����ӡ A~�����ַ� 
	cout << endl;

	/* ����������Ư�������Σ����ΪA�� */
	cout << setfill('=') << setw((end_ch - 'A') * 2 + 1) << '=' << endl;/* ����ĸ����������= */
	cout << "����(A->" << end_ch << ")" << endl;
	cout << setfill('=') << setw((end_ch - 'A') * 2 + 1) << '=' << endl;/* ����ĸ����������= */
	print_tower(1, 'A', end_ch, 'A'); //��ӡ A~�����ַ��������� 
	print_tower(0, 'A', end_ch, end_ch-1);   //��ӡ A~�����ַ�-1�ĵ����� 
	cout << endl;


	return 0;
}