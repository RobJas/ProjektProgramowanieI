#include <iostream>
#include "usuwanie_pionkow.h"
#include "rysowanie_pionkow.h"
#include <ctime>
#include <windows.h>
#include <string>
#include "setCursor.h"
#include "kupowanie.h"

int moneyA = 2500;
int moneyB = 2500;
int moneyC = 2500;
int pozycja_gracza_A = 1;
int pozycja_gracza_B = 1;
int pozycja_gracza_C = 1;
int Los_gracza_A = 0;
int Los_gracza_B = 0;
int Los_gracza_C = 0;
int ruch_gracza = 0;
int czy_moze_A = 1;
int czy_moze_B = 1;
int czy_moze_C = 1;

using namespace std;
string miasta1[32] = { "Start","Granada","Barcelona" ,"Madryt" ,"Bali" ,"Brno" ,"Praga"
,"Ostrava" ,"Wyspa" ,"Wenecja" ,"Mediolan" ,"Rzym" ,"Szansa" ,"Berlin"
,"Cypr" ,"Hamburg" ,"Impreza" ,"Londyn" ,"Dubai" ,"Sydney" ,"Szansa" ,"Atlanta" ,"L.Vegas" ,"Boston"
,"Parking" ,"Nicea" ,"Paryz" ,"Lyon" ,"Szansa" ,"Katowice" ,"Podatek" ,"Gliwice" };
int ceny_miast1[32] = { 0,120,120,160,250,200,200,240,0,280,280,320,0,360,250,400,0,440,250,480,0,520,520,580,0,600,600,660,0,700,-200,770 };
int kto_kupil[32] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
int wartosc_zaplaty1[32] = { 0,25,25,40,100,50,50,70,0,80,80,100,0,120,100,150,0,160,100,170,0,180,180,200,0,220,220,250,0,270,200,300 };

