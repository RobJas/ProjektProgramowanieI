#include <iostream>
#include <windows.h>
#include <cstdlib>
#include "setCursor.h"
using namespace std;
char tab[7] = {' ',' ',' ',' ',' ',' ',' '};

void rysowanie(int,int);
void rysowanie_pionkow(int nr_pola, int nr_gracza)
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	switch (nr_gracza)
	{
	case 1:
		SetConsoleTextAttribute(hOut, 2);
		tab[1] = 'A';
		rysowanie(nr_pola, 1);
		SetConsoleTextAttribute(hOut, FOREGROUND_BLUE|FOREGROUND_GREEN|FOREGROUND_RED);
		break;
	case 2:
		SetConsoleTextAttribute(hOut, 3);
		tab[3] = 'B';
		rysowanie(nr_pola, 2);
		SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
		break;
	case 3:
		SetConsoleTextAttribute(hOut, 4);
		tab[5] = 'C';
		rysowanie(nr_pola, 3);
		SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
		break;
	}
}
void rysowanie(int nr_pola,int nr_gracza)
{
	int dodanie_seta;
	int nr_tabeli;
	int kolor;
	if (nr_gracza == 1)
	{
		dodanie_seta = 0;
		nr_tabeli = 1;
		kolor = 2;
	}
	else if (nr_gracza == 2)
	{
		dodanie_seta = 2;
		kolor = 7;
		nr_tabeli = 3;
	}
	else
	{
		dodanie_seta = 4;
		nr_tabeli = 5;
		kolor = 5;
	}
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	switch (nr_pola)
	{
	case 1:
		setCursor(4, 3);
		cout << tab[nr_tabeli];
		break;
	case 2:
		setCursor(17, 3);
		cout << tab[nr_tabeli];
		break;
	case 3:
		setCursor(30, 3);
		cout << tab[nr_tabeli];
		break;
	case 4:
		setCursor(43, 3);
		cout << tab[nr_tabeli];
		break;
	case 5:
		setCursor(56, 3);
		cout << tab[nr_tabeli];
		break;
	case 6:
		setCursor(69, 3);
		cout << tab[nr_tabeli];
		break;
	case 7:
		setCursor(82, 3);
		cout << tab[nr_tabeli];
		break;
	case 8:
		setCursor(95, 3);
		cout << tab[nr_tabeli];
		break;
	case 9:
		setCursor(108, 3);
		cout << tab[nr_tabeli];
		break;
	case 10:
		setCursor(108, 8);
		cout << tab[nr_tabeli];
		break;
	case 11:
		setCursor(108, 13);
		cout << tab[nr_tabeli];
		break;
	case 12:
		setCursor(108, 18);
		cout << tab[nr_tabeli];
		break;
	case 13:
		setCursor(108, 23);
		cout << tab[nr_tabeli];
		break;
	case 14:
		setCursor(108, 28);
		cout << tab[nr_tabeli];
		break;
	case 15:
		setCursor(108, 33);
		cout << tab[nr_tabeli];
		break;
	case 16:
		setCursor(108, 38);
		cout << tab[nr_tabeli];
		break;
	case 17:
		setCursor(108, 43);
		cout << tab[nr_tabeli];
		break;
	case 18:
		setCursor(95, 43);
		cout << tab[nr_tabeli];
		break;
	case 19:
		setCursor(82, 43);
		cout << tab[nr_tabeli];
		break;
	case 20:
		setCursor(69, 43);
		cout << tab[nr_tabeli];
		break;
	case 21:
		setCursor(56, 43);
		cout << tab[nr_tabeli];
		break;
	case 22:
		setCursor(43, 43);
		cout << tab[nr_tabeli];
		break;
	case 23:
		setCursor(30, 43);
		cout << tab[nr_tabeli];
		break;
	case 24:
		setCursor(17, 43);
		cout << tab[nr_tabeli];
		break;
	case 25:
		setCursor(4, 43);
		cout << tab[nr_tabeli];
		break;
	case 26:
		setCursor(4, 38);
		cout << tab[nr_tabeli];
		break;
	case 27:
		setCursor(4, 33);
		cout << tab[nr_tabeli];
		break;
	case 28:
		setCursor(4, 28);
		cout << tab[nr_tabeli];
		break;
	case 29:
		setCursor(4, 23);
		cout << tab[nr_tabeli];
		break;
	case 30:
		setCursor(4, 18);
		cout << tab[nr_tabeli];
		break;
	case 31:
		setCursor(4, 13);
		cout << tab[nr_tabeli];
		break;
	case 32:
		setCursor(4, 8);
		cout << tab[nr_tabeli];
		break;
	}
}


