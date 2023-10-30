/* 2250748 �����q ��02 */

/* ���������ϵͳ�ĺ궨�塢��Ҫ��ͷ�ļ��� */
#include <iostream>
#include "read_stulist.h"
#include <iomanip>
using namespace std;




#define MAX_FILENAME_LEN		512	//�����ļ�������󳤶�

/* stu_metge ����ÿ��ѧ������Ϣ������ѧ�š�������������Ҫ��˽����Ϣ���������ݲ�׼�����ɼ����������Ҫ��������� */
class stu_merge {
private:
	int  stu_no;					//ѧ��
	char stu_name[MAX_NAME_LEN];  //����
	char round_1;
	char round_2;

	/* ���������private���ݳ�Ա����Ա�����Լ�������Ҫ������ */
	friend class stu_list;

public:
	//���಻�������κεĹ������ݳ�Ա����Ա����
};




/* stu_list ������ѡ����Ϣ���������ݲ�׼�����ɼ����������Ҫ��������� */
class stu_list {
private:
	student list_round_1[MAX_STU_NUM];	//��һ��ѡ�ε�ѧ�������������򡢲�ȥ�أ�
	int list_num_1;						//��һ��ѡ�ε�ѧ������

	student list_round_2[MAX_STU_NUM];	//�ڶ���ѡ�ε�ѧ�������������򡢲�ȥ�أ�
	int list_num_2;						//�ڶ���ѡ�ε�ѧ������

	stu_merge list_merge[MAX_STU_NUM];	//�ϲ����ѧ��������ȥ�أ����������У�
	int list_merge_num;					//�ϲ����ѧ��������Ŀǰ����ӡ�����������ڲ������������Ҫ��Ҳ��Ҫɾ����

	/* ���������private���ݳ�Ա�ͳ�Ա����
	   ע�⣬���������array / set / map / vector��STL���� */

public:
	stu_list();										//���캯����������ɳ�ʼ�����ܣ��������Ҫ�������պ�������
	int read(const char* filename, const int round);	//���ļ��ж���ѡ����Ϣ��roundΪ1/2����ʾѡ���ִ�
	int print(const char* prompt = NULL);				//��ӡ���յ�ѡ������

	/* �������������public��Ա��������ʾ���ϲ���ȥ�ء�����ȣ�
	   �������幫�е����ݳ�Ա
	   �������ڳ�Ա������ʹ��array / set / map / vector��STL���� */
	void hebing();
	void quchong();
	void paixu();
};

bool cunzai(int shuzu[], int person, int zhi)
{
	for (int j = 0; j < person; j++) {
		if (zhi == shuzu[j]) {
			return 1;
		}
	}
	return 0;
}
/* --- ������Ը���stu_merge/stu_list������ĳ�Ա����������ʵ�� --- */
void stu_list::paixu()
{
	for (int m = 0; m < this->list_merge_num; m++) {
		for (int i = this->list_merge_num - 1; i > m; i--) {
			if (this->list_merge[i].stu_no < this->list_merge[i - 1].stu_no) {
				int t = this->list_merge[i].stu_no;
				this->list_merge[i].stu_no = this->list_merge[i - 1].stu_no;
				this->list_merge[i - 1].stu_no = t;

				char name[MAX_NAME_LEN];
				for (int j = 0; j < MAX_NAME_LEN; j++) {
					name[j] = this->list_merge[i].stu_name[j];
				}
				for (int j = 0; j < MAX_NAME_LEN; j++) {
					this->list_merge[i].stu_name[j] = this->list_merge[i - 1].stu_name[j];
				}
				for (int j = 0; j < MAX_NAME_LEN; j++) {
					this->list_merge[i - 1].stu_name[j] = name[j];
				}

				char t1 = this->list_merge[i].round_1;
				this->list_merge[i].round_1 = this->list_merge[i-1].round_1;
				this->list_merge[i - 1].round_1 = t1;

				char t2 = this->list_merge[i].round_2;
				this->list_merge[i].round_2 = this->list_merge[i - 1].round_2;
				this->list_merge[i - 1].round_2 = t2;


			}
		}
	}
}


