/*2250748 ĞÅ02 ÍõÓåûq*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int main()
{
	double h;
	printf("ÇëÊäÈë[0-100ÒÚ)Ö®¼äµÄÊı×Ö:\n");
	scanf("%lf", &h);
	double s = h + 0.001;

	int b = (int)(s / 10);
	unsigned int d = (unsigned int ) (s - 10 * b);
	unsigned int n = (unsigned int ) ((s - 10 * b - d) * 100);

	int leap;
	int z1;
	printf("´óĞ´½á¹ûÊÇ:\n");

		//Ê®ÒÚ-ÒÚ
		switch (b / 100000000 % 10) {
			case 0:
				break;
			case 1:
				printf("Ò¼Ê°");
				break;
			case 2:
				printf("·¡Ê°");
				break;
			case 3:
				printf("ÈşÊ°");
				break;
			case 4:
				printf("ËÁÊ°");
				break;
			case 5:
				printf("ÎéÊ°");
				break;
			case 6:
				printf("Â½Ê°");
				break;
			case 7:
				printf("ÆâÊ°");
				break;
			case 8:
				printf("°ÆÊ°");
				break;
			case 9:
				printf("¾ÁÊ°");
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
					printf("ÒÚ");
				}
				break;

			case 1:
				printf("Ò¼ÒÚ");
				break;
			case 2:
				printf("·¡ÒÚ");
				break;
			case 3:
				printf("ÈşÒÚ");
				break;
			case 4:
				printf("ËÁÒÚ");
				break;
			case 5:
				printf("ÎéÒÚ");
				break;
			case 6:
				printf("Â½ÒÚ");
				break;
			case 7:
				printf("ÆâÒÚ");
				break;
			case 8:
				printf("°ÆÒÚ");
				break;
			case 9:
				printf("¾ÁÒÚ");
				break;
		}

		if (b / 10000000 % 10 == 0 && z1 == 0) {
			z1 = 0;
		}
		else {
			z1 = 1;
		}







		//Ç§Íò-Íò
		int z2 = 0;
		switch (b / 1000000 % 10) {
			case 0:
				if (z1 && b / 100000 % 10 != 0) {
					printf("Áã");
				}
				break;

			case 1:
				printf("Ò¼Çª");
				break;
			case 2:
				printf("·¡Çª");
				break;
			case 3:
				printf("ÈşÇª");
				break;
			case 4:
				printf("ËÁÇª");
				break;
			case 5:
				printf("ÎéÇª");
				break;
			case 6:
				printf("Â½Çª");
				break;
			case 7:
				printf("ÆâÇª");
				break;
			case 8:
				printf("°ÆÇª");
				break;
			case 9:
				printf("¾ÁÇª");
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
					printf("Áã");
				}
				break;

			case 1:
				printf("Ò¼°Û");
				break;
			case 2:
				printf("·¡°Û");
				break;
			case 3:
				printf("Èş°Û");
				break;
			case 4:
				printf("ËÁ°Û");
				break;
			case 5:
				printf("Îé°Û");
				break;
			case 6:
				printf("Â½°Û");
				break;
			case 7:
				printf("Æâ°Û");
				break;
			case 8:
				printf("°Æ°Û");
				break;
			case 9:
				printf("¾Á°Û");
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
					printf("Áã");
				}
				break;

			case 1:
				printf("Ò¼Ê°");
				break;
			case 2:
				printf("·¡Ê°");
				break;
			case 3:
				printf("ÈşÊ°");
				break;
			case 4:
				printf("ËÁÊ°");
				break;
			case 5:
				printf("ÎéÊ°");
				break;
			case 6:
				printf("Â½Ê°");
				break;
			case 7:
				printf("ÆâÊ°");
				break;
			case 8:
				printf("°ÆÊ°");
				break;
			case 9:
				printf("¾ÁÊ°");
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
					printf("Íò");
				}
				break;

			case 1:
				printf("Ò¼Íò");
				break;
			case 2:
				printf("·¡Íò");
				break;
			case 3:
				printf("ÈşÍò");
				break;
			case 4:
				printf("ËÁÍò");
				break;
			case 5:
				printf("ÎéÍò");
				break;
			case 6:
				printf("Â½Íò");
				break;
			case 7:
				printf("ÆâÍò");
				break;
			case 8:
				printf("°ÆÍò");
				break;
			case 9:
				printf("¾ÁÍò");
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
					printf("Áã");
				}

				break;
			case 1:
				printf("Ò¼Çª");
				break;
			case 2:
				printf("·¡Çª");
				break;
			case 3:
				printf("ÈşÇª");
				break;
			case 4:
				printf("ËÁÇª");
				break;
			case 5:
				printf("ÎéÇª");
				break;
			case 6:
				printf("Â½Çª");
				break;
			case 7:
				printf("ÆâÇª");
				break;
			case 8:
				printf("°ÆÇª");
				break;
			case 9:
				printf("¾ÁÇª");
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
					printf("Áã");
				}
				break;

			case 1:
				printf("Ò¼°Û");
				break;
			case 2:
				printf("·¡°Û");
				break;
			case 3:
				printf("Èş°Û");
				break;
			case 4:
				printf("ËÁ°Û");
				break;
			case 5:
				printf("Îé°Û");
				break;
			case 6:
				printf("Â½°Û");
				break;
			case 7:
				printf("Æâ°Û");
				break;
			case 8:
				printf("°Æ°Û");
				break;
			case 9:
				printf("¾Á°Û");
				break;
		}
		
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
					printf("Áã");
				}
				break;
			case 1:
				printf("Ò¼Ê°");
				break;
			case 2:
				printf("·¡Ê°");
				break;
			case 3:
				printf("ÈşÊ°");
				break;
			case 4:
				printf("ËÁÊ°");
				break;
			case 5:
				printf("ÎéÊ°");
				break;
			case 6:
				printf("Â½Ê°");
				break;
			case 7:
				printf("ÆâÊ°");
				break;
			case 8:
				printf("°ÆÊ°");
				break;
			case 9:
				printf("¾ÁÊ°");
				break;
		}
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
					printf("ÁãÔ²");
				}
				if (z1 || z2 || z3) {

					printf("Ô²");
				}
				break;
			case 1:
				printf("Ò¼Ô²");
				break;
			case 2:
				printf("·¡Ô²");
				break;
			case 3:
				printf("ÈşÔ²");
				break;
			case 4:
				printf("ËÁÔ²");
				break;
			case 5:
				printf("ÎéÔ²");
				break;
			case 6:
				printf("Â½Ô²");
				break;
			case 7:
				printf("ÆâÔ²");
				break;
			case 8:
				printf("°ÆÔ²");
				break;
			case 9:
				printf("¾ÁÔ²");
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
			printf("Õû\n");
		}
		else {
			//½Ç
			switch (n / 10 % 10) {
				case 0:
					if (z1 == 0 && z2 == 0 && z3 == 0) {
						break;
					}
					else {
						printf("Áã");
						break;

					}
				case 1:
					printf("Ò¼½Ç");
					break;
				case 2:
					printf("·¡½Ç");
					break;
				case 3:
					printf("Èş½Ç");
					break;
				case 4:
					printf("ËÁ½Ç");
					break;
				case 5:
					printf("Îé½Ç");
					break;
				case 6:
					printf("Â½½Ç");
					break;
				case 7:
					printf("Æâ½Ç");
					break;
				case 8:
					printf("°Æ½Ç");
					break;
				case 9:
					printf("¾Á½Ç");
					break;
			}
			if (n % 10 == 0) {
				printf("Õû\n");
			}
			else {
				//·Ö
				switch (n % 10) {

					case 1:
						printf("Ò¼·Ö\n");
						break;
					case 2:
						printf("·¡·Ö\n");
						break;
					case 3:
						printf("Èş·Ö\n");
						break;
					case 4:
						printf("ËÁ·Ö\n");
						break;
					case 5:
						printf("Îé·Ö\n");
						break;
					case 6:
						printf("Â½·Ö\n");
						break;
					case 7:
						printf("Æâ·Ö\n");
						break;
					case 8:
						printf("°Æ·Ö\n");
						break;
					case 9:
						printf("¾Á·Ö\n");
						break;
				}

			}


		}






		return 0;

	}

