#include <iostream>
#include "setCursor.h"
#include <windows.h>

using namespace std;

int wartosc_zaplaty[32] = { 0,25,25,40,100,50,50,70,0,80,80,100,0,120,100,150,0,160,100,170,0,180,180,200,0,220,220,250,0,270,200,300};

void kupowanie(int nr_gracza, int nr_pola)
{
	HANDLE napis;
	napis = GetStdHandle(STD_OUTPUT_HANDLE);
	int kolor;
	if (nr_gracza == 1)
		kolor = 2;
	else if(nr_gracza==2)
	{
		kolor = 3;
	}
	else if (nr_gracza == 3)
	{
		kolor = 4;
	}
	SetConsoleTextAttribute(napis, kolor);
	switch (nr_pola)
	{
	case 0:
		break;
	case 1:
		setCursor(21, 4);
		cout.width(4);
		cout << wartosc_zaplaty[nr_pola];
		break;
	case 2:
		setCursor(34, 4);
		cout.width(4);
		cout << wartosc_zaplaty[nr_pola];
		break;
	case 3:
		setCursor(47, 4);
		cout.width(4);
		cout << wartosc_zaplaty[nr_pola];
		break;
	case 4:
		setCursor(60, 4);
		cout.width(4);
		cout << wartosc_zaplaty[nr_pola];
		break;
	case 5:
		setCursor(73, 4);
		cout.width(4);
		cout << wartosc_zaplaty[nr_pola];
		break;
	case 6:
		setCursor(86, 4);
		cout.width(4);
		cout << wartosc_zaplaty[nr_pola];
		break;
	case 7:
		setCursor(99, 4);
		cout.width(4);
		cout << wartosc_zaplaty[nr_pola];
		break;
	case 8:
		break;
	case 9:
		setCursor(112, 9);
		cout.width(4);
		cout << wartosc_zaplaty[nr_pola];
		break;
	case 10:
		setCursor(112, 14);
		cout.width(4);
		cout << wartosc_zaplaty[nr_pola];
		break;
	case 11:
		setCursor(112, 19);
		cout.width(4);
		cout << wartosc_zaplaty[nr_pola];
		break;
	case 12:
		break;
	case 13:
		setCursor(112, 29);
		cout.width(4);
		cout << wartosc_zaplaty[nr_pola];
		break;
	case 14:
		setCursor(112, 34);
		cout.width(4);
		cout << wartosc_zaplaty[nr_pola];
		break;
	case 15:
		setCursor(112, 39);
		cout.width(4);
		cout << wartosc_zaplaty[nr_pola];
		break;
	case 16:
		break;
	case 17:
		setCursor(99, 44);
		cout.width(4);
		cout << wartosc_zaplaty[nr_pola];
		break;
	case 18:
		setCursor(86, 44);
		cout.width(4);
		cout << wartosc_zaplaty[nr_pola];
		break;
	case 19:
		setCursor(73, 44);
		cout.width(4);
		cout << wartosc_zaplaty[nr_pola];
		break;
	case 20:
		break;
	case 21:
		setCursor(47, 44);
		cout.width(4);
		cout << wartosc_zaplaty[nr_pola];
		break;
	case 22:
		setCursor(34, 44);
		cout.width(4);
		cout << wartosc_zaplaty[nr_pola];
		break;
	case 23:
		setCursor(21, 44);
		cout.width(4);
		cout << wartosc_zaplaty[nr_pola];
		break;
	case 24:
		break;
	case 25:
		setCursor(8, 39);
		cout.width(4);
		cout << wartosc_zaplaty[nr_pola];
		break;
	case 26:
		setCursor(8, 34);
		cout.width(4);
		cout << wartosc_zaplaty[nr_pola];
		break;
	case 27:
		setCursor(8, 29);
		cout.width(4);
		cout << wartosc_zaplaty[nr_pola];
		break;
	case 28:
		break;
	case 29:
		setCursor(8, 19);
		cout.width(4);
		cout << wartosc_zaplaty[nr_pola];
		break;
	case 30:
		break;
	case 31:
		setCursor(8, 9);
		cout.width(4);
		cout << wartosc_zaplaty[nr_pola];
		break;
	}
	SetConsoleTextAttribute(napis, FOREGROUND_GREEN| FOREGROUND_BLUE| FOREGROUND_RED);
}