/* 2250748 �����q ��02 */
#include <iostream>
using namespace std;

/* 1�����������κ����͵�ȫ�ֱ������������������궨���
   2������������κ���ʽ��ȫ�ֺ���
*/

/* --- ����Ķ��岹������ --- */
class Days {
private:
	int year;
	int month;
	int day;
	//�����������private���ݳ�Ա�⣬������������κ����͵����ݳ�Ա

	/* ������Բ�����Ҫ�����Ա�����Ķ��壨���ṩ����磬���������������Ա�������ã��������Ϊ˽�У��������ޣ��������壩 */

public:
	int calc_days();     //�����ǵ���ĵڼ���
    Days(int a, int b, int c);
	/* ������Բ���������Ҫ�����Ա�����Ķ���(����ʵ��)���������ޣ��������� */

};
Days::Days(int a, int b, int c)
{
    this->year = a;
    this->month = b;
    this->day = c;
}
/* --- �˴��������Ա����������ʵ�� --- */
int Days::calc_days()
{
    if (this->month >= 1 && this->month <= 12) {
        bool leap;
        if ((this->year % 4 == 0 && this->year % 100 != 0) || (this->year % 400 == 0)) {
            leap = true;
        }
        else {
            leap = false;
        }
        switch (this->month) {
            case 1:
                if (this->day >= 1 && this->day <= 31) {
                    return this->day;
                }
                else {
                    return -1;
                }
                break;

            case 2:
                if (leap) {
                    if (this->day >= 1 && this->day <= 29) {
                        return this->day + 31;
                    }
                    else {
                        return -1;
                    }
                }
                else {
                    if (this->day >= 1 && this->day <= 28) {
                        return this->day + 31 ;
                    }
                    else {
                        return -1;
                    }
                }
                break;


            case 3:
                if (this->day >= 1 && this->day <= 31) {
                    return this->day + 31 + 28 + leap ;
                }
                else {
                    return -1;
                }
                break;

            case 4:
                if (this->day >= 1 && this->day <= 30) {
                    return this->day + 31 * 2 + 28 + leap ;
                }
                else {
                    return -1;
                }
                break;
            case 5:
                if (this->day >= 1 && this->day <= 31) {
                    return this->day + 31 * 2 + 30 + 28 + leap ;
                }
                else {
                    return -1;
                }
                break;
            case 6:
                if (this->day >= 1 && this->day <= 30) {
                    return this->day + 31 * 3 + 30 + 28 + leap ;
                }
                else {
                    return -1;
                }
                break;


            case 7:
                if (this->day >= 1 && this->day <= 31) {
                    return this->day + 31 * 3 + 30 * 2 + 28 + leap ;
                }
                else {
                    return -1;
                }
                break;
            case 8:
                if (this->day >= 1 && this->day <= 31) {
                    return this->day + 31 * 4 + 30 * 2 + 28 + leap ;
                }
                else {
                    return -1;
                }
                break;
            case 9:
                if (this->day >= 1 && this->day <= 30) {
                    return this->day + 31 * 5 + 30 * 2 + 28 + leap ;
                }
                else {
                    return -1;
                }
                break;
            case 10:
                if (this->day >= 1 && this->day <= 31) {
                    return this->day + 31 * 5 + 30 * 3 + 28 + leap ;
                }
                else {
                    return -1;
                }
                break;
            case 11:
                if (this->day >= 1 && this->day <= 30) {
                    return this->day + 31 * 6 + 30 * 3 + 28 + leap ;
                }
                else {
                    return -1;
                }
                break;

            case 12:
                if (this->day >= 1 && this->day <= 31) {
                    return this->day + 31 * 6 + 30 * 4 + 28 + leap ;
                }
                else {
                    return -1;
                }
                break;
            default:
                return -1;
               
        }
    }
    else {
        return -1;
    }

 }

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����main������׼��
 ***************************************************************************/
int main()
{
	if (1) {
		Days d1(2020, 3, 18);
		cout << "Ӧ�����78�� ʵ���ǣ�" << d1.calc_days() << endl;
	}

	if (1) {
		Days d1(2023, 3, 18);
		cout << "Ӧ�����77�� ʵ���ǣ�" << d1.calc_days() << endl;
	}

	if (1) {
		Days d1(2020, 12, 31);
		cout << "Ӧ�����366��ʵ���ǣ�" << d1.calc_days() << endl;
	}

	if (1) {
		Days d1(2023, 12, 31);
		cout << "Ӧ�����365��ʵ���ǣ�" << d1.calc_days() << endl;
	}

	if (1) {
		Days d1(2020, 2, 29);
		cout << "Ӧ�����60�� ʵ���ǣ�" << d1.calc_days() << endl;
	}

	if (1) {
		Days d1(2023, 2, 29);
		cout << "Ӧ�����-1�� ʵ���ǣ�" << d1.calc_days() << endl;
	}

	return 0;
}