/*2250748 ĞÅ02 ÍõÓåûq*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include<math.h>
#include <iomanip>

using namespace std;

int main()
{
	double h;
	cout << std::setprecision(20) << "ÇëÊäÈë[0-100ÒÚ)Ö®¼äµÄÊı×Ö:" << endl;
	cin >> h;
	double s = h + 0.001;

	int b = static_cast<int>(s / 10);
	unsigned int d = static_cast<unsigned int>(s - 10 * b);
	unsigned int n = static_cast<unsigned int>((s - 10 * b - d) * 100);

	int leap;
	//¼ÇÂ¼Ê®ÒÚ-ÒÚÊÇ·ñÈ«Îª0
	int z1 = 0;
	cout << "´óĞ´½á¹ûÊÇ:" << endl;

	//Ê®ÒÚ-ÒÚ
	switch (b / 100000000 % 10) {
		case 0:
			break;
		case 1:
			cout << "Ò¼Ê°";
			break;
		case 2:
			cout << "·¡Ê°";
			break;
		case 3:
			cout << "ÈşÊ°";
			break;
		case 4:
			cout << "ËÁÊ°";
			break;
		case 5:
			cout << "ÎéÊ°";
			break;
		case 6:
			cout << "Â½Ê°";
			break;
		case 7:
			cout << "ÆâÊ°";
			break;
		case 8:
			cout << "°ÆÊ°";
			break;
		case 9:
			cout << "¾ÁÊ°";
			break;
	}

	if (b / 100000000 % 10 == 0) {
		z1 = 0;
	}
	else {
		z1 = 1;
	}



	switch (b / 10000000 % 10) {
		case 0:
			if (z1) {
				cout << "ÒÚ";
			}
			break;

		case 1:
			cout << "Ò¼ÒÚ";
			break;
		case 2:
			cout << "·¡ÒÚ";
			break;
		case 3:
			cout << "ÈşÒÚ";
			break;
		case 4:
			cout << "ËÁÒÚ";
			break;
		case 5:
			cout << "ÎéÒÚ";
			break;
		case 6:
			cout << "Â½ÒÚ";
			break;
		case 7:
			cout << "ÆâÒÚ";
			break;
		case 8:
			cout << "°ÆÒÚ";
			break;
		case 9:
			cout << "¾ÁÒÚ";
			break;
	}

	if (b / 10000000 % 10 == 0 && z1 == 0) {
		z1 = 0;
	}
	else {
		z1 = 1;
	}









	//Ç§Íò-Íò

	//¼ÇÂ¼Ç§Íò-ÍòÊÇ·ñÈ«Îª0
	int z2 = 0;
	switch (b / 1000000 % 10) {
		case 0:
			if (z1 && b / 100000 % 10 != 0) {
				cout << "Áã";
			}
			break;

		case 1:
			cout << "Ò¼Çª";
			break;
		case 2:
			cout << "·¡Çª";
			break;
		case 3:
			cout << "ÈşÇª";
			break;
		case 4:
			cout << "ËÁÇª";
			break;
		case 5:
			cout << "ÎéÇª";
			break;
		case 6:
			cout << "Â½Çª";
			break;
		case 7:
			cout << "ÆâÇª";
			break;
		case 8:
			cout << "°ÆÇª";
			break;
		case 9:
			cout << "¾ÁÇª";
			break;
	}
	//Èç¹ûÉÏÒ»Î»·Ç0£¬Ôòleap=1
	if (b / 1000000 % 10 == 0) {
		leap = 0;
	}
	else {
		leap = 1;
	}
	if (b / 1000000 % 10 == 0) {
		z2 = 0;
	}
	else {
		z2 = 1;
	}
	//°ÙÍò

	switch (b / 100000 % 10) {
		case 0:
			if ((z1 || z2) && b / 10000 % 10 != 0) {
				cout << "Áã";
			}
			break;

		case 1:
			cout << "Ò¼°Û";
			break;
		case 2:
			cout << "·¡°Û";
			break;
		case 3:
			cout << "Èş°Û";
			break;
		case 4:
			cout << "ËÁ°Û";
			break;
		case 5:
			cout << "Îé°Û";
			break;
		case 6:
			cout << "Â½°Û";
			break;
		case 7:
			cout << "Æâ°Û";
			break;
		case 8:
			cout << "°Æ°Û";
			break;
		case 9:
			cout << "¾Á°Û";
			break;
	}
	if (b / 100000 % 10 == 0) {
		leap = 0;
	}
	else {
		leap = 1;
	}
	if (b / 100000 % 10 == 0 && z2 == 0) {
		z2 = 0;
	}
	else {
		z2 = 1;
	}
	//Ê®Íò

	switch (b / 10000 % 10) {
		case 0:
			if ((z1 || z2) && b / 1000 % 10 != 0) {
				cout << "Áã";
			}
			break;

		case 1:
			cout << "Ò¼Ê°";
			break;
		case 2:
			cout << "·¡Ê°";
			break;
		case 3:
			cout << "ÈşÊ°";
			break;
		case 4:
			cout << "ËÁÊ°";
			break;
		case 5:
			cout << "ÎéÊ°";
			break;
		case 6:
			cout << "Â½Ê°";
			break;
		case 7:
			cout << "ÆâÊ°";
			break;
		case 8:
			cout << "°ÆÊ°";
			break;
		case 9:
			cout << "¾ÁÊ°";
			break;
	}

	if (b / 10000 % 10 == 0 && z2 == 0) {
		z2 = 0;
	}
	else {
		z2 = 1;
	}
	//ÍòÎ»

	switch (b / 1000 % 10) {
		case 0:
			if (z2) {
				cout << "Íò";
			}
			break;

		case 1:
			cout << "Ò¼Íò";
			break;
		case 2:
			cout << "·¡Íò";
			break;
		case 3:
			cout << "ÈşÍò";
			break;
		case 4:
			cout << "ËÁÍò";
			break;
		case 5:
			cout << "ÎéÍò";
			break;
		case 6:
			cout << "Â½Íò";
			break;
		case 7:
			cout << "ÆâÍò";
			break;
		case 8:
			cout << "°ÆÍò";
			break;
		case 9:
			cout << "¾ÁÍò";
			break;
	}

	if (b / 1000 % 10 == 0 && z2 == 0) {
		z2 = 0;
	}
	else {
		z2 = 1;
	}





	//Ç§Î»µ½¸öÎ»


	//Ç§Î»
	int z3 = 0;
	switch (b / 100 % 10) {
		case 0:
			if ((z1 || z2) && b / 10 % 10 != 0) {
				cout << "Áã";
			}

			break;
		case 1:
			cout << "Ò¼Çª";
			break;
		case 2:
			cout << "·¡Çª";
			break;
		case 3:
			cout << "ÈşÇª";
			break;
		case 4:
			cout << "ËÁÇª";
			break;
		case 5:
			cout << "ÎéÇª";
			break;
		case 6:
			cout << "Â½Çª";
			break;
		case 7:
			cout << "ÆâÇª";
			break;
		case 8:
			cout << "°ÆÇª";
			break;
		case 9:
			cout << "¾ÁÇª";
			break;
	}
	if (b / 100 % 10 == 0) {
		leap = 0;
	}
	else {
		leap = 1;
	}
	if (b / 100 % 10 == 0) {
		z3 = 0;
	}
	else {
		z3 = 1;
	}
	//°ÙÎ»

	switch (b / 10 % 10) {
		case 0:
			if ((z1 || z2 || z3) && b % 10 != 0) {
				cout << "Áã";
			}
			break;

		case 1:
			cout << "Ò¼°Û";
			break;
		case 2:
			cout << "·¡°Û";
			break;
		case 3:
			cout << "Èş°Û";
			break;
		case 4:
			cout << "ËÁ°Û";
			break;
		case 5:
			cout << "Îé°Û";
			break;
		case 6:
			cout << "Â½°Û";
			break;
		case 7:
			cout << "Æâ°Û";
			break;
		case 8:
			cout << "°Æ°Û";
			break;
		case 9:
			cout << "¾Á°Û";
			break;
	}
	//Èç¹ûÉÏÒ»Î»·Ç0£¬Ôòleap=1
	if (b / 10 % 10 == 0) {
		leap = 0;
	}
	else {
		leap = 1;
	}
	if (b / 10 % 10 == 0 && z3 == 0) {
		z3 = 0;
	}
	else {
		z3 = 1;
	}
	//Ê®Î»

	switch (b % 10) {
		case 0:
			if ((z1 || z2 || z3) && d != 0) {
				cout << "Áã";
			}
			break;
		case 1:
			cout << "Ò¼Ê°";
			break;
		case 2:
			cout << "·¡Ê°";
			break;
		case 3:
			cout << "ÈşÊ°";
			break;
		case 4:
			cout << "ËÁÊ°";
			break;
		case 5:
			cout << "ÎéÊ°";
			break;
		case 6:
			cout << "Â½Ê°";
			break;
		case 7:
			cout << "ÆâÊ°";
			break;
		case 8:
			cout << "°ÆÊ°";
			break;
		case 9:
			cout << "¾ÁÊ°";
			break;
	}
	//Èç¹ûÉÏÒ»Î»·Ç0£¬Ôòleap=1
	if (b % 10) {
		leap = 0;
	}
	else {
		leap = 1;
	}
	if (b % 10 == 0 && z3 == 0) {
		z3 = 0;
	}
	else {
		z3 = 1;
	}
	//Ô²

	switch (d) {
		case 0:
			if (z1 == 0 && z2 == 0 && z3 == 0 && n / 10 % 10 == 0 && n % 10 == 0) {
				cout << "ÁãÔ²";
			}
			if (z1 || z2 || z3) {

				cout << "Ô²";
			}
			break;
		case 1:
			cout << "Ò¼Ô²";
			break;
		case 2:
			cout << "·¡Ô²";
			break;
		case 3:
			cout << "ÈşÔ²";
			break;
		case 4:
			cout << "ËÁÔ²";
			break;
		case 5:
			cout << "ÎéÔ²";
			break;
		case 6:
			cout << "Â½Ô²";
			break;
		case 7:
			cout << "ÆâÔ²";
			break;
		case 8:
			cout << "°ÆÔ²";
			break;
		case 9:
			cout << "¾ÁÔ²";
			break;
	}
	if (d == 0 && z3 == 0) {
		z3 = 0;
	}
	else {
		z3 = 1;
	}







	//½Ç-·Ö

	if (n / 10 % 10 == 0 && n % 10 == 0) {
		cout << "Õû" << endl;
	}
	else {
		//½Ç
		switch (n / 10 % 10) {
			case 0:
				if (z1 == 0 && z2 == 0 && z3 == 0) {
					break;
				}
				else {
					cout << "Áã";
					break;

				}
			case 1:
				cout << "Ò¼½Ç";
				break;
			case 2:
				cout << "·¡½Ç";
				break;
			case 3:
				cout << "Èş½Ç";
				break;
			case 4:
				cout << "ËÁ½Ç";
				break;
			case 5:
				cout << "Îé½Ç";
				break;
			case 6:
				cout << "Â½½Ç";
				break;
			case 7:
				cout << "Æâ½Ç";
				break;
			case 8:
				cout << "°Æ½Ç";
				break;
			case 9:
				cout << "¾Á½Ç";
				break;
		}
		if (n % 10 == 0) {
			cout << "Õû" << endl;
		}
		else {
			//·Ö
			switch (n % 10) {

				case 1:
					cout << "Ò¼·Ö" << endl;
					break;
				case 2:
					cout << "·¡·Ö" << endl;
					break;
				case 3:
					cout << "Èş·Ö" << endl;
					break;
				case 4:
					cout << "ËÁ·Ö" << endl;
					break;
				case 5:
					cout << "Îé·Ö" << endl;
					break;
				case 6:
					cout << "Â½·Ö" << endl;
					break;
				case 7:
					cout << "Æâ·Ö" << endl;
					break;
				case 8:
					cout << "°Æ·Ö" << endl;
					break;
				case 9:
					cout << "¾Á·Ö" << endl;
					break;
			}

		}


	}






	return 0;

}

