#include <iostream>
#include "regulamin.h"
#include "setCursor.h"
#include <string>
#include<windows.h>
using namespace std;

void regulamin()
{
	cout <<endl<< " REGULAMIN"<<endl;
	cout << " 1. W gre moze grac trzech graczy." << endl;
	cout << " 2. Gracze otrzymuja 2500$ na poczatku gry."<<endl;
	cout << " 3. Gracze poruszaja sie wg. ruchu zegara." << endl;
	cout << " 4. Jesli gracz stanie na polu innego gracza musi mu zaplacic czynsz." << endl;
	string start = "";
	cout << " Wpisz start by zaczac gre: ";
	cin >> start;

	if (start == "start")
	{
		cout << " Czas start!!!";
		Sleep(2000);
		system("cls");
	}
	else
	{
		system("cls");
		regulamin();
	}
}