void stu_list::quchong()
{
	int shuzu[2000] = { 0 };
	int person = 0;
	for (int i = 0; i < this->list_merge_num; i++) {
		if (cunzai(shuzu, person, this->list_merge[i].stu_no) == 0) {
			shuzu[person] = this->list_merge[i].stu_no;
			this->list_merge[person].stu_no = this->list_merge[i].stu_no;
			for (int j = 0; j < MAX_NAME_LEN; j++) {
				this->list_merge[person].stu_name[j] = this->list_merge[i].stu_name[j];
			}
			this->list_merge[person].round_1 = list_merge[i].round_1;
			this->list_merge[person].round_2 = list_merge[i].round_2;
			person++;
		}
		else {
			for (int n = 0; n < i; n++) {
				if (this->list_merge[n].stu_no == this->list_merge[i].stu_no) {
					this->list_merge[n].round_1 = 'Y';
					this->list_merge[n].round_2 = 'Y';
				}
			}
		}
	}
	this->list_merge_num = person;

}

void stu_list::hebing()
{
	for (int i = 0; i < this->list_num_1; i++) {
		this->list_merge[i].stu_no = this->list_round_1[i].no;
		for (int j = 0; j < MAX_NAME_LEN; j++) {
			this->list_merge[i].stu_name[j] = this->list_round_1[i].name[j];
		}
		this->list_merge[i].round_1 = 'Y';
		this->list_merge[i].round_2 = 'N';
	}
	for (int i = this->list_num_1; i < this->list_num_2+ this->list_num_1; i++) {
		this->list_merge[i].stu_no = this->list_round_2[i- this->list_num_1].no;
		for (int j = 0; j < MAX_NAME_LEN; j++) {
			this->list_merge[i].stu_name[j] = this->list_round_2[i- this->list_num_1].name[j];
		}
		this->list_merge[i].round_1 = 'N';
		this->list_merge[i].round_2 = 'Y';
	}

	this->list_merge_num = this->list_num_1 + this->list_num_2;


}

/***************************************************************************
  �������ƣ�
  ��    �ܣ����ļ��ж���ѡ����Ϣ��roundΪ1/2����ʾѡ���ִ�
  ���������
  �� �� ֵ��
  ˵    �������캯����������ɳ�ʼ�����ܣ��������Ҫ�������պ�������
***************************************************************************/
stu_list::stu_list()
{
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ���ʾ��̬���ӿ��ʹ�ã��������е��þ�̬���ӿ��е�Ԥ�ú���
  ���������
  �� �� ֵ��
  ˵    ��������������Ҫ�޸�
***************************************************************************/
int stu_list::read(const char* filename, const int round)
{
	int ret = 0;
	/* ��ȡ��1/2�ֵ�ѡ����������ӡ */
	switch (round) {
		case 1:
			this->list_num_1 = read_stulist(filename, this->list_round_1, MAX_STU_NUM);
			if (this->list_num_1 > 0)
				print_stulist("��һ��ѡ��������", this->list_round_1, this->list_num_1);
			else
				ret = -1;
			break;
		case 2:
			this->list_num_2 = read_stulist(filename, this->list_round_2, MAX_STU_NUM);
			if (this->list_num_2 > 0)
				print_stulist("�ڶ���ѡ��������", this->list_round_2, this->list_num_2);
			else
				ret = -1;
			break;
		default:
			ret = -1;
			break;
	}

	return ret;
}


/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ������ӡ���յ�ѡ������
***************************************************************************/
int stu_list::print(const char* prompt)
{
	cout << prompt<<endl;
	cout << "============================================================" << endl;
	cout << "��� ѧ��     ����                            ��һ�� �ڶ���" << endl;
	cout << "============================================================" << endl;
	for (int i = 0; i < this->list_merge_num; i++) {
		cout << setiosflags(ios::left)<< setw(5) << i+1 << this->list_merge[i].stu_no << "  " << setw(32) << this->list_merge[i].stu_name << this->list_merge[i].round_1 << "      " << this->list_merge[i].round_2 << endl;
	}
	cout << "============================================================" << endl;

	return 0;
}




/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����
***************************************************************************/
int main(int argc, char** argv)
{
	char file1[MAX_FILENAME_LEN], file2[MAX_FILENAME_LEN];

	cout << "������ǰһ��ѡ�ε������ļ� : ";
	gets_s(file1); //cin���ܶ��пո���ļ�

	cout << "�������һ��ѡ�ε������ļ� : ";
	gets_s(file2);

	stu_list list;

	/* �������� */
	if (list.read(file1, 1) < 0)
		return -1;
	if (list.read(file2, 2) < 0)
		return -1;

	/* �������� */
	list.hebing();
	list.quchong();
	list.paixu();

	/* ��ӡ */
	list.print("����ѡ������");

	return 0;
}