int losowy_ruch();
void wyswietlanie_gotowki_i_miejsca();
void menu(int);
void menu_kupowania(int, int);
void szansa(int);
bool sprawdz_czy_koniec(int,int,int);
void gra_struktura()
{
	while (true)
	{
		wyswietlanie_gotowki_i_miejsca();
		//RUCH GRACZA A
		if (czy_moze_A == 1)
		{
			Los_gracza_A = losowy_ruch();
			rysowanie_pionkow(pozycja_gracza_A, 1);
			setCursor(2, 46);
			menu(1);
			Sleep(500);
			for (int i = 0;i < 6;i++)
			{
				setCursor(1, 46 + i);
				cout << "                                                      ";
			}
			usuwanie_pionkow(pozycja_gracza_A);
			rysowanie_pionkow(pozycja_gracza_B, 2);
			rysowanie_pionkow(pozycja_gracza_C, 3);
			pozycja_gracza_A += Los_gracza_A;
			if (pozycja_gracza_A > 32)
			{
				pozycja_gracza_A = pozycja_gracza_A % 32;
				moneyA += 400;
			}
			wyswietlanie_gotowki_i_miejsca();
			rysowanie_pionkow(pozycja_gracza_A, 1);
			setCursor(2, 46);
			menu_kupowania(1, pozycja_gracza_A);
			for (int i = 0;i < 6;i++)
			{
				setCursor(2, 46 + i);
				cout << "                                                           ";
			}
		}
		else
			czy_moze_A += 1;
		wyswietlanie_gotowki_i_miejsca();
		if (sprawdz_czy_koniec(moneyA, moneyB, moneyC) == true)
		{
			system("cls");
			setCursor(120,10);
			cout << "KONIEC GRY";
			break;
		}
		//RUCH GRACZA B
		if (czy_moze_B == 1)
		{
			Los_gracza_B = losowy_ruch();
			rysowanie_pionkow(pozycja_gracza_B, 2);
			setCursor(2, 46);
			menu(2);
			Sleep(500);
			for (int i = 0;i < 6;i++)
			{
				setCursor(2, 46 + i);
				cout << "                                                      ";
			}
			usuwanie_pionkow(pozycja_gracza_B);
			rysowanie_pionkow(pozycja_gracza_A, 1);
			rysowanie_pionkow(pozycja_gracza_C, 3);
			pozycja_gracza_B += Los_gracza_B;
			if (pozycja_gracza_B > 32)
			{
				pozycja_gracza_B = pozycja_gracza_B % 32;
				moneyB += 400;
			}
			wyswietlanie_gotowki_i_miejsca();
			rysowanie_pionkow(pozycja_gracza_B, 2);
			setCursor(2, 46);
			menu_kupowania(2, pozycja_gracza_B);
			for (int i = 0;i < 6;i++)
			{
				setCursor(2, 46 + i);
				cout << "                                                           ";
			}
		}
		else
			czy_moze_B += 1;
		wyswietlanie_gotowki_i_miejsca();
		if (sprawdz_czy_koniec(moneyA, moneyB, moneyC) == true)
		{
			system("cls");
			setCursor(120, 10);
			cout << "KONIEC GRY";
			break;
		}
		//RUCH GRACZA C
		if (czy_moze_C == 1)
		{
			Los_gracza_C = losowy_ruch();
			rysowanie_pionkow(pozycja_gracza_C, 3);
			setCursor(2, 46);
			menu(3);
			Sleep(500);
			for (int i = 0;i < 6;i++)
			{
				setCursor(2, 46 + i);
				cout << "                                                      ";
			}
			wyswietlanie_gotowki_i_miejsca();
			usuwanie_pionkow(pozycja_gracza_C);
			rysowanie_pionkow(pozycja_gracza_B, 2);
			rysowanie_pionkow(pozycja_gracza_A, 1);
			pozycja_gracza_C += Los_gracza_C;
			if (pozycja_gracza_C > 32)
			{
				pozycja_gracza_C = pozycja_gracza_C % 32;
				moneyC += 400;
			}
			rysowanie_pionkow(pozycja_gracza_C, 3);
			setCursor(2, 46);
			menu_kupowania(3, pozycja_gracza_C);
			for (int i = 0;i < 6;i++)
			{
				setCursor(2, 46 + i);
				cout << "                                                           ";
			}
		}
		else
			czy_moze_C += 1;
		wyswietlanie_gotowki_i_miejsca();
		if (sprawdz_czy_koniec(moneyA, moneyB, moneyC) == true)
		{
			system("cls");
			setCursor(120, 10);
			cout << "KONIEC GRY";
			break;
		}
	}
}
int losowy_ruch()
{
	srand(time(NULL));
	int a;
	a = rand() % 6;
	a = a + 1;
	return a;
}
void menu(int nr_gracza) 
{
	char gracz;
	if (nr_gracza == 1)
		gracz = 'A';
	else if (nr_gracza == 2)
		gracz = 'B';
	else if (nr_gracza == 3)
		gracz = 'C';
	int wybor = 0;
	cout << "Ruch Gracza "<<gracz << endl;
	cout << " 1. Rzuc kostka: ";
	cin >> wybor;
	if (wybor == 1)
	{
		switch (nr_gracza)
		{
		case 1:
			cout << "    Wyrzuciles: " << Los_gracza_A;
			break;
		case 2:
			cout << "    Wyrzuciles: " << Los_gracza_B;
			break;
		case 3:
			cout << "    Wyrzuciles: " << Los_gracza_C;
			break;
		}
	}
	else
	{
		cout << " Wpisz 1 by grac";
		setCursor(17, 47);
		cout << "         ";
		setCursor(2, 46);
		menu(nr_gracza);
	}
}
void menu_kupowania(int nr_gracza, int pozycjanamapie)
{
	int wybor2;
	if ((pozycjanamapie == 1))
	{
		cout << "Start";
		Sleep(2000);
	}
	if ((pozycjanamapie == 17))
	{
		cout << "Impreza";
		Sleep(2000);
	}
	if ((pozycjanamapie == 25))
	{
		cout << "Parkujesz";
		Sleep(2000);
	}
	else if ((pozycjanamapie == 9))
	{
		switch (nr_gracza)
		{
		case 1:
			cout << "Zatrzymujesz sie na wyspie na dwie kolejki";
			czy_moze_A = -1;
			Sleep(2000);
			break;
		case 2:
			cout << "Zatrzymujesz sie na wyspie na dwie kolejki";
			czy_moze_B = -1;
			Sleep(2000);
			break;
		case 3:
			cout << "Zatrzymujesz sie na wyspie na dwie kolejki";
			czy_moze_C = -1;
			Sleep(2000);
			break;
		}
	}
	else if ((pozycjanamapie == 31))
	{
		switch (nr_gracza)
		{
			case 1:
				moneyA -= 200;
				break;
			case 2:
				moneyB -= 200;
				break;
			case 3:
				moneyC -= 200;
				break;
		}
	}
	else if ((pozycjanamapie == 29) || (pozycjanamapie == 13) || (pozycjanamapie == 21))
		szansa(nr_gracza);
	else
	{
		if (kto_kupil[pozycjanamapie - 1] == 0)
		{
			cout << "1. Kup miasto: " << endl;
			cout << " 2. Nie kupij: " << endl;
			cout << "    Co zrobic: ";
			cin >> wybor2;
			if (wybor2 == 1)
			{
				switch (nr_gracza)
				{
				case 1:
					if (ceny_miast1[pozycjanamapie-1] > moneyA)
					{
						cout << " Nie stac cie by kupic to miasto!";
						Sleep(2000);
					}
					else
					{
						kto_kupil[pozycjanamapie - 1] = nr_gracza;
						kupowanie(nr_gracza, pozycjanamapie - 1);
						moneyA -= ceny_miast1[pozycjanamapie - 1];
					}
					break;
				case 2:
					if (ceny_miast1[pozycjanamapie-1] > moneyB)
					{
						cout << " Nie stac cie by kupic to miasto!";
						Sleep(2000);
					}
					else
					{
						kto_kupil[pozycjanamapie - 1] = nr_gracza;
						kupowanie(nr_gracza, pozycjanamapie - 1);
						moneyB -= ceny_miast1[pozycjanamapie - 1];
					}
					break;
				case 3:
					if (ceny_miast1[pozycjanamapie-1] > moneyC)
					{
						cout << " Nie stac cie by kupic to miasto!";
						Sleep(2000);
					}
					else
					{
						kto_kupil[pozycjanamapie - 1] = nr_gracza;
						kupowanie(nr_gracza, pozycjanamapie - 1);
						moneyC -= ceny_miast1[pozycjanamapie - 1];
					}
					break;
				}
			}
			else if (wybor2 == 2)
				cout << "";
			else
			{
				cout << " Wpisz jeden lub dwa!!!";
				setCursor(15, 48);
				cout << "          ";
				setCursor(2, 46);
				menu_kupowania(nr_gracza, pozycjanamapie);
			}
		}
		else 
		{
			switch (nr_gracza)
			{
				case 1:
					
					if (kto_kupil[pozycjanamapie - 1] == 2)
					{
						moneyA -= wartosc_zaplaty1[pozycjanamapie - 1];
						moneyB += wartosc_zaplaty1[pozycjanamapie - 1];
					}
					else if (kto_kupil[pozycjanamapie - 1] == 3)
					{
						moneyA -= wartosc_zaplaty1[pozycjanamapie - 1];
						moneyC += wartosc_zaplaty1[pozycjanamapie - 1];
					}
					break;
				case 2:
					if (kto_kupil[pozycjanamapie - 1] == 1)
					{
						moneyB -= wartosc_zaplaty1[pozycjanamapie - 1];
						moneyA += wartosc_zaplaty1[pozycjanamapie - 1];
					}
					else if (kto_kupil[pozycjanamapie - 1] == 3)
					{
						moneyB -= wartosc_zaplaty1[pozycjanamapie - 1];
						moneyC += wartosc_zaplaty1[pozycjanamapie - 1];
					}
					break;
				case 3:
					if (kto_kupil[pozycjanamapie - 1] == 2)
					{
						moneyC -= wartosc_zaplaty1[pozycjanamapie - 1];
						moneyB += wartosc_zaplaty1[pozycjanamapie - 1];
					}
					else if (kto_kupil[pozycjanamapie - 1] == 1)
					{
						moneyC -= wartosc_zaplaty1[pozycjanamapie - 1];
						moneyB += wartosc_zaplaty1[pozycjanamapie - 1];
					}
					break;
			}
			cout << "To miasto jest kupione!!!";
			Sleep(2000);
		}
	}
}
void szansa(int nr_gracza)
{
	int jaka = losowy_ruch();
	string szanse[6] = { "Wraczasz do Rzymu",
		"Placisz na budowe szpitala 400$",
		"Wracasz na Start",
		"Bank omylil sie na twoja korzysc otrzymujesz 400$",
		"Otrzymujesz roczna rete w wysokosci 200$",
		"Placisz podatek w wysokosci 200$" };
	cout << szanse[jaka];
	switch (jaka)
	{
		case 0:
			if (nr_gracza == 1)
			{
				pozycja_gracza_A = 12;
				usuwanie_pionkow(21);
				usuwanie_pionkow(13);
				usuwanie_pionkow(29);
				rysowanie_pionkow(12, 1);
			}
			else if (nr_gracza == 2)
			{
				pozycja_gracza_B = 12;
				usuwanie_pionkow(21);
				usuwanie_pionkow(13);
				usuwanie_pionkow(29);
				rysowanie_pionkow(12, 2);
			}
			else if (nr_gracza == 3)
			{
				pozycja_gracza_B = 12;
				usuwanie_pionkow(21);
				usuwanie_pionkow(13);
				usuwanie_pionkow(29);
				rysowanie_pionkow(12,3);
			}
			break;
		case 1:
			if (nr_gracza == 1)
				moneyA -= 400;
			else if (nr_gracza == 2)
				moneyB -= 400;
			else if (nr_gracza == 3)
				moneyC -= 400;
			break;
		case 2:
			if (nr_gracza == 1)
			{
				pozycja_gracza_A = 1;
				usuwanie_pionkow(21);
				usuwanie_pionkow(13);
				usuwanie_pionkow(29);
				rysowanie_pionkow(1, 1);
			}
			else if (nr_gracza == 2)
			{
				pozycja_gracza_B = 1;
				usuwanie_pionkow(21);
				usuwanie_pionkow(13);
				usuwanie_pionkow(29);
				rysowanie_pionkow(1, 2);
			}
			else if (nr_gracza == 3)
			{
				pozycja_gracza_C = 1;
				usuwanie_pionkow(21);
				usuwanie_pionkow(13);
				usuwanie_pionkow(29);
				rysowanie_pionkow(1, 3);
			}
			break;
		case 3:
			if (nr_gracza == 1)
				moneyA += 400;
			else if (nr_gracza == 2)
				moneyB += 400;
			else if (nr_gracza == 3)
				moneyC += 400;
			break;
		case 4:
			if (nr_gracza == 1)
				moneyA += 200;
			else if (nr_gracza == 2)
				moneyB += 200;
			else if (nr_gracza == 3)
				moneyC += 200;
			break;
		case 5:
			if (nr_gracza == 1)
				moneyA -= 200;
			else if (nr_gracza == 2)
				moneyB -= 200;
			else if (nr_gracza == 3)
				moneyC -= 200;
			break;
	}
	Sleep(2000);
}
void wyswietlanie_gotowki_i_miejsca()
{
	setCursor(137, 17);
	cout << "              ";
	setCursor(137, 18);
	cout << "              ";
	setCursor(137, 22);
	cout << "              ";
	setCursor(137, 23);
	cout << "              ";
	setCursor(137, 27);
	cout << "              ";
	setCursor(137, 28);
	cout << "              ";
	
	setCursor(120, 17);
	cout << "Kredyty gracza A: " << moneyA<<endl;
	setCursor(120, 18);
	cout <<"Pozycja gracza A: "<< miasta1[pozycja_gracza_A-1];
	
	setCursor(120, 22);
	cout << "Kredyty gracza B: " << moneyB << endl;
	setCursor(120, 23);
	cout << "Pozycja gracza B: " << miasta1[pozycja_gracza_B - 1];

	setCursor(120, 27);
	cout << "Kredyty gracza C: " << moneyC << endl;
	setCursor(120, 28);
	cout << "Pozycja gracza C: " << miasta1[pozycja_gracza_C - 1];
}
bool sprawdz_czy_koniec(int kredytyA, int kredytyB, int kredytyC)
{
	if ((kredytyA < 0) || (kredytyB < 0) || (kredytyC < 0))
		return true;
	else
		return false;
}