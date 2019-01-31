#include <iostream>
#include "rysowanie_mapy.h"
#include <string>
using namespace std;
//Zmienne u¿ywane w programie do wypisania szerokoœci i nazwy miast
int szerokosc = 10;
string miasta[32] = { "Start","Granada","Barcelona" ,"Madryt" ,"Bali" ,"Brno" ,"Praga"
,"Ostrava" ,"Wyspa" ,"Wenecja" ,"Mediolan" ,"Rzym" ,"Szansa" ,"Berlin"
,"Cypr" ,"Hamburg" ,"Impreza" ,"Londyn" ,"Dubai" ,"Sydney" ,"Szansa" ,"Atlanta" ,"L.Vegas" ,"Boston"
,"Parking" ,"Nicea" ,"Paryz" ,"Lyon" ,"Szansa" ,"Katowice" ,"Podatek" ,"Gliwice" };
int ceny_miast[32] = {0,120,120,160,250,200,200,240,0,280,280,320,0,360,250,400,0,440,250,480,0,520,520,580,0,600,600,660,0,700,-200,770};
//Funkcje które rysuj¹ mapê
void rysowanie_linipodNazwaZCena(int,int,int);
void rysowanie_lini_poziomej();
void rysowanie_pierwszejLini();
void rysowanie_liniZnazwaMiasta(int,int,int);
void rysowanie_linipodNazwa();
void rysowanie_ostatniejLini();
void rysowanie_lini_poziomejDolnej();
void rysowanie_linipoziomychZdwomaMiastami(int,int,int,int,int,int);
//Funkcja g³ówna
void rysowanie_mapy()
{
	rysowanie_lini_poziomej();
	cout << endl;
	rysowanie_linipoziomychZdwomaMiastami(2, 9, 2, 9, 0,6);
	cout << endl;
	rysowanie_linipoziomychZdwomaMiastami(2, 9, 2, 9, 1,6);
	cout << endl;
	rysowanie_linipoziomychZdwomaMiastami(2, 9, 4, 7, 2,6);
	cout << endl;
	rysowanie_linipoziomychZdwomaMiastami(3, 8, 3, 8, 3, 6);
	cout << endl;
	rysowanie_linipoziomychZdwomaMiastami(4, 7, 3, 8, 4,6);
	cout << endl;
	rysowanie_linipoziomychZdwomaMiastami(3, 8, 4, 7, 5,6);
	cout << endl;
	rysowanie_linipoziomychZdwomaMiastami(3, 8, 2, 9, 6,6);
	cout << endl;
	rysowanie_lini_poziomejDolnej();
}
//Deklaracja w/w funkcji
void rysowanie_lini_poziomej()
{
	for (int i = 1;i < szerokosc;i++)
	{
		cout << " ";
		rysowanie_pierwszejLini();
	}
	cout << endl<<' ';
	rysowanie_liniZnazwaMiasta(3, 8, 0);
	cout << ' ';
	rysowanie_liniZnazwaMiasta(2, 9, 1);
	cout << ' ';
	rysowanie_liniZnazwaMiasta(1, 10, 2);
	cout << ' ';
	rysowanie_liniZnazwaMiasta(3, 8, 3);
	cout << ' ';
	rysowanie_liniZnazwaMiasta(4, 7, 4);
	cout << ' ';
	rysowanie_liniZnazwaMiasta(4, 7, 5);
	cout << ' ';
	rysowanie_liniZnazwaMiasta(3, 8, 6);
	cout << ' ';
	rysowanie_liniZnazwaMiasta(2, 9, 7);
	cout << ' ';
	rysowanie_liniZnazwaMiasta(3, 8, 8);
	cout << ' '<<endl;
	for (int i = 1;i < szerokosc;i++)
	{
		cout << " ";
		rysowanie_linipodNazwa();
	}
	cout << endl;
	for (int i = 1;i < szerokosc;i++)
	{
		if ((i == 1) || (i == 9))
		{
			cout << " ";
			rysowanie_linipodNazwa();
		}
		else
		{
			cout << " ";
			rysowanie_linipodNazwaZCena(i - 1, 6, 5);
		}
	}
	cout << endl;

	for (int i = 1;i < szerokosc;i++)
	{
		cout << " ";
		rysowanie_ostatniejLini();
	}
}
void rysowanie_lini_poziomejDolnej() 
{
	for (int i = 1;i < szerokosc;i++)
	{
		cout << " ";
		rysowanie_pierwszejLini();
	}
	cout << endl << ' ';
	rysowanie_liniZnazwaMiasta(3, 8, 24);
	cout << ' ';
	rysowanie_liniZnazwaMiasta(3, 8, 23);
	cout << ' ';
	rysowanie_liniZnazwaMiasta(2, 9, 22);
	cout << ' ';
	rysowanie_liniZnazwaMiasta(2, 9, 21);
	cout << ' ';
	rysowanie_liniZnazwaMiasta(3, 8, 20);
	cout << ' ';
	rysowanie_liniZnazwaMiasta(3, 8, 19);
	cout << ' ';
	rysowanie_liniZnazwaMiasta(3, 8, 18);
	cout << ' ';
	rysowanie_liniZnazwaMiasta(3, 8, 17);
	cout << ' ';
	rysowanie_liniZnazwaMiasta(2, 9, 16);
	cout << ' ' << endl;
	for (int i = 1;i < szerokosc;i++)
	{
		cout << " ";
		rysowanie_linipodNazwa();
	}
	cout << endl;
	for (int i = 1;i < szerokosc;i++)
	{
		if ((i == 1) || (i == 9)||(i==5))
		{
			cout << " ";
			rysowanie_linipodNazwa();
		}
		else
		{
			cout << " ";
			rysowanie_linipodNazwaZCena(25-i, 6, 5);
		}
	}
	cout << endl;

	for (int i = 1;i < szerokosc;i++)
	{
		cout << " ";
		rysowanie_ostatniejLini();
	}
}
void rysowanie_pierwszejLini()
{
	cout << char(201);
	for (int i = 0;i < szerokosc;i++)
		cout << char(205);
	cout << char(187);
}
void rysowanie_liniZnazwaMiasta(int przed,int po,int id_miasta)
{
	cout.width(przed);
	cout <<left<< char(186);
	cout.width(po);
	cout << miasta[id_miasta];
	cout << char(186);
}
void rysowanie_linipodNazwa()
{
	cout.width(11);
	cout << char(186);
	cout << char(186);
}
void rysowanie_linipodNazwaZCena(int nr_lini,int przed, int po)
{
	cout.width(przed);
	cout << left << char(186);
	cout.width(po);
	cout << ceny_miast[nr_lini];
	cout << char(186);
}
void rysowanie_ostatniejLini()
{
	cout << char(200);
	for (int i = 0;i < szerokosc;i++)
		cout << char(205);
	cout << char(188);
}
void rysowanie_linipoziomychZdwomaMiastami(int przed1,int po1,int przed2,int po2,int id_miasta,int cena)
{
	cout << ' ';
	rysowanie_pierwszejLini();
	cout.width(92);cout << ' ';
	rysowanie_pierwszejLini();
	cout << endl<<' ';
	rysowanie_liniZnazwaMiasta(przed1, po1, 31-id_miasta);
	cout.width(92);cout << ' ';
	rysowanie_liniZnazwaMiasta(przed2, po2, 9+id_miasta);
	cout << endl << ' ';
	rysowanie_linipodNazwa();
	cout.width(92);cout << ' ';
	rysowanie_linipodNazwa();
	cout << endl << ' ';
	if (id_miasta != 3) 
	{
		rysowanie_linipodNazwaZCena(31 - id_miasta, cena, cena - 1);
		cout.width(92);cout << ' ';
		rysowanie_linipodNazwaZCena(9 + id_miasta, cena, cena - 1);
		cout << endl << ' ';
	}
	else
	{
		rysowanie_linipodNazwa();
		cout.width(92);cout << ' ';
		rysowanie_linipodNazwa();
		cout << endl << ' ';
	}
	rysowanie_ostatniejLini();
	cout.width(92);cout << ' ';
	rysowanie_ostatniejLini();
